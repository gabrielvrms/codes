% Creating a matrix
matrix = [20, 120, 50, 100, 60;
          40, 130, 160, 210, 170;
          70, 140, 90, 10, 80;
          30, 180, 250, 220, 190;
          200, 110, 150, 120, 240];

% Accessing elements using slicing (start:step:stop), stop inclusive
fprintf('Original matrix:\n');
matrix
fprintf('First two rows:\n');
matrix(1:2, :)
fprintf('Last two columns:\n');
matrix(:, end-1:end)
fprintf('Elements from row 1 to 2, column 1 to 2:\n');
matrix(1:2, 1:2)
fprintf('Even-indexed rows:\n%s\n');
matrix(1:2:end, :)
fprintf('Reverse order rows:\n');
matrix(end:-1:1, :)
fprintf('All elements with step 2:\n');
matrix(1:2:end, 1:2:end)
fprintf('Elements from row 1 to 3 with step 2:\n');
matrix(1:2:3, 1:2:3)
fprintf('Elements in reverse order with step 2:\n');
matrix(end:-2:1, end:-2:1)

% Sorting rows of the matrix
sorted_matrix = reshape(sort(matrix(:),1),size(matrix));
fprintf('Sorted matrix by rows:\n');
sorted_matrix

element_to_find = 30;
indices = find(matrix == element_to_find);
if ~isempty(indices)
    [row, col] = ind2sub(size(matrix), indices);
    fprintf('Element %d found at indices:\n', element_to_find);
    for i = 1:numel(row)
        fprintf('Row: %d, Column: %d\n', row(i), col(i));
    end
else
    fprintf('Element %d not found.\n', element_to_find);
end

