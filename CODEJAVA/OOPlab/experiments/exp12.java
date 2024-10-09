import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class exp12 extends JFrame implements ActionListener {
    // Create a text field to display results
    private JTextField display;
    // Store operator and operands
    private String operand1, operator, operand2;

    // Constructor
    public exp12() {
        operand1 = operator = operand2 = "";
        createAndShowGUI();
    }

    // Method to create and show GUI
    private void createAndShowGUI() {
        // Frame settings
        setTitle("Calculator");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 300);
        setLocationRelativeTo(null); // Center the frame

        // Create and set up the display
        display = new JTextField();
        display.setEditable(false);
        display.setFont(new Font("Arial", Font.BOLD, 24));
        add(display, BorderLayout.NORTH);

        // Create panel for buttons
        JPanel panel = new JPanel(new GridLayout(4, 4)); // 4x4 grid layout
        add(panel, BorderLayout.CENTER);

        // Button labels
        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "C", "0", "=", "+"
        };

        // Create buttons and add them to the panel
        for (String text : buttons) {
            JButton button = new JButton(text);
            button.addActionListener(this);
            panel.add(button);
        }

        // Set the frame to be visible
        setVisible(true);
    }

    // Action performed method for button clicks
    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();

        // If the button is a number or decimal
        if ("0123456789".contains(command)) {
            if (!operator.isEmpty()) {
                operand2 += command; // Add to second operand
            } else {
                operand1 += command; // Add to first operand
            }
            display.setText(operand1 + operator + operand2);
        } else if (command.equals("C")) {
            // Clear all inputs
            operand1 = operator = operand2 = "";
            display.setText("");
        } else if (command.equals("=")) {
            // Calculate the result
            double result = 0;
            try {
                double num1 = Double.parseDouble(operand1);
                double num2 = Double.parseDouble(operand2);
                switch (operator) {
                    case "+":
                        result = num1 + num2;
                        break;
                    case "-":
                        result = num1 - num2;
                        break;
                    case "*":
                        result = num1 * num2;
                        break;
                    case "/":
                        if (num2 != 0) {
                            result = num1 / num2;
                        } else {
                            throw new ArithmeticException("Division by zero");
                        }
                        break;
                }
                // Update display
                display.setText(operand1 + " " + operator + " " + operand2 + " = " + result);
                // Prepare for the next calculation
                operand1 = Double.toString(result);
                operator = operand2 = "";
            } catch (NumberFormatException | ArithmeticException ex) {
                display.setText("Error");
                operand1 = operator = operand2 = ""; // Reset after error
            }
        } else {
            // Operator button clicked
            if (operand1.isEmpty()) return; // No operand to operate on
            if (operator.isEmpty()) {
                operator = command; // Set operator
            } else if (!operand2.isEmpty()) {
                // If operator is already set and second operand is filled, calculate first
                double result = 0;
                try {
                    double num1 = Double.parseDouble(operand1);
                    double num2 = Double.parseDouble(operand2);
                    switch (operator) {
                        case "+":
                            result = num1 + num2;
                            break;
                        case "-":
                            result = num1 - num2;
                            break;
                        case "*":
                            result = num1 * num2;
                            break;
                        case "/":
                            if (num2 != 0) {
                                result = num1 / num2;
                            } else {
                                throw new ArithmeticException("Division by zero");
                            }
                            break;
                    }
                    operand1 = Double.toString(result); // Store result
                    operator = command; // Update operator
                    operand2 = ""; // Clear second operand
                } catch (NumberFormatException | ArithmeticException ex) {
                    display.setText("Error");
                    operand1 = operator = operand2 = ""; // Reset after error
                }
            } else {
                operator = command; // Set operator if no second operand
            }
            display.setText(operand1 + " " + operator + " " + operand2);
        }
    }

    // Main method to run the application
    public static void main(String[] args) {
        SwingUtilities.invokeLater(exp12::new);
    }
}