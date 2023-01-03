let myArray = [1, 2, 3];
let arraySum = myArray.reduce((previous, current) => {
  return previous + current;
});
console.log(`Sum of array values is: ${arraySum}`);
