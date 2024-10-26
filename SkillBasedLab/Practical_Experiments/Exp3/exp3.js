document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault();

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    const errorMessage = document.getElementById('error-message');
    
    errorMessage.textContent = '';

    
    if (!username || !password) {
        errorMessage.textContent = 'Both fields are required.';
        return;
    }

    
    console.log('Username:', username);
    console.log('Password:', password);
   
    
    alert('Login successful!');
});