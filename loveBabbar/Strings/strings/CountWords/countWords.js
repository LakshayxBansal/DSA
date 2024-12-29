function countWords(str){
    let words = str.split(" ");
    let count = 0;
    let i=0;
    while(words[i] != undefined){
        if(words[i] != ""){
            count++;
        }
        i++;
    }

    return count;
}


console.log(countWords("lakshay is a chill guy"));