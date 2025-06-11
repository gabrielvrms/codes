'''

Program: file_serial_access_by_line_py

Author: Gabriel Vitor Amaral

Date: 04/06/2025

Description: this script reads a file line by line, splits each line by commas, and prints each token.

License: [CC BY]

'''
# Open the file "test_file.txt" in read mode
with open("test_file.txt", "r") as file:
    # Iterate over each line in the file
    for line in file:
        # Remove leading/trailing whitespace and split the line by commas
        tokens = line.strip().split(',')
        # Iterate over each token and print it
        for token in tokens:
            print(token)
