let htmlContainer = document.querySelector("#container");

let htmlPtag = document.querySelectorAll("#container p");

let testoArray = [];
let strongArray = [];

htmlPtag.forEach((value, index, array) => {

    if (value.innerHTML.includes("<strong>")) {
        strongArray.push(value.querySelector("strong").textContent);
        value.querySelector("strong").textContent = "";
        console.log("✅")
    } else {
        console.log("❌ solve something there... \n probably some <strong> tags are missing in html")
    }

    let testo = value.innerHTML;

    testo = testo.replace(/<br>/g, "");
    testo = testo.replace(/<strong>/g, "");
    testo = testo.replace(/<\/strong>/g, "");
    testo = testo.replace(/\s+/g, " ");

    console.log(testo);

    testoArray.push(testo);
});

// create a table and insert in the left every strongArray, and right every testoArray

let table = document.createElement("table");
let tr = document.createElement("tr");
let tdLeft = document.createElement("td");
let tdRight = document.createElement("td");

[testoArray, strongArray].forEach((value, index, array) => {
    value.forEach((value, index, array) => {
        let newTD = document.createElement("tr");
        newTD.innerHTML = value;
        tdRight.appendChild(newTD);
    });
});

tr.appendChild(tdLeft);
tr.appendChild(tdRight);
table.appendChild(tr);

document.querySelector("#risultato").appendChild(table);

console.log(strongArray);
console.log(testoArray);