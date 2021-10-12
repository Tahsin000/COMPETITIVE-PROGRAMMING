
function vowelsAndConsonants(s) {
    var n = s.length;
    s = s.split('');
    for(var i = 0; i<n; i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')
            console.log(s[i]);
    }

    for(var i = 0; i<n; i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')continue;
        else console.log(s[i]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);

    // Problem = https://www.hackerrank.com/challenges/js10-loops/problem
}