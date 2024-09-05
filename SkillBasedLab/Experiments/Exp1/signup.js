document.getElementById('signup-form').addEventListener('submit', function(event) {
    event.preventDefault();
    
    let username = document.getElementById('username').value;
    let password = document.getElementById('password').value;
    let confirmPassword = document.getElementById('confirm-password').value;
    let name = document.getElementById('name').value;
    let gender = document.getElementById('gender').value;
    let dateOfBirth = document.getElementById('date-of-birth').value;
    let termsAndConditions = document.getElementById('terms-and-conditions').checked;
    
    if (password !== confirmPassword) {
        alert('Passwords do not match');
        return;
    }
    
    if (termsAndConditions) {
        alert('Sign up successful!');
        // Save the data to the server or process it as needed
        window.location.href = 'signin.html';
    } else {
        alert('You must agree to the terms and conditions');
    }
});