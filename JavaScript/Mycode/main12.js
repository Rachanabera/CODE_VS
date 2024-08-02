const myForm = document.querySelector('#my-form');
const nameInput = document.querySelector('#name');
const emailInput = document.querySelector('#email');
const msg = document.querySelector('.msg');
const userList = document.querySelector('#users');

myForm.addEventListener('submit', onSubmit);

function onSubmit(e) {
    e.preventDefault();
    console.log(nameInput.value);
    if(nameInput.value === '' || emailInput.value === '') {  // Corrected this line
        // alert('Please enter Username and Password.');
        msg.classList.add('error');
        msg.innerHTML = 'Please enter Username and Password.';

        setTimeout(() => msg.remove(), 1500);
    } else {
        // console.log(nameInput.value);
        // console.log(emailInput.value);
        // console.log('success');

        const li = document.createElement('li');
        li.appendChild(document.createTextNode(`${nameInput.value} : ${emailInput.value}`));
        userList.appendChild(li);

        // Clear fields
        nameInput.value = '';
        emailInput.value = '';
        
    }
}
