def sum_numbers(*args):
    result = sum(args)
    return result

# Function that accepts variable number of keyword arguments
def show_info(**kwargs):
    for key, value in kwargs.items():
        print(f'{key}: {value}')

# Example usage
print("Using *args:")
print("Sum:", sum_numbers(10, 20, 30, 40))

print("\nUsing **kwargs:")
show_info(name="Alice", age=30, city="New York")
