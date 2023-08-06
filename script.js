

// // Q1 code

function sum(a, b) {

    // let a = 4;

    // let b = 4;

    if (a != b) {
        console.log(a + b)
    }
    else (
        console.log(a + b * 3)
    )

}

sum(4, 4)


// // Q2code

function check(a) {

    if (a / 3 & a / 7) {

        console.log("interger is a multiplication of 3 or 7")

    }

    else {
        console.log("integer is not a multiplication of 3 or 7")
    }
}


check(70);


// // Q4 code

function divmul(a, b) {

    console.log(a * b);
    console.log(a / b);



}

divmul(10,2);






// // Q6 code

console.log(Date())

// Q5 solve


let c = 60;
let f = 0;
f = (c * (9 / 5)) + 32;

console.log("The value of the temperature in Fahrenheit is " + f);



// Q6

const countVowels = (str) => {

    const count = str.match(/[aeiou]/gi).length;

    return count;





}

// let string = prompt (" enter string");
// let result = countVowels(string);
// console.log(result);

// object exercise

// QA code


let student = {

    name: "max",
    age: 27
};

console.log(student.name);



// 2code

const product = {
    discount1: 0.10,
    discount2: 0.07, // It should be 0.07 for a 7% discount, not 0.7 (which would mean 70% discount).

    originalPrice: (price) => { // We need to use the 'function' keyword for methods inside an object.
        if (price > 100) {
            return price * product.discount1; // We need to use 'this' to access the properties within the object.
        } else {
            return price * product.discount2; // Again, use 'this' for accessing properties.
        }
    }
};

let result = product.originalPrice(170);
console.log(result);


// q3 code



