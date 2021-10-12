
function getArea(length, width) {
    let area;
    // Write your code here
    
    return (parseFloat(length) * parseFloat(width));
}

/**
*   Calculate the perimeter of a rectangle.
*   
*   length: The length of the rectangle.
*   width: The width of the rectangle.
*   
*   Return a number denoting the perimeter of a rectangle.
**/
function getPerimeter(length, width) {
    let perimeter;
    // Write your code here
    
    return 2 * (parseFloat(length) + parseFloat(width));
}


function main() {
    const length = +(readLine());
    const width = +(readLine());
    
    console.log(getArea(length, width));
    console.log(getPerimeter(length, width));
    // Problem = https://www.hackerrank.com/challenges/js10-arithmetic-operators/problem
}