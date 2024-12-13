# Condition
num = int(input("Enter a number: "));

if num > 0:
    print(num, "is a positive number.");
elif num < 0:
    print(num, "is negative.");
else:
    print(num, "is zero.");

# Nested if
if num >= 0:
    if num == 0:
        print(num, " is zero.");
    else:
        print(num, " is a positive number.");
else:
    print(num, " is a negative number.");

# Even or odd
if num % 2 == 0:
    print(num, " is even.");
else:
    print(num, " is odd.");