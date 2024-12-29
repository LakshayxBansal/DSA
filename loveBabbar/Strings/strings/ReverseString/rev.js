//Reverse a string -- 
// Approach 1 :-> reverse for loop 
// 2 pointer approach
// built in function

function rev1(str){
    let reversed = "";
    for(let i =str.length-1;i>=0;i--){
        reversed+=str[i];
    }

    return reversed;
}

function rev2(str2){
    let str = str2.split("");
    let left = 0;
    let right = str.length -1;
    while(left <= right){
        [str[left],str[right]] = [str[right],str[left]];
        left ++;
        right --
    }
    return str.join("");
}

let str1 = "Lakshay";
console.log(rev2(str1));