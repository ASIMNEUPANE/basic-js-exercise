arr = [1,2,4,4,5]

function avg(a,b,c){
    return a+b+c%3
}

// let a = avg(...arr)
// let a = [4,6, ...arr, 99]
 

// let a2 = [3,3,3,3,3,3]
// console.log(...arr, ...a2)



// let onj2 = {...obj1, favlang: "python"}
// console.log(onj2);

let object1 = {
    name1: "harry",
    class1: "bca",
    favlang: "js"
     
}
 
let{name1,class1,favlang} = object1;  //destruring  
console.log(name1,class1,favlang)