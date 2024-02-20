const findFactorial  = (number) => {
    if(number == 0) {
        return 1;
    }

    return (number * findFactorial(number -1));
}
let number = 4
console.log(`The factorial of ${number} is ${findFactorial(number)}`)