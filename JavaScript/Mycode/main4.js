/*
Arrays - variables that can hold 
multiples values.
In JS you can have multiple datatypes within the same array.
*/

// this way is not used that much

const  n = new Array(1,2,'Zaid Shaikh',4,5);
console.log(n);

// More common way

const fruits = ['apples', 'oranges', 'pears'];

/*
Now notice we have used const but we can add or
sub subtract value of const but not resign it
*/

console.log(fruits);
console.log(fruits[0]);
fruits[3] = 'mango';
console.log(fruits);

// This is a good example

const a = 10;
const b = 10;
const c = a+b;
console.log(c);
console.log(a+10);

// So moving on...

fruits.push('grapes');
console.log(fruits);
fruits.unshift('strawberries');
console.log(fruits);
fruits[3] = 'mango';
console.log(fruits);
fruits.pop();
console.log(fruits);
console.log(Array.isArray(fruits));
console.log(Array.isArray('Zaid'));
console.log(fruits.indexOf('apples'));