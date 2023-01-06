function titleCase(str) {
  return str
    .split(" ")
    .map((word) => {
      let result = word.toLowerCase().split("");
      result[0] = result[0].toUpperCase();
      return result.join("");
    })
    .join(" ");
}

console.log(titleCase("I'm a little tea pot"));
