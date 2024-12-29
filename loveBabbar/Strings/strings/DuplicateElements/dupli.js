//Using maps
// function dupliElem(str){
//     str = str.toLowerCase();
//     let charCount = new Map();

//     let duplicates = [];
//     for(let char of str){
//         if(charCount.has(char) && !duplicates.includes(char)){
//             duplicates.push(char);
//         }else{
//             charCount.set(char,1);
//         }
//     }

//     return duplicates.join('');
// }

//using set
function dupliElem(str){
    str = str.toLowerCase();
    let dupli = [];

    let r = new Set();

    for(let char of str){
        if(r.has(char) && !dupli.includes(char)){
            dupli.push(char);
        }else{
            r.add(char);
        }
    }

    return dupli.join("");
}


console.log(dupliElem("lakshay basnal"));