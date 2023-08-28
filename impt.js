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


// // // Variables (var, let, const)
// // // ES5
// // var person = "ram";
// // person = "shyam";

// // console.log(person);

// // // ES6
// // const person1 = "ram";

// // console.log({ person1 });

// // // Let

// // let person2 = "ram";
// // person2 = "shyam";

// // console.log({ person2 });

// // // logical

// // let hour = promt("give a random number number")
// // if(hour>10 || hour<13){
// //     alert(" js clss is in session")
// // }

// // function guessGame(){
// //     let guess = prompt("guess your number");
// // let num = Math.floor(Math.random() * 10);


// // if(guess===num){
// //     alert("your guess is right")
// // }
// // if(guess>num){
// //     alert("your guess is higher than the actual number")
// // }
// // if(guess<num){
// //     alert("your guess is lesser than the actual number")
// // }



// // }

// // guessGame()

// // function 

// const user =(name) =>{

//     console.log(" hello " + name)
// }

// user("Asim")
// const helo = (a,b) =>{

//     return a+b;
// }

// const result = helo(1,2)
// console.log(result)


// const add = (a,b)=>{
// if (a<0 && b<0){
//     return null;
// }
// return a+b;


// }
// add(-1,2);

// const num = Number(prompt("enter your age"));
// console.log(num);


// const sum = (a,b)=>{

// if(a>0 && b>0){
//     return a+b;
// }
// alert("enter positive integer");

// }


// const result = sum(1,-4);
// console.log(result)


// const person = {

//     firstName : "john",
//     lastName : "doh",
//   fullName : () =>{

//     return person.firstName + " " + person.lastName;
// }


// };

// console.log(person.fullName());

// const car = {
//     name : "BMW",
// model : "2000",
// seat : "4 seat",

// carDetail : () =>{
//     return car.name + " model is " + car.model + " and it has " + car.seat ;
// },

// seatChecker : (setNo) =>{
// if(setNo>4){
//     alert("This car only has 4 seat")
//     }
// }
// };

// console.log(car.seatChecker(5));



// const car = {
//     name : "BMW",
// model : 2000,
// seat : "4 seat",

// carDetail : () =>{
//     return car.name + " model is " + car.model + " and it has " + car.seat ;
// },

// seatChecker : (setNo) =>{
// if(setNo>4){
//     alert("This car only has 4 seat")
//     }
// }
// };

// console.log(car.seatChecker(5));





// const car = {
// name: "BMV",
// model: "ceron",
// color : "red",
// madeyear : 2000,

// carDetail : ()=>{
// return car.name+ ' ' +car.model + ' model ' ;

// },

// carAge: (year)=>{

// return year -car.madeyear;

// }



// };

// console.log(car.carDetail());


// const year =   Number( prompt("enter current year"))
// console.log(" Your car age is " + car.carAge(year))



// const login = {

// userEmail : "asimneupane11@gmail.com",
// userLastname : "Neupane",
// age : 19,
// password : "Helloworld",

// auth : (email,pass)=>{
//     if(email != login.userEmail && pass != login.password ){

//         return alert("User not found")
//     }
//     else {
//         return alert("User LogIn succesfully")
//     }


// }};
// a = prompt("enter your email")
// b = prompt("enter your password")

// console.log(login.auth(a,b))

// const email = prompt("Enter your email address");
// const password = prompt("Enter your password")

// console.log(login.auth(email,password));

// let em = document.getElementById('email')
// let pas = document.getElementById('password')
// let submit = document.getElementById('submit')
// let y = submit.addEventListener("click", login.auth(em,pas));
// let result = document.getElementById('result')





// const login = {

//     userEmail : "asimneupane11@gmail.com",
//     password : "Helloworld",
    
//     auth : (em,pas)=>{
//         if(em != login.userEmail && pas != login.password ){
    
//             return result.innerHTML("User not found")
//         }
//         else {
//             return result.innerHTML("USer succesfully")
//         }
    
    
//     }};

//     login.auth()




// array

// method of array
// length, sort ,push, pop
// map, find, filter, reduce = Immutable js


// MAP IN ARRAAY


// const person = [
//     {name: "ram", age : 20},
//     {name: "asim", age : 16},
//     {name: "syam", age : 17},
//     {name: "hari", age : 21},
// ]

// const age = person.map((person)=> {return person.age});
// const age2 = person.map((person)=> person.name);
//     console.log(age2)
//     console.log(age)

    // used .map beacuse it does not change original array like foreach


// #destructuring  


    //  ... is a spred operator is to open others

//     const person = {

// userName : "asim",
// password : "password",
// role : "Admin"

//     };
//         const {password, ...rest}= person;

//         console.log({rest});
//         console.log(person)



// method ma argument vanxa
// function ma parametar vanxa



// let a1= a = [1,2,3,4,5]
// let a2= a.map((value)=>{  //dont practice this way
//     return value*2
// })
// console.log(a2)



//         let a1=  [1,2,3,4,5]
// let a2 = a1.map((a1) => a1*2 )   // this is a right way to code

// console.log(a2)



// FILTER IN ARRAY




//         let a1=  [1,2,3,4,5]
// let a2 = a1.filter((a1) => a1<3 )   // this is a right way to code

// console.log(a2)


// reduce in js

// let a4 = a1.reduce((val1,val2) => val1+val2)
    
//     console.log(a4)






   



 
    
    
    
   


