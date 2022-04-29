// Setup
function phoneticLookup(val) {
    let obj = {
        "alpha": "Adams",
        "bravo": "Boston",
        "charlie": "Chicago",
        "delta": "Denver",
        "echo": "Easy",
        "foxtrot": "Frank"
    };

    let result = obj[val];

    // Only change code above this line
    return result;
}

phoneticLookup("charlie");