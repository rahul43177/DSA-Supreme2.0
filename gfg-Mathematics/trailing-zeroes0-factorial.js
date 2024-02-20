//naive approach
const trailingZeroes = (number) => {
    let fact = 1;
    for(let i =number;i>0;i--) {
        fact = fact * i;
    }
    let count = 0;
    while(fact%10 == 0) {
        count++;
        fact = Math.floor(fact/10)
    }
    return count;
}

console.log(trailingZeroes(5))