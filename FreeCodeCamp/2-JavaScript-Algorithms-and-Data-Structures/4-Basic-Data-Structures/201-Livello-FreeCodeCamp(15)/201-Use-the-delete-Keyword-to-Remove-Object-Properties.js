let foods = {
  apples: 25,
  oranges: 32,
  plums: 28,
  bananas: 13,
  grapes: 35,
  strawberries: 27,
};

// Only change code below this line
["oranges", "plums", "strawberries"].forEach((key) => {
  delete foods[key];
});
// Only change code above this line

console.log(foods);
