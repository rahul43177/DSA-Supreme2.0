let arr = [1,2,3,4,6,7,8]
let originalArrSum = 0
for(let i = 1;i<=arr[arr.length-1];i++) {
    originalArrSum += arr[i];
}
let sum = 0
for(let val of arr) {
    val += sum;
}

let missingNumber = originalArrSum-sum
console.log(missingNumber)