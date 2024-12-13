a = int(input("Enter a number: "));
b = int(input("Enter another number: "));

if a > b:
    if (a - b) % 2 == 0:
        print("The difference between", a, "and", b, "is even.");
    else:
        print("The difference between", a, "and", b, "is odd.");

x = int(input("Enter a number: "));

for i in range(10, 20):
    if x == i:
        print("In range");
        break;
else:
    print("Out of range");