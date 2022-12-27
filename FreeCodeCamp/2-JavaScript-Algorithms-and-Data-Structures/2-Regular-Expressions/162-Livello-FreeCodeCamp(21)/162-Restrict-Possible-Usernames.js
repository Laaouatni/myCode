let username = "JackOfAllTrades";
let userCheck = /(^[a-z]{2,})(\d*$)|(^[a-z])(\d{2,}$)/i; // Change this line
let result = userCheck.test(username);