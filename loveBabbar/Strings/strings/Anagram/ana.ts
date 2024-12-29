function isAnagram(str1: string, str2: string): boolean {
    str1 = str1.toLowerCase().replace(/[^a-z0-9]/g,"");
    str2 = str2.toLowerCase().replace(/[^a-z0-9]/g,"");

    let map = new Map<string,number>();

    for(let char of str1){
        if(map.has(char)){
            map.set(char,map.get(char)! +1);
        }else{
            map.set(char,1);
        }
    }

    for(let char of str2){
        if(!map.has(char) || map.get(char)! == 0){
            return false;
        }else{
            map.set(char,map.get(char)! -1);
        }
    }

    return true;
}

let str1: string = "Lakshay bansal";
let str2: string = "lakshaybansal";
console.log(isAnagram(str1, str2));  // Output: true
