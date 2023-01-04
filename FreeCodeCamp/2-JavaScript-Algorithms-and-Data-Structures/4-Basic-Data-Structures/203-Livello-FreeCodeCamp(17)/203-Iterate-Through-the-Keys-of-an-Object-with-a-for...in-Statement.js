const users = {
  Alan: {
    online: false,
  },
  Jeff: {
    online: true,
  },
  Sarah: {
    online: false,
  },
};

function countOnline(usersObj) {
  // Only change code below this line
  let total = 0;

  for (let user in usersObj) {
    const thisObj = usersObj[user];
    if (thisObj.online) total++;
  }

  return total;
  // Only change code above this line
}

console.log(countOnline(users));
