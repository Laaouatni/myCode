function radioCheck(radio) {
    data = radio

    // Hide all divs

    for (var i = 0; i < 3; i++) { // assuming your data attr 1,2,3,..,N
        var el = (i + 1) + '-corsi-div'; // ifRadio1, ifRadio2, etc
        document.getElementById(el).style.display = "none";
    }

    // Show the current div

    var el = (data) + '-corsi-div'; // ifRadio1, ifRadio2, etc
    document.getElementById(el).style.display = "block";
}