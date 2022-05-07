let obj = {};
// Setup
const contacts = [{
        firstName: "Akira",
        lastName: "Laine",
        number: "0543236543",
        likes: ["Pizza", "Coding", "Brownie Points"],
    },
    {
        firstName: "Harry",
        lastName: "Potter",
        number: "0994372684",
        likes: ["Hogwarts", "Magic", "Hagrid"],
    },
    {
        firstName: "Sherlock",
        lastName: "Holmes",
        number: "0487345643",
        likes: ["Intriguing Cases", "Violin"],
    },
    {
        firstName: "Kristian",
        lastName: "Vos",
        number: "unknown",
        likes: ["JavaScript", "Gaming", "Foxes"],
    },
];

function lookUpProfile(name, prop) {
    // Only change code below this line

    let returnedValue;
    let isNameFound = false;

    contacts.forEach((el) => {
        if (el.firstName == name) {
            isNameFound = true;

            if (el.hasOwnProperty(prop)) {
                returnedValue = el[prop];
            } else {
                returnedValue = "No such property";
            }
        } else {
            if (isNameFound != true) {
                returnedValue = "No such contact";
            }
        }
    });

    return returnedValue;
}
// Only change code above this line

console.log({
    test0: lookUpProfile("Kristian", "lastName"),
    test1: lookUpProfile("Sherlock", "likes"),
    test2: lookUpProfile("Harry", "likes"),
    test3: lookUpProfile("Bob", "number"),
    test4: lookUpProfile("Bob", "potato"),
    test5: lookUpProfile("Akira", "address")
})