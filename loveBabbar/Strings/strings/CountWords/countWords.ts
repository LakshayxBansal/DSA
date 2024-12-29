function countWords(str1: string): number {
    let word : Array<string> = str1.split(" ");
    let count : number =0;
    let i : number = 0;
    while(word[i] != undefined){
        if(word[i] != ""){
            count++;
        }
    }
    return count;
}

let str1: string = "Lakshay bansal";
let str2: string = "lakshaybansal";
console.log(countWords(str1));
