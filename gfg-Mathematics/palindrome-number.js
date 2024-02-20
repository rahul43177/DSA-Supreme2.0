const isPalindrome = (number) => {
    let temp = number;
    let rev = 0;
    while(temp > 0) {
        let lastDigit = temp  %10;
        rev = rev * 10 + lastDigit;
        temp = Math.floor(temp/10);
    }
    if(rev == number) return `The number is palindrome`
    else return `The number is not palindrome`
}

console.log(isPalindrome(123321))