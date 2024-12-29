function countVowels(str){
    let vowels = 0;
    let constant = 0;

    str = str.toLowerCase();

    for(char of str){
        if(/[a-z]/.test(char)){
            if('aeiou'.includes(char)){
                vowels++
            }else{
                constant++;
            }
        }
    }

    return {"vowel count : ": vowels ,"consonant count : ":constant };
}

let str1 = "LAkshay";
console.log(countVowels(str1));
