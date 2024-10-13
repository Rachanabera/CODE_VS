// eslint-disable-next-line no-unused-vars
import React, { useState } from 'react';
import axios from 'axios'; // Move axios import here

function App() {
    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');

    const handleSubmit = async (e) => {
        e.preventDefault();
        console.log('Email:', email);
        console.log('Password:', password);

        try {
            const response = await axios.post('http://localhost:5000/login', {
                email,
                password,
            });
            console.log('Response:', response.data); // Log the response
            alert(response.data.message); // Handle success response
        } catch (error) {
            console.error('Error:', error.response); // Log the error response
            alert(error.response.data.error); // Handle error response
        }
    };

    return (
        <div>
            <h1>Login Form</h1>
            <form onSubmit={handleSubmit}>
                <input
                    type="email"
                    placeholder="Email"
                    value={email}
                    onChange={(e) => setEmail(e.target.value)}
                    required
                />
                <input
                    type="password"
                    placeholder="Password"
                    value={password}
                    onChange={(e) => setPassword(e.target.value)}
                    required
                />
                <button type="submit">Login</button>
            </form>
        </div>
    );
}

export default App;
