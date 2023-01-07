function mutation(arr) {
  const result = arr.map((word) => {
    return [
      ...new Set(
        word.split("").map((letter) => {
          return letter.toLowerCase();
        }),
      ),
    ];
  });

  return result[1].every((letter) => {
    return result[0].includes(letter);
  });
}

mutation(["hello", "hey"]);
