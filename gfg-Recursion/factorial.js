function factorial(n) {
    if(n < 2) {
        return 1;
    } 
    return n*factorial(n-1);
}


let number = 6
let fact = factorial(number)
console.log(`The factorial of ${number} is ${fact}`)
