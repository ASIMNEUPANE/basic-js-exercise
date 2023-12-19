// 1 Given a string , reverse each word in the sentence

// let asu = 'asim is hero'

// const sp = asu.split(' ')

// const save = sp.map((sp)=>{
//     return sp.split('').reverse().join('')
// })

// console.log(save.join(' '))

// 2 check if the object is array or not give some code

// const checkArray = (check) => {
//   return Array.isArray(check);
//   // typeof always shows object
// };

// console.log(checkArray([]));

// 3.How to empty an array in js . donot reset it to a new array, and do not loop through to pop each value?
// const arr = ['a', 3, 4]

// console.log( arr.length = 0)

// 4 how do you check if the number is integer

// const check=(a)=>{
//     // return Number.isInteger(a) 1st solution
//     if(a%1 ===0){
//         console.log('integer')

//     }else{
//         console.log('!integer')
//     }
// }
// console.log(check(1))

// 5 Make this work :
// duplicate ([1,2,3,4,5]); // [1,2,3,4,5,1,2,3,4,5]

// const duplicate=(arr)=>{
//     return arr.concat(arr)
// }
// console.log(duplicate([1,2,3,4,5]))

// 6 write a function which reverse a number
// const reverseNum =(a)=>{
// return Number(a.toString().split('').reverse().join('')) 1st solution

// let rev = 0;
// while(a >0){
//     const rem = a%10;
//     rev = rev*10 + rem;     2nd way to solve
//     a = Math.floor(a/10);
// }
// return rev;

// }
// console.log(reverseNum(3124))

// 7 . write a js function that check whether  a passed string is palindrome or not

// const check =(str)=>{
//     const first = str.split('').reverse().join('');

// return str === first;

// }
// console.log(check('asim'))

// 8 . write a js function that returns a passes string with letters in alphabetical order

// const convert = (str)=>{
//     return str.split('').sort().join('')
// }
// console.log(convert('Asim'))

// 9 write a js function that accepts a string as a parameter and converts the first letter of each word of the string in upper case

// const output = (str) => {
//   const result = str.split(" ").map((e) => {
//     return e.charAt(0).toUpperCase() + e.substring(1);
//   });
//   return result.join(" ");
// };
// console.log(output("asim hello how are you"));

// create a counter function in js

//10- const counter = () => {
//   let count = 4;
//   const interValid = setInterval(() => {
//     if (count > 0) {
//       count--;
//       console.log(count);
//     } else {
//       clearInterval(interValid);
//     }
//   }, 1000);
// };
// counter();

// -----------Loops question--------------

// 11- write a function to Check how many times a letter is repeated at the string

// const occ = (str) => {
//   let occurences = {};
//   str.split("").forEach((element) => {
//     if (occurences.hasOwnProperty(element) === false) {
//       occurences[element] = 1;                         ====================--imp--==========
//     } else {
//       occurences[element]++;
//     }
//   });
//   return occurences
// };
// console.log(occ('asimm'))

// 12 Loop an array and add all member of it?

// const arr = [1, 2, 3, 4, 5];
// let total = 0;

// const a = arr.reduce((a,b)=>{    1st solution
//   return  a + b
// })
//  arr.forEach((arr) => {
//  total = total + arr;     2nd solution
// });
// console.log(a)

// 13. In a array of numbers and strings , only add those members which are not strings

// const arr = [1, "2", 3, "4"];
// let sum = 0;

// arr.forEach((element) => {
//   if (( Number.isInteger(element))) {
//     sum = sum + element;
//   }
// });

// console.log(sum)

// 14. Loop an array of objects and remove all objects which dont't have genders value male;

// let arr = [
//   { name: "asim", gender: "male", age: 44 },
//   { name: "asu", gender: "female", age: 44 },
//   { name: "asim", gender: "female", age: 44 },
// ];

// let count = 0;
// arr.forEach((e) => {
//   if (e.gender !== "male") count++;
// });
// console.log(count);    =================important=====================

// for (let i = 1; i <= count; i++) {
//   for (let j = 0; j < arr.length; j++) {
//     if (arr[j].gender !== "male") {
//       arr.splice(j, 1);
//     }
//   }
// }
// console.log(arr)

// const newarr = arr.filter((elem) => {
//  return elem.gender === 'male'            it makes new array 1st solution
// });

// console.log(newarr);

// =========Array===========

// 15 write a js function to clone an array?

// const cloneArr = (arr) => {
//   return [...arr];
// };

// console.log(cloneArr([1, 2, 3, 4]));
