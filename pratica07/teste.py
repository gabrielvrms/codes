# Fixed number of positional arguments
def sum_numbers_fixed(a, b, c, d):
    return a + b + c + d

# Fixed keyword arguments
def show_info_fixed(name, age, city):
    print(f'name: {name}')
    print(f'age: {age}')
    print(f'city: {city}')

# Example usage
print("\nWithout *args:")
print("Sum:", sum_numbers_fixed(10, 20, 30, 40))

print("\nWithout **kwargs:")
show_info_fixed(name="Alice", age=30, city="New York")
