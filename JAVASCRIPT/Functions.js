
function factorial(n)
{
    var sub = 1;
    for(var i = 1; i<= n; i++)
    {
        sub *= i;
    }
    return sub;
}


function main() {
    const n = +(readLine());
    
    console.log(factorial(n));
    // problem = https://www.hackerrank.com/challenges/js10-function/problem
}