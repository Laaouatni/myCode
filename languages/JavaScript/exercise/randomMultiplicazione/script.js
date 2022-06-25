function createDiv() {
    let randomNumber = Math.floor(Math.random() * 10);
    let anotherRandomNumber = Math.floor(Math.random() * 10);
    let multiplicazioneString = `${randomNumber} x ${anotherRandomNumber} = ...`;

    let div = document.createElement('p');
    div.innerHTML = multiplicazioneString;
    document.body.appendChild(div);
}

for (let i = 0; i < 1000; i++) {
    createDiv();
}