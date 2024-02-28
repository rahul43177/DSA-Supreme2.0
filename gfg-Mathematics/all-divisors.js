// function printDivisors(number) {
//     for(let i = 0;i<=number;i++) {
//         if(number % i == 0) {
//             console.log(i)
//         }
//     }
// }



//efficient way 
function printDivisors(number) {
    for(let i = 0;i*i<= number;i++) {
        if(number%i==0) {
            console.log(i)
            if(i!= Math.floor(number/i)) {
                console.log(Math.floor(number/i))
            }
        }
    }
}

let n = 25

printDivisors(n)