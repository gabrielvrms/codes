#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep function (use Sleep on Windows)

// Simulated time-consuming function
int long_evaluation() {
    sleep(5);  // Delay execution for 2 seconds
    return 1;
}

// Function that forces evaluation of both expressions
void test_and_no_short_circuit() {
    clock_t start_time = clock();

    int a = 0; // This will ensure that the second expression is always evaluated
    if (a == 1 & long_evaluation()) {
        printf("True expression\n");
    }

    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time without short-circuit: %f seconds\n", elapsed_time);
}

// Function that benefits from short-circuiting
void test_and_short_circuit() {
    clock_t start_time = clock();

    int a = 0; // This will ensure that the second expression is never evaluated
    if (a == 1 && long_evaluation()) {
        printf("True expression\n");
    }

    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time with short-circuit: %f seconds\n", elapsed_time);
}

int main() {
    // Test the function without short-circuiting
    test_and_no_short_circuit();

    // Test the function with short-circuiting
    test_and_short_circuit();

    return 0;
}