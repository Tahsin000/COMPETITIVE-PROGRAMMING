
function getGrade(score) {
    let grade;
    // Write your code here
    if (score <= 5 && score >= 0)
        grade = 'F';
    else if (score <= 10 && score > 5)
        grade = 'E';        
    else if (score <= 15 && score > 10)
        grade = 'D';                
    else if (score <= 20 && score > 15)
        grade = 'C';                    
    else if (score <= 25 && score > 20)
        grade = 'B';                    
    else if (score <= 30 && score > 25)
        grade = 'A';                        
    return grade;
}


function main() {
    const score = +(readLine());
    
    console.log(getGrade(score));
    // Problem = https://www.hackerrank.com/challenges/js10-if-else/problem
}