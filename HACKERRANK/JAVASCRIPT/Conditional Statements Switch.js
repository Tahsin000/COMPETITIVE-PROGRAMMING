
function getLetter(s) {
    let letter;
    // Write your code here
    s = s.split('');
    switch(s[0])
    {
        case 'a' :
        letter = 'A';
        break;
        case 'e' :
        letter = 'A';
        break;
        case 'i' :
        letter = 'A';
        break; 
        case 'o' :
        letter = 'A'; 
        break;
        case 'u' :
        letter = 'A';
        break;
        
        case 'b' :
        letter = 'B';
        break;
        case 'c' :
        letter = 'B';
        break;
        case 'd' :
        letter = 'B';
        break;
        case 'f' :
        letter = 'B';
        break;
        
        case 'h' :
        letter = 'C';
        break;
        case 'j' :
        letter = 'C';
        break;
        case 'k' :
        letter = 'C';
        break;
        case 'l' :
        letter = 'C';
        break;
        case 'm' :
        letter = 'C';
        break;
        default:
        letter = 'D';
    }
    
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
    // Probelm - https://www.hackerrank.com/challenges/js10-switch/problem
}