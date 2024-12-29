
// function isPalindrome(str:string):boolean {
//     let cleanedStr = str.toLowerCase().replace(/[^a-z0-9]/g,'');
//     let left:number = 0;
//     let right:number = cleanedStr.length -1;
    
//     while(left < right){
//       if(cleanedStr[left] != cleanedStr[right]){
//         return false;
//       }
//       left++;
//       right --;
//     }
    
//     return true;
// }


function isPalindrome(str : string):boolean {
    let cleanedStr = str.toLowerCase().replace(/[^a-z0-9]/g,'');
    let rev = cleanedStr.split('').reverse().join('');
    
    if(cleanedStr != rev) return false;
    
    return true;
  }
  
  let str:string = "abc cba";
  console.log(isPalindrome(str));