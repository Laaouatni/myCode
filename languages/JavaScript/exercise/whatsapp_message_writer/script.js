let props = {
    "text": "test message",
    "num": 10,
    "input": document.querySelectorAll("._13NKt")[1],
    "button": document.querySelectorAll("._3HQNh")[1].querySelectorAll("button")[0],
    "event": new InputEvent("input", { bubbles: true })
}

window.InputEvent = window.Event || window.InputEvent;

for (let i = 0; i < props.num; i++) {
    function spamMessage(props) {
        console.log("0")
        props.input.innerHTML = props.text;
        console.log("1")
        props.input.dispatchEvent(props.event);
        console.log("2")
        props.button.click();
        console.log("3")
    }
}

spamMessage(props);