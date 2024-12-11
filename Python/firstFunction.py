# This is also method overloading

# function definition
def greet():
    print("Hello world!");

# function calling
greet();

# parameterized function
def greet(name):
    print(f"Hello {name}!");

greet("John");

# return statement
def add(num1, num2):
    return num1 + num2;

result = add(10, 20);
print("Add", result);

def subtract(num1, num2):
    return num1 - num2;

result = subtract(10, 20);
print("Subtract", result);

def multiply(num1, num2):
    return num1 * num2;

result = multiply(10, 20);
print("Multiply",result);

def divide(num1, num2):
    return num1 / num2;

result = divide(10, 20);
print("divide", result);

'''
 Making a function that can
 perform basic operation by
 using if else and take user input. 
'''

def calculator(num1, num2, operation):
    if operation == "+":
        return num1 + num2;
    elif operation == "-":
        return num1 - num2;
    elif operation == "*":
        return num1 * num2;
    elif operation == "/":
        return num1 / num2;
    else:
        return "Invalid operation";

result = calculator(int(input("num1: ")), int(input("num2: ")), input("operation: "));
print("Calculator result", result);

'''
 This will not do any this because
 pass is use to skip the statement
 and is used to make functions
 that might be used in future
'''
def future_purpose():
    pass

future_purpose();

# recursive function

def factorial(n):
    if n == 0:
        return 1;
    else:
        return n * factorial(n - 1);

result = factorial(int(input("Enter a number for it's factorial: ")));
print("Factorial: ", result);