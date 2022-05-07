let arrayOne = [1];
let arrayTwo = [2, 3, 4];
let arrayThree = [2, 3, 4, 5];

function sum(arr, n) {
    // Only change code below this line
    if (n <= 0) {
        return 0;
    } else {
        return sum(arr, n - 1) + arr[n - 1];
    }
    // Only change code above this line
}

console.log(sum(arrayOne, 0));
console.log(sum(arrayTwo, 1));
console.log(sum(arrayThree, 3));