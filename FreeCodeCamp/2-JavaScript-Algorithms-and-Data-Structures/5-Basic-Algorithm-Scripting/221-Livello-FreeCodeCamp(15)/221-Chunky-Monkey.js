function chunkArrayInGroups(arr, size) {
  let result = [];

  for (let index = 0; index < arr.length; index++) {
    if (index % size === 0) {
      result.push([]);
    }
    result[result.length - 1].push(arr[index]);
  }

  return result;
}

chunkArrayInGroups(["a", "b", "c", "d"], 2);
