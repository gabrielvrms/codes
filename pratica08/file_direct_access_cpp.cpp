/*

Program: file_direct_access_cpp

Author: Gabriel Vitor Amaral Ramos 

Date: 04/06/2025

Description: Demonstrates reading and writing structures as binary data to a file in C++.

License: [CC BY]

*/
#include <iostream>
#include <fstream>  // To work with files in C++
#include <string>   // To work with strings in C++

// Definition of the "data" structure to represent dates
struct data {
    int d, m, a;  // Day, month, year
};

int main() {
    struct data d1 = {7, 9, 1999};  // Initialization of the first date
    struct data d2 = {12, 5, 2024};  // Initialization of the second date
    
    struct data e1;  // Declaration of another date for reading from the file
    struct data e2;  // Declaration of another date for reading from the file

    std::ofstream file;  // File output stream
    std::ifstream fileInput;  // File input stream
    std::string filename;  // String to store the file name
    
    // Asks the user for the file name
    std::cout << "Enter filename:";
    std::getline(std::cin, filename);  // Reads user input securely
    
    // Opens the file for binary writing
    file.open(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cout << "Error! Unable to open file for writing!\n";
        return 1;  // Exits the program in case of error
    }
    file.write(reinterpret_cast<char*>(&d1), sizeof(struct data));  // Writes the first structure to the file
    file.write(reinterpret_cast<char*>(&d2), sizeof(struct data));  // Writes the second structure to the file
    file.close();  // Closes the file

    // Opens the file for binary reading
    fileInput.open(filename, std::ios::binary);
    if (!fileInput.is_open()) {
        std::cout << "Error! Unable to open file for reading!\n";
        return 1;  // Exits the program in case of error
    }
    fileInput.read(reinterpret_cast<char*>(&e1), sizeof(struct data));  // Reads the first structure from the file
    fileInput.read(reinterpret_cast<char*>(&e2), sizeof(struct data));  // Reads the second structure from the file
    fileInput.close();  // Closes the file

    // Displays the dates read from the file
    std::cout << "First Date: " << e1.a << "/" << e1.m << "/" << e1.d << std::endl;
    std::cout << "Second Date: " << e2.a << "/" << e2.m << "/" << e2.d << std::endl;

    return 0;  // Indicates that the program executed successfully
}