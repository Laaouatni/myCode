function findLongestWordLength(str) {
  const words = str.split(" ");
  let result = "";

  words.forEach((word) => {
    if (word.length > result.length) {
      result = word;
    }
  });

  return result.length;
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");
