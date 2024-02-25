// function findPrimeFactor(number) {
//     if(number <=1) return;
//     for(let i = 2;i*i<=number;i++) {
//         while(number%i==0) {
//             console.log(i)
//             number = Math.floor(number/i);
//         }
//     }
//     if(number > 1) {
//         console.log(number)
//     }
// }

// let number = 12

// findPrimeFactor(number)

//more efficient solution
// function primeFactor(number) {
//     if(number <=1) return;

//     while(number%2==0) {
//         console.log(2)
//         number = number/2;
//     }
//     while(number%3 == 0) {
//         console.log(3)
//         number = Math.floor(number/3);
//     }
//     for(let i =5;i*i<=number;i+=6){
//         while(number%i == 0) {
//             console.log(i)
//             number = Math.floor(number/i)
//         }
//     }
//     if(number > 3) {
//         console.log(number)
//     }
// }

// const primeFactor = (number) => {
//     if(number == 1) return;
//     while(number%2 == 0) {
//         console.log(2)
//         number = Math.floor(number/2);
//     }
//     while(number%3 == 0) {
//         console.log(3)
//         number = Math.floor(number/3)
//     }

//     for(let i = 5;i*i<= number;i+=6) {
//         while(number%i == 0) {
//             console.log(i)
//             number = Math.floor(number/i)
//         }

//     }
//     if(number > 3) {
//         console.log(number)
//     }
// }

// let number  = 25 // ==> 5 5
// primeFactor(number)
//count numbers

const countNumber = (n) => {
    let count = 0;
    while(n > 0) {
        count ++;
        n = Math.floor(n/10);
    }
    return count;
};

console.log(countNumber(123456))
