function anagram(str1,str2){
    if(str1.length != str2.length) return false;

    let countMap = new Map();

    for(let char of str1.toLowerCase()){
        if(char !== ' '){
            if(countMap.has(char)){
                countMap.set(char , countMap.get(char)+1);
            }else{
                countMap.set(char,1);
            }
        }
    }

    for(let char of str2.toLowerCase()){
        if(char !== ''){
            if(!countMap.has(char) || countMap.get(char) == 0){
                return false;
            }else{
                countMap.set(char,countMap.get(char)-1);
            }
        }
    }

    return true;
    
}


console.log(anagram("Laksay","klsayah"));