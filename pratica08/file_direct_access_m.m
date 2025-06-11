%{
Program: file_direct_access_m

Author: Gabriel Vitor Amaral Ramos

Date: 04/06/2025

Description: [This program demonstrates how to write and read two date structures to and from a binary file.]

License: [CC BY]]
%}

% Define the two date structures
d1 = struct('d', 7, 'm', 9, 'a', 1999);
d2 = struct('d', 12, 'm', 5, 'a', 2024);

% Ask the user for the filename
filename = input('Enter filename: ', 's');

% Open the file for writing in binary mode
fileID = fopen(filename, 'w');
if fileID == -1
    error('Error! Unable to open file for writing!');
end

% Write the structures to the file
fwrite(fileID, [d1.d d1.m d1.a d2.d d2.m d2.a], 'int32');
fclose(fileID);

% Open the file for reading in binary mode
fileID = fopen(filename, 'r');
if fileID == -1
    error('Error! Unable to open file for reading!');
end

% Read the data back
data = fread(fileID, 6, 'int32');
fclose(fileID);

% Reconstruct the structures
e1 = struct('d', data(1), 'm', data(2), 'a', data(3));
e2 = struct('d', data(4), 'm', data(5), 'a', data(6));

% Display the dates
fprintf('First Date: %d/%d/%d\n', e1.a, e1.m, e1.d);
fprintf('Second Date: %d/%d/%d\n', e2.a, e2.m, e2.d);
