#include <stdio.h>

int main() {
    FILE *file;
    // File to be read
    char filename[100] = "C:\\Users\\20241en20268\\Documents\\GabrielRamos_LP\\codes\\pratica08\\test_file.txt";
    char line[100];

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit the program with an error code
    }

    // Read each line from the file serially and display it on the screen
    while (fgets(line, sizeof(line), file) != NULL) {
        // \n is included to show how many information is get each time
        printf("%s\n", line);
    }

    // Close the file
    fclose(file);

    return 0; // Return 0 indicating successful program termination
}