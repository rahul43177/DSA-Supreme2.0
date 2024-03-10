const naturalNumberSum = (number) => {
    if(number == 1) return number;

    return number + naturalNumberSum(number-1);
}
let n = 5;
//5 => 5+4+3+2+1 => 15
let sum = naturalNumberSum(n)
console.log(sum)
