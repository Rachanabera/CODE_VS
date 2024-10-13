const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');

const app = express();
const PORT = 5000;

app.use(express.json());
app.use(cors());

// MongoDB connection
mongoose.connect('mongodb://localhost:27017/your-db', {
    useNewUrlParser: true,
    useUnifiedTopology: true,
}).then(() => console.log('MongoDB connected'))
  .catch(err => console.log(err));

// Example POST route for login
app.post('/login', (req, res) => {
    const { email, password } = req.body;
    // Handle login logic with MongoDB
    res.send({ message: 'Login successful!' });
});

app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
