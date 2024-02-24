const countDigits = (number) => {
  let count = 0;
  while(number > 0) {
    count++;
    number = Math.floor(number/10);
  }
  return count;
}

let n= 12345678910;
let counter = countDigits(n);


console.log("The number of digits " + n + " has are "+ counter);
