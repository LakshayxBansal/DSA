// function isPalindrome(str){
//     let p = str.toLowerCase().replace(/[^a-z0-9]/g,'');
//     if(p.length == 0) return false;

//     let q = p.split('').reverse().join('');

//     return p === q ;
// }


function isPalindrome(str){
    let cleanedStr = str.toLowerCase().replace(/[^a-z0-9]/g,'');
    let left = 0;
    let right = cleanedStr.length-1;

    
    while(left < right){
        if(cleanedStr[left] != cleanedStr[right]){
            return false
        }
        left++;
        right--;
    }
    return true;
}

console.log(isPalindrome("a man, a plan , a canal Panama "));
console.log(isPalindrome("sanjay"));