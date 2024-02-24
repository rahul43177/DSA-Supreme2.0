const findFactorial = (number) => {
  if(number == 0) return 1;

  return number * findFactorial(number-1);
}

let n = 10;
let fact = findFactorial(n);
console.log(`The factorial of number ${n} is ${fact}`)
