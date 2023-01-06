function getIndexToIns(arr, num) {
  const sortedArray = [...arr, num].sort((a, b) => a - b);

  for (let index = 0; index < sortedArray.length; index++) {
    const element = sortedArray[index];
    if (element === num) return index;
  }
}

getIndexToIns([40, 60], 50);