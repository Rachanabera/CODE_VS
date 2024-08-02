//function

function addNums(num1, num2) {
    console.log(num1 + num2);
};

addNums(6, 9);// if addNum() it will show NaN

function addNums0(num1, num2) {
    return num1 + num2;
};

console.log(addNums0(5, 5));

function addNums1(num1 = 1, num2 = 2) {
    return num1 + num2;
};

console.log(addNums1());
/*
if console.log(addNums1(5)); output will be 6 because it uses 5
as the value of num1 and the default value of num2
you can not give value of num2 and expect default value of num1 to be used
*/
//this needs a lot of practice

// this topic is really just confusing because of syntax
// arrow function

const addNums2 = (num1 = 1, num2 = 1) => {
    return num1 + num2;
};

console.log(addNums2());

const addNums3 = (num1 = 1, num2 = 1) => {
    console.log(num1 + num2);
}

addNums3();

const addNums4 = (num1 = 1, num2 = 1) => console.log(num1 + num2);

addNums4();

const addNums5 = (num1 = 1, num2 = 1) => num1 + num2;

console.log(addNums5());

const addNums6 = (num1 = 1, num2 = 1) => num1 + 5;

console.log(addNums6());

const addNums7 = (num1 = 1) => num1 + 5;

console.log(addNums7());

const addNums8 = num1 => num1 + 5;

console.log(addNums8(5));

//using '=>' and forEach together
const todos = [
    {
        id: 1,
        work: "Take out trash",
        isCompleted: false
    },
    {
        id: 2,
        work: 'Attend meeting',
        isCompleted: false
    },
    {
        id: 3,
        work: 'sleep',
        isCompleted: true
    }
];

/*
todos.forEach(function(todo) {
    console.log(todo.work);    
});
*/
todos.forEach((todo) => console.log(todo.work));
console.log('');

todos.map((todo) => console.log(todo.work));// this is a logical error because its is not full filling the main objective of using "map" that is to make a new array
console.log('');
const todowork = todos.map((todo) => todo.work);
console.log(todowork);
console.log('');

todos.filter((todo) => todo.id == 1).map((todo) => console.log(todo.work));//this is a logical error because its is not full filling the main objective of using "filter" that is to make a new array
console.log('');
const todowork0 = todos.filter((todo) => todo.id == 1).map((todo) => todo.work);
console.log(todowork0);