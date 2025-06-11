%{
Program: file_parsing_m

Author: Gabriel Vitor Amaral Ramos

Date: 04/06/2025

Description: [This program reads a text file line by line, splits each line by commas, and displays each token on the screen.]

License: [CC BY]]
%}

% Define the filename to read
filename = 'test_file.txt';

% Open the file for reading
fid = fopen(filename, 'r');
if fid == -1
    error('Error opening file'); % Display error if file cannot be opened
end

% Loop until end of file is reached
while ~feof(fid)
    line = fgetl(fid); % Read one line from the file
    if ischar(line) % Check if the line is valid
        tokens = strsplit(line, ','); % Split the line by commas
        for i = 1:length(tokens)
            disp(tokens{i}); % Display each token
        end
    end
end

% Close the file
fclose(fid);
