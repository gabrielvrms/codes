'''

Program: file_serial_access_by_line_py

Author: Gabriel Vitor Amaral

Date: 04/06/2025

Description: create a file and read it line by line, printing each line without the trailing newline character.

License: [CC BY]

'''
# Define the path to the file to be read
filename = "C:\\Users\\20241en20268\\Documents\\GabrielRamos_LP\\codes\\pratica08\\test_file.txt"

try:
    # Open the file in read mode
    with open(filename, "r") as file:
        # Iterate over each line in the file
        for line in file:
            # Print the line without the trailing newline character
            print(line.rstrip())  # Removes the trailing newline for cleaner output
except FileNotFoundError:
    # Print an error message if the file is not found
    print("Error opening the file.")
