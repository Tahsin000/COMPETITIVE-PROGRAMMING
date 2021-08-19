
function getSecondLargest(nums) {
    // Complete the function
    
    // var nums = [ 1, 20,3, 5, 90, 6, 9, 9, 80, 90, 5, 20];
    nums.sort(function(a, b)
    {
        return a - b;
    });
    for(var i = 0; i<nums.length-1; i++)
    {
        if (nums[i] == nums[i+1]) nums[i] = 0;
    }
    nums.sort(function(a, b)
    {
        return b - a;
    });
    return nums[1];
}


function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));

    //Problem = https://www.hackerrank.com/challenges/js10-arrays/problem
}