# Using lists - lists are not homogeneous
# Accessing a vector with 5 elements using different slicing methods in Python
vector = [20, 10, 50, 40, 30]

# Accessing elements using slicing [start:stop:step]
print("Original vector:", vector)
print("First three elements:", vector[:3])
print("Last two elements:", vector[-2:])
print("Elements from index 1 to 3:", vector[1:4])
print("Even-indexed elements:", vector[::2])
print("Reverse order:", vector[::-1])
print("All elements with step 2:", vector[::2])
print("Elements from index 1 to 3 with step 2:", vector[1:4:2])
print("Elements in reverse order with step 2:", vector[::-2])

# Sorting and finding elements
sorted_vector = sorted(vector)
print("Sorted vector:", sorted_vector)

element_to_find = 30
if element_to_find in vector:
    print(f"Element {element_to_find} found at index:", vector.index(element_to_find))
else:
    print(f"Element {element_to_find} not found.")
    
# Using numpy - ndarray are a homogeneous data type
import numpy as np

# Criando um vetor NumPy com 5 elementos
vector = np.array([20, 10, 50, 40, 30])

# Acessando elementos com slicing [start:stop:step]
print("Original vector:", vector)
print("First three elements:", vector[:3])
print("Last two elements:", vector[-2:])
print("Elements from index 1 to 3:", vector[1:4])
print("Even-indexed elements:", vector[::2])
print("Reverse order:", vector[::-1])
print("All elements with step 2:", vector[::2])
print("Elements from index 1 to 3 with step 2:", vector[1:4:2])
print("Elements in reverse order with step 2:", vector[::-2])

# Ordenando e buscando elementos
sorted_vector = np.sort(vector)
print("Sorted vector:", sorted_vector)

element_to_find = 30
indices = np.where(vector == element_to_find)[0]
if indices.size > 0:
    print(f"Element {element_to_find} found at index:", indices[0])
else:
    print(f"Element {element_to_find} not found.")
