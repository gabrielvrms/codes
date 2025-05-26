#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    // File to be read
    std::string filename = "C:\\Users\\20241en20268\\Documents\\GabrielRamos_LP\\codes\\pratica08\\test_file.txt";
    std::string line;

    // Open the file for reading
    file.open(filename);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cout << "Error opening the file." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Read each line from the file serially and display it on the screen
    while (std::getline(file, line)) {
        // \n is included to show how many information is get each time
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    return 0; // Return 0 indicating successful program termination
}