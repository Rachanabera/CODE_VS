$(document).ready(function() {
    $('#password').on('input', function() {
        var password = $(this).val();
        var strength = checkPasswordStrength(password);
        var widthPercentage = (strength / 5) * 100;
        $('#strength-bar-fill').css('width', widthPercentage + '%');

        var color;
        switch (strength) {
            case 1:
                color = '#e74c3c';
                break;
            case 2:
                color = '#e67e22';
                break;
            case 3:
                color = '#f4b400';
                break;
            case 4:
                color = '#27ae60';
                break;
            case 5:
                color = '#2ecc71';
                break;
            default:
                color = '#ddd';
        }
        $('#strength-bar-fill').css('background-color', color);

        // Update strength text
        var strengthText = getStrengthText(strength);
        $('#strength-text').text(strengthText);
    });

    function checkPasswordStrength(password) {
        var strength = 0;
        if (password.length > 8)
            strength++;
        if (/[a-z]/.test(password) && /[A-Z]/.test(password))
            strength++;
        if (/\d/.test(password))
            strength++;
        if (/[@$!%*?&#]/.test(password))
            strength++;
        if (password.length > 12)
            strength++;
        return strength;
    }

    function getStrengthText(strength) {
        switch(strength) {
            case 1:
                return 'Very Weak';
            case 2:
                return 'Weak';
            case 3:
                return 'Moderate';
            case 4:
                return 'Strong';
            case 5:
                return 'Very Strong';
            default:
                return '';
        }
    }
});
