const findPrimeFactors = (number) => {
    if(number <= 1) return;
    let primeFactorArray = []
    while(number % 2 == 0) {
        primeFactorArray.push(2)
        number = Math.floor(number/2)
    }
    while(number % 3 == 0) {
        primeFactorArray.push(3)
        number = Math.floor(number/3)
    }
    for(let i = 5;i*i<=number;i+=6) {
        while(number % i == 0) {
            primeFactorArray.push(i)
            number = math.floor(number / i)
        }
        while(number % (i+2) == 0) {
            primeFactorArray.push(i+2)
            number = Math.floor(number / (i+2))
        }
    }
    if(number > 3) {
        primeFactorArray.push(number)
    }
    return primeFactorArray.join(",")
}


let number = 12 
console.log(findPrimeFactors(number)) 