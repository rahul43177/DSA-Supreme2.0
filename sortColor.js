const sortColor = (arr) => {
    let left  = 0;
    let right = arr.length - 1;
    let i = 0;

    while(i <= right) {
        if(arr[i] == 0) {
            [arr[i] , arr[left]] = [arr[left] , arr[i]]; //swaping in JavaScript
            left++;
            i++;
        } else if(arr[i] == 2) {
            [arr[i] , arr[right]] = [arr[right] , arr[i]]; //swapping in JavaScript
        } else {
            i++;
        }
    }
    return arr;
}

const arr= [1,2,0,1,0,2,0,2,1,1,0,0,2,2];

console.log(sortColor(arr));