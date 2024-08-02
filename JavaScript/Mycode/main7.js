// For loops
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

for(let i = 0; i < 10; i++) {
    console.log(`For loop Number: ${i+1}`);
}

console.log('\n');

let i = 0;
while(i < 10) {
    console.log(`While loop Number: ${i+1}`);
    i++;
}

// different way for next line
console.log(`\n`);
console.log(``);
console.log('');
console.log("");

for(let i = 0; i < todos.length; i++) {
    console.log(todos[i].id,todos[i].work,todos[i].isCompleted);
}

console.log('');

for (let todo of todos) {
    console.log(todo.id);
}

console.log('');

/*
forEach - just loop through the array
map - allow us to create a new array from a array
filter - allow us to create a new array based on a condition
*/

// forEach
//todo is like the iterator in normal for loops just like how we use 'i'
todos.forEach(function(todo) {
    console.log(todo.work);    
});

console.log('');

// map
const todoWork = todos.map(function(todo) {
    return todo.work;    
});

console.log(todoWork);

console.log('');

// filter
const todoCompleted = todos.filter(function(todo) {
    return todo.isCompleted === true;    
});

console.log(todoCompleted)

console.log('');

const todoC = todos.filter(function(todo) {
    return todo.isCompleted === true;    
}).map(function(todo) {
    return todo.work;
});

console.log(todoC);

console.log('');

const todoid = todos.filter(function(todo) {
    return todo.id == 1;
}).map(function(t) {
    return t.id;
});

console.log(todoid);
console.log(typeof(todoid));
console.log(typeof(todos.id));//it shows undefined coz there is nothing such as id in the array todos, it only has 3 objects as its value
console.log(typeof(todos[0].id));//but there is id as an integer in the first object (of course id is also in other objects too)