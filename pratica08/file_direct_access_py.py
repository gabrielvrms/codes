'''

Program: file_direct_access_py

Author: Gabriel Vitor Amaral

Date: 04/06/2025

Description: create a file with two dates in binary format, read them back, and print them in year/month/day format.

License: [CC BY]

'''
import struct  # Import the struct module for packing/unpacking binary data

# Define a Data class to represent a date
class Data:
    def __init__(self, d, m, a):
        self.d = d  # Day
        self.m = m  # Month
        self.a = a  # Year

    # Pack the date fields into binary format
    def pack(self):
        return struct.pack('iii', self.d, self.m, self.a)

    # Unpack binary data into a Data object
    @staticmethod
    def unpack(data_bytes):
        d, m, a = struct.unpack('iii', data_bytes)
        return Data(d, m, a)

# Ask the user for the filename
filename = input("Enter filename:")

# Create two Data objects with specific dates
d1 = Data(7, 9, 1999)
d2 = Data(12, 5, 2024)

# Write the packed data to the file in binary mode
with open(filename, 'wb') as f:
    f.write(d1.pack())
    f.write(d2.pack())

# Read the packed data from the file in binary mode
with open(filename, 'rb') as f:
    e1_bytes = f.read(struct.calcsize('iii'))  # Read bytes for the first date
    e2_bytes = f.read(struct.calcsize('iii'))  # Read bytes for the second date
    e1 = Data.unpack(e1_bytes)  # Unpack first date
    e2 = Data.unpack(e2_bytes)  # Unpack second date

# Print the dates in year/month/day format
print(f"First Date: {e1.a}/{e1.m}/{e1.d}")
print(f"Second Date: {e2.a}/{e2.m}/{e2.d}")
