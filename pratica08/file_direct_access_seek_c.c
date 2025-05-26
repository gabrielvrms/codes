#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];
    int position = 3; // Position for reading/writing in the file

    // Open the file in binary read/write mode
    file = fopen("data.bin", "wb+");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    // Move the cursor to the desired position in the file
    fseek(file, position * sizeof(data), SEEK_SET);

    // Write 'G' to the file at the specified position
    fputc('G', file);

    // Close the file
    fclose(file);

    // Open the file again in binary read/write mode
    file = fopen("data.bin", "rb+");

    // Check if the file was opened successfully for reading
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Move the cursor to the read position
    fseek(file, position * sizeof(data), SEEK_SET);

    // Read the data from the file at the specified position
    fread(data, sizeof(data), 1, file);
    printf("Data read from position %d: %s\n", position, data);

    // Close the file again
    fclose(file);

    return 0;
}