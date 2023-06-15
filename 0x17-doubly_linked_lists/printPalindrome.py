def is_palindrome(n):
    strNum = str(n)
    return strNum == strNum[::-1]

def largest_palindrome():
    largest = 0
    for i in range(100, 1000):
        for j in range(i, 1000):
            product = i * j
            if is_palindrome(product) and product > largest:
                largest = product
    return largest

largest = largest_palindrome()
print(f"The largest palindrome made of the product two 3-digit numbers is: {largest}")
