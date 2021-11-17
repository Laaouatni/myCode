function radioCheck(radio) {
    const uno = document.getElementById("1-corsi-div");
    const due = document.getElementById("2-corsi-div");
    const tre = document.getElementById("3-corsi-div");

    if (radio == "1") {
        uno.classList.add("on");
        due.classList.add("off");
        tre.classList.add("off");
        console.log("1");
    } else
    if (radio == "2") {
        uno.classList.add("off");
        due.classList.add("on");
        tre.classList.add("off");
        console.log("2");
    } else
    if (radio == "3") {
        uno.classList.add("off");
        due.classList.add("off");
        tre.classList.add("on");
        console.log("3")
    } else {
        alert("something go wrong");
    }
}