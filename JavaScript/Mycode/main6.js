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

console.log(todos);
console.log(todos[0]);
console.log(todos[1].work);
const todoJSON = JSON.stringify(todos);
console.log(todoJSON);