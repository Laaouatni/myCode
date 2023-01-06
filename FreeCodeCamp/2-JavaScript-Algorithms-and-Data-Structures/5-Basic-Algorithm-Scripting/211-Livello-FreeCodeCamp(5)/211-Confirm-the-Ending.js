function confirmEnding(str, target) {
  let result = true;

  for (let i = target.length; i >= 1; i--) {
    const lastLetterStr = str[str.length - i];
    const lastLetterTarget = target[target.length - i];

    if (lastLetterTarget !== lastLetterStr) {
      result = false;
      break;
    }
  }

  return result;
}

confirmEnding("Bastian", "n");
