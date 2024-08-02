const person = {
    firstname: 'Zaid',
    lastname: 'Shaikh',
    age: 19,
    hobbies:['drawing', 'movies', 'video games'],
    address: {
        street: 'something',
        city: 'thane',
        state: 'MH'
    }
}
console.log(person);

console.log(person.firstname);
console.log(person.hobbies[0]);
console.log(person.address.street);

// Destructuring
const{ firstname, lastname, address: {city}} = person;

console.log(firstname);
console.log(city);

person.email = 'zaidparvez@gmail.com';

console.log(person);