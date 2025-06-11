%{
Program: file_serial_access_by_line_m

Author: Gabriel Vitor Amaral Ramos

Date: 04/06/2025

Description: [This program reads a text file line by line and displays each line on the screen.]

License: [CC BY]]
%}

% Open the file for reading
filename = 'C:\Users\20241en20268\Documents\GabrielRamos_LP\codes\pratica08\test_file.txt';
fileID = fopen(filename, 'r');

% Check if the file was opened successfully
if fileID == -1
    disp('Error opening the file.');
    return; % Exit the script
end

% Read each line from the file serially and display it on the screen
while ~feof(fileID)
    line = fgetl(fileID); % Read one line from the file
    if ischar(line) % Check if the line is valid
        disp(line); % Display the line
    end
end

% Close the file
fclose(fileID);
