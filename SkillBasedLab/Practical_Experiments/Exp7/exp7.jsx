// eslint-disable-next-line no-unused-vars
import React, { useState } from "react";
import "./App.css";

const Login = () => {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");

  const handleSubmit = (e) => {
    console.log("Email:", email, "Password:", password);
  };

  return (
    <div className="login-container">
      <form className="login-form" onSubmit={handleSubmit}>
        <h2>Login</h2>
        <div className="input-group">
          <label>Email:</label>
          <input
            type="email"
            value={email}
            onChange={(e) => setEmail(e.target.value)}
            placeholder="Enter your email"
            required
          />
        </div>
        <div className="input-group">
          <label>Password:</label>
          <input
            type="password"
            value={password}
            onChange={(e) => setPassword(e.target.value)}
            placeholder="Enter your password"
            required
          />
        </div>
        <button type="submit" className="login-btn">
          Login
        </button>
      </form>
    </div>
  );
};

export default Login;
