function removeDuplicate(str){
    str = str.toLowerCase().replace(/[^a-z0-9]/,"");
    let result = '';
    let seen = new Set();

    for(let i=0;i<str.length;i++){
        let char = str[i];

        if(!seen.has(char)){
            seen.add(char);
            result +=char;
        }
    }

    return result
}


let str = "Lakshay bansal"
console.log(removeDuplicate(str));