// contructer func

function saaanchaOfBiscuit(color) {
    // 'this' by default points to the window object

    this.width = 12;
    this.height = 22;
    this.color = color;
    this.taste = 'sugary';
}

const newBiscuit = new saaanchaOfBiscuit('orange');
console.log(newBiscuit);
// normal function where we use this  and when we call func using new keyword