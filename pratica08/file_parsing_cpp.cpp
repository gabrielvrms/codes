/*

Program: file_parsing_cpp

Author: Gabriel Vitor Amaral Ramos 

Date: 04/06/2025

Description: Demonstrates reading a text file and parsing its content in C++.

License: [CC BY]

*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    // Open the file "test_file.txt" for reading
    std::ifstream file("test_file.txt");
    if (!file.is_open()) {
        // Print error message if file cannot be opened
        std::perror("Error opening file");
        return 1;
    }

    std::string line;
    // Read the file line by line
    while (std::getline(file, line)) {
        std::stringstream ss(line); // Create a stringstream from the line
        std::string token;
        // Split the line by commas and print each token
        while (std::getline(ss, token, ',')) {
            std::cout << token << std::endl;
        }
    }

    file.close(); // Close the file
    return 0;
}
