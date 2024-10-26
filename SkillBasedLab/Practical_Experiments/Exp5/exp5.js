$(document).ready(function() {
    $('#password').on('input', function() {
        var password = $(this).val();
        var strength = checkPasswordStrength(password);

        $('.star').removeClass('active');
        for (var i = 0; i < strength; i++) {
            $('.star').eq(i).addClass('active');
        }

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