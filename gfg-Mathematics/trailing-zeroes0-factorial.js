//naive approach
// const trailingZeroes = (number) => {
//     let fact = 1;
//     for(let i =number;i>0;i--) {
//         fact = fact * i;
//     }
//     let count = 0;
//     while(fact%10 == 0) {
//         count++;
//         fact = Math.floor(fact/10)
//     }
//     return count;
// }

// console.log(trailingZeroes(10))

//efficient approach

function countTrailingZeroes(number) {
  let response = 0;

  for (let i = 5; i <= number; i = i * 5) {
    response = response + Math.floor(number / i);
  }
  return response;
}

console.log(countTrailingZeroes(5));
