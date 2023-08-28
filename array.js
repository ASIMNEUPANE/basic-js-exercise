// // const val = ['1', '2', '3'];
// // const add = val.reduce((a,b)=>{
// // return a+b,0
// // })

const { upperCase } = require("upper-case")

// // console.log(add());

// // Q1code

// const array = [1, 2, 3, 4, 5];

// const sum = array.reduce((total, currentValue) => total + currentValue, 0);

// console.log("Sum of array values:", sum);

// // Q2code

// const arr = [1,2,3,4,5,6];
// const find = arr.pop(0)
// console.log(find)

// Write a program to find the maximum and minimum value of an array

// const array1 = [12, 45, 6, 89, 34, 67, 23];

// // Using Math.max() and Math.min() with the spread operator
// console.log(...array1);
// console.log(array1);

// const maxVal = Math.max(...array1);
// const minVal = Math.min(...array1);

// console.log("Maximum value:", maxVal);
// console.log("Minimum value:", minVal);

// Write a program to reverse an array of integer values.

// const array = [12, 45, 6, 89, 34, 67, 23];
// const reversedArray = array.reverse();

// console.log("Original array:", array);
// console.log("Reversed array:", reversedArray);

// const array = [12, 45, 6, 89, 34, 67, 23];
// const reversedArray = [...array].reverse();

// console.log("Original array:", array);
// console.log("Reversed array:", reversedArray);

// 5.  Write a program to find the second largest element in an array.



// let myList = [1, 3, 4, 5, 9, 15, 10];
// let newList = myList.sort((a, b) => a - b);
// let lastElement = newList[newList.length - 2];

// console.log(newList);

// 6.  Write a Javascript program to find the sum of the two elements of a given array equal to a given integer.
// Eg:
// Sample array: [1,2,4,5,6]
// Target value: 6.






// 7.  Write a function that converts an array of values from miles to kilometres using the map method. In the end, 
// add the kilometres up in a new variable called "totalDistanceInKilometers" and return this variable.



// const miles = [95, 572, 318, 207]


// const convertor = ()=>{
//    const totalDistanceInKilometers = miles.map((value)=>{
// return value*1.60934
//    })
//    return totalDistanceInKilometers;
// }

// console.log(convertor())

// 8.  Square and sum the array elements using the arrow function and then find the average of the array.

// const array = [95, 572, 318, 207]

//  const Square = array.map((value)=>{    
//     return value*value})



// const sum = Square.reduce((val,val1)=>{
//     return val+val1;
// })
// console.log(sum)

// const average = (sum)=>{
    
//     return sum/2
// }
// console.log(average(sum))




// 9.  Create a new array whose elements is in uppercase of words present in the original array.

// const arr = ['ASIM', "asim","asu","ASU"]

// const newArr = arr.filter((item)=>{
//     return item == item.toUpperCase()
 
   
// })

// console.log(newArr)



// 10. Write a function Myfunc that takes in an array of numbers and multiply each of the elements by 2.
// 
// const arr = [2,3,4,5,6]

// const Myfunc= ()=>{
//     const multi = arr.map((val)=>{
// return val*2
//     })
//     return multi
// }
// console.log(Myfunc())


// 11.

// ```code
// let food = ['Noodle', 'Pasta', 'Ice-cream'];
// let food = ['Fries', 'Ice-cream', 'Pizza'];
// ```

// Compare the 2 arrays and find common food if any.

// let food = ['Noodle', 'Pasta', 'Ice-cream'];
//  let food2 = ['Fries', 'Ice-cream', 'Pizza'];

//  const commonFood = food.filter(items=>  food2.includes( items) )


// console.log(commonFood)