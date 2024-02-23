//naive
// const findPrime = (number) => {
//     if(number == 1) {
//         return false;
//     }
//     for(let i = 2;i<number;i++ ) {
//         if(number % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// let number = 123;

// let isPrime = findPrime(number);

// if(isPrime) {
//     console.log(`${number} is a prime number`)
// }
// else {
//     console.log(`${number} is not a prime number`)
// }

//efficient method
//Going till root of n

// function isPrime(number) {
//   if (number == 1) return false;

//   for (let i = 2; i * i <= number; i++) {
//     if (number % i == 0) return false;
//   }

//   return true;
// }
// let number = 30;
// let find = isPrime(number);

// if (find) console.log("The number is prime");
// else console.log("The number is not prime number");


//more efficient method
let number = 11
const isPrime = (number) => {
    if(number == 1) return false;
    if(number == 2 || number == 3) return true;
    if(number % 2 ===0 || number % 3 == 0) return false;
    for(let i = 5;i*i<=number;i+=5){
        if(number % i == 0 || number %(i+2)==0) {
            return false;
        }
    }
    return true;
}
console.log(isPrime(number))

const findPrime = (number) => {
    if(number == 1) return false;
    if(number == 2 || number == 3) return true;
    if(number %2 == 0 || number % 3 == 0) return false;
    
    for(let i =5;i*i<=number;i+= 5) {
        if(number % i == 0) return false; 
    }
    return true;
}
console.log(findPrime(number))