// Conditionals
const x = '10';
const y = 11;
const z = 11;

// '==' This checks only the value
if(x == 10) {
    console.log('x is 10');
}

/*
'===' This checks the data type also
so the next if condition is false
*/

console.log('');

if(x === 10) {
    console.log("x is 10");
}else {
    console.log('x is NOT 10')
}

console.log('');

if(z === y) {
    console.log("z is equal to y");
} else if(y > z) {
    console.log('y is greater than z');
} else {
    console.log('y lesser than z');
}

console.log('');

if(x < 10 || y > 10) {
    console.log('true')
}

if(x < z && y > 10) {
    console.log('true');
}

// ternary operator

const color = x > 10 ? 'red' : 'blue';
console.log(color);

switch(color) {
    case 'red':
        console.log('color is red');
        break;
    case 'blue':
        console.log('color is blue');
        break;
    default:
        console.log('color is neither red nor blue');
};