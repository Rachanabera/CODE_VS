document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent form submission

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    const errorMessage = document.getElementById('error-message');

    // Clear previous error message
    errorMessage.textContent = '';

    // Validation
    if (!username || !password) {
        errorMessage.textContent = 'Both fields are required.';
        return;
    }

    // Here you can handle the login process (e.g., send data to server)
    console.log('Username:', username);
    console.log('Password:', password);
   
    // If validation is successful, you could redirect or display a success message
    alert('Login successful!'); // Replace with actual login logic
});