function findElement(arr, func) {
  return arr.find((item) => func(item)) || undefined;
}

findElement([1, 2, 3, 4], (num) => num % 2 === 0);
