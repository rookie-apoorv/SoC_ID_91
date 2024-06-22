def is_strong_password(password):
    # Separate digits and letters
    digits = []
    letters = []
    
    for char in password:
        if char.isdigit():
            digits.append(char)
        else:
            letters.append(char)
    
    # Check if digits are in non-decreasing order
    if digits != sorted(digits):
        return "NO"
    
    # Check if letters are in non-decreasing order
    if letters != sorted(letters):
        return "NO"
    
    # Ensure no digit comes after a letter
    if letters and digits:
        if password.index(letters[-1]) > password.index(digits[0]):
            return "NO"
    
    return "YES"

def main():
    t = int(input().strip())
    results = []
    
    for _ in range(t):
        n = int(input().strip())
        password = input().strip()
        results.append(is_strong_password(password))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
