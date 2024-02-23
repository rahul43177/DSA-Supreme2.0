const findFact = (number) => {
  if(number ==0) return 1;

  return number * findFact(number-1);
}


let number = 4;
let factorial = findFact(number);
console.log(factorial);

