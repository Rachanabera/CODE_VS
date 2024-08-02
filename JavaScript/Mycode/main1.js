/*
VAR:
var is globally scoped meaning its useless
*/
/*
LET:
with let we can resign values of the same variable
*/
let age = 30;
age = 31;
console.log(age);
/*
CONST:
const can not be resigned
*/
const age0 = 30;
age0 = 31;// this will show an error
console.log(age0);
/*
So always use const unless you are going to resign the value
this makes your code more robust and more secure
*/