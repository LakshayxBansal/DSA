function revByWords(str : String) : String {
    let words : Array<string> = str.split(" ");
    let reversed : Array<String> = [];

    for(let i= words.length -1;i>=0;i--){
        reversed.push(words[i]);
    }

    return reversed.join(" ");
}