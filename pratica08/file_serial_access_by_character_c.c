#include <stdio.h>

int main() {
    FILE *file;
    // File to be read
    char filename[100] = "C:\\Users\\20241en20268\\Documents\\GabrielRamos_LP\\codes\\pratica08\\test_file.txt";
    char character;

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit the program with an error code
    }

    // Read each character from the file serially and print it on the screen
    while ((character = fgetc(file)) != EOF) {
        // \n is included to show how much information is get each time
        printf("%c\n", character); 
    }

    // Close the file
    fclose(file);

    return 0; // Return 0 indicating successful program termination
}