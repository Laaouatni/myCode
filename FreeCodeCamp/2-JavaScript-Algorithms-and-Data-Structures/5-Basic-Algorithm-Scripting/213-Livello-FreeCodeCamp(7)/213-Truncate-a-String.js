function truncateString(str, num) {
  let result = "";

  for (let i = 0; i < num; i++) {
    result += str[i] || "";
  }

  if (str.length > num) {
    result += "...";
  }

  return result;
}

truncateString("A-tisket a-tasket A green and yellow basket", 8);
