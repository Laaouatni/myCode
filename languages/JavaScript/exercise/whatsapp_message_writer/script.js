function spamMessage(props) {
    console.log("0")
    window.InputEvent = window.Event || window.InputEvent;
    console.log("1")
    props.event();
    console.log("2")
    props.input.innerHTML = props.text;
    console.log("3")
    props.input.dispatchEvent(props.event());
    console.log("4")
    props.button.click();
    console.log("5")
}

setInterval(() => {
    let props = {
        "text": "test message",
        "num": 10,
        "input": document.querySelectorAll("._13NKt")[1],
        "button": document.querySelectorAll("._3HQNh")[1].querySelectorAll("button")[0],
        "event": () => {
            return new InputEvent("input", { bubbles: true });
        }
    }

    spamMessage(props);
}, 500);