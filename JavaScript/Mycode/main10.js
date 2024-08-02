// Constructor function
function Person(firstName, lastName, dob) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.dob = new Date(dob);
    this.getBirthYear = function() {
        return this.dob.getFullYear();
    }
    this.getFullName = function() {
        return `${this.firstName} ${this.lastName}`;
    }
}

// Get Birth Year
Person.prototype.getBirthYear = function () {
    return this.dob.getFullYear();
}

// Get Full Name
Person.prototype.getFullName = function() {
    return `${this.firstName} ${this.lastName}`
}

// Class
// class Person {
//     constructor(firstName, lastName, dob) {
//         this.firstName = firstName;
//         this.lastName = lastName;
//         this.dob = new Date(dob);
//     }
        
//     getBirthYear() {
//         return this.dob.getFullYear();
//     }
    
//     getFullName() {
//         return `${this.firstName} ${this.lastName}`;
//     }
// }

// Instantiate object
const person1 = new Person('John', 'Doe', '4-3-2005T23:23:23');
const person2 = new Person('Zaid', 'Shaikh', '2005-03-20T23:23:23.2323');

// Array to map the numeric day value to day names
const daysOfWeek = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

console.log(person2.firstName);
console.log(person2.lastName);
console.log(person2.getFullName());// using user defined property or attribute or member of constructor function Person
console.log(person2.dob);
console.log(person2.dob.getTime());
console.log(person2.dob.getFullYear());// using inbuilt or predefined function
console.log(person2.getBirthYear());// using user defined property or attribute or member of constructor function Person
console.log(person2.dob.getMonth());
console.log(person2.dob.getDate());
console.log(daysOfWeek[person2.dob.getDay()]);
console.log(person2.dob.getHours());
console.log(person2.dob.getMinutes());
console.log(person2.dob.getSeconds());
console.log(person2.dob.getMilliseconds());

console.log(person2);

console.log(person2.getFullName());
console.log(person2.getBirthYear());