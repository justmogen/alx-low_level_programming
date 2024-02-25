def is_palindrome(number):
    # Function to check if a number is a palindrome
    return str(number) == str(number)[::-1]

largest_palindrome = 0

# Iterate through all 3-digit numbers for both factors
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j

        # Check if the product is a palindrome and larger than the current largest palindrome
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result to the file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))

largest_palindrome  # Return the result

