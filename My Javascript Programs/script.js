console.log("Hello World");

//Let's try all the array methods
const arr = [1, 2, 3];
const arr2 = [5, 6, 7, 8];
const arr3 = [9, 10, 11, 12];
const fruits = ["Banana", "Orange", "Apple", "Mango", "Grapes", "Strawberry"];
const ages = [32, 33, 16, 40];
const name = "Saish";

console.log(arr.length);
console.log(arr.toString());
console.log(arr.at(2));
arr.pop();
console.log(arr);
arr.push(4);
console.log(arr);
// console.log(arr.delete(0));
console.log(arr.splice());
console.log(arr.concat(arr2).concat(arr3));
console.log("Hello Javascript");
// fruits.fill("Jackfruit", 1, 3);
console.log(fruits);
console.log(
  ages.some((age) => {
    return age >= 18;
  })
);
console.log(fruits.includes("Apple", 2));
console.log(Array.isArray(name));
console.log(fruits.join(" "));
console.log(fruits.indexOf("Jackfruit"));
console.log(fruits.lastIndexOf("Jackfruit"));
const newArray = Array.of(5, 6, 7, 800, -8);
// console.log(newArray.sort());
// console.log(newArray.reverse());
const modifiedArr = newArray.with(1, "Saish");
console.log(modifiedArr);
