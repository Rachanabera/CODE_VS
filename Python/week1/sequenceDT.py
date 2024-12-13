# Sequence Data Type & Loops

languages = ["C", "C++", "Java", "Python"];

print(languages);
print(languages[0]);
# negative indexing means count from the last element
print(languages[-1]);
print(languages[0:2]);
print("Length of the list is: ", len(languages));

name = "Python";
print(name[0]);

'''
 String is immutable that means it can not be changed so this will give and error
 name[0] = "p";
 print(name[0]);
 TypeError: 'str' object does not support item assignment
'''

List = [69, 70, 71, 72, 73, 74, 75];

for i in List:
    print(i, "\n");

for i in "Python":
    print(i, "\n");