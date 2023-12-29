const twoSum = (nums, target) => {
    //optimised way in 2 pointers
    let left = 0;
    let right = nums.length - 1;
    nums.sort((a, b) => a - b);
    while (left < right) {
        let sum = nums[left] + nums[right];
        if (sum === target) {
            return [left + 1, right + 1];
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

console.log(twoSum([2, 7, 11, 15], 9))