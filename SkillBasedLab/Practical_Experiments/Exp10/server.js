const express = require('express');
const bodyParser = require('body-parser');
const path = require('path');

const app = express();
const PORT = 3000;

app.use(bodyParser.urlencoded({ extended: true }));

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'exp10index.html'));
});

app.post('/submit', (req, res) => {
    const { name, email } = req.body;
    res.status(200).send('Form submitted successfully');
});

app.listen(PORT, () => {
    console.log(`Server running on http://localhost:${PORT}`);
});