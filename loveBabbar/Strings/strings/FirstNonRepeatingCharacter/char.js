function nonRepeat(str){
    let map = new Map();

    for(let char of str){
        if(map.has(char)){
            map.set(char,map.get(char)+1);
        }else{
            map.set(char,1);
        }
    }


    for(let char of str){
        if(map.get(char) === 1){
            return char;
        }
    }

    return null;
}

console.log(nonRepeat("Lakshay"));