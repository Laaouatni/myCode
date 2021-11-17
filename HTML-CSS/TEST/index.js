function radioCheck(radio) {
    const uno = document.getElementById("1-corsi-div");
    const due = document.getElementById("2-corsi-div");
    const tre = document.getElementById("3-corsi-div");

    if (radio == "1") {
        uno.className = 'corsi-div on';
        due.className = 'corsi-div off';
        tre.className = 'corsi-div off';
        console.log("1");
    } else
    if (radio == "2") {
        uno.className = 'corsi-div off';
        due.className = 'corsi-div on';
        tre.className = 'corsi-div off';
        console.log("2");
    } else
    if (radio == "3") {
        uno.className = 'corsi-div off';
        due.className = 'corsi-div off';
        tre.className = 'corsi-div on';
        console.log("3")
    } else {
        alert("something go wrong");
    }
}