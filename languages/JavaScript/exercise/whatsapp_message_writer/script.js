function spamMessage(props) {
    window.InputEvent = window.Event || window.InputEvent;
    props.event();
    props.input.innerHTML = props.text;
    props.input.dispatchEvent(props.event());
    props.button.click();
}

let n = 0;
setInterval(() => {
    n++;

    let props = {
        "num": n,
        "text": `✅ ${this.num}`,
        "input": document.querySelectorAll("._13NKt")[1],
        "button": document.querySelectorAll("._3HQNh")[1].querySelectorAll("button")[0],
        "event": () => {
            return new InputEvent("input", { bubbles: true });
        }
    }

    spamMessage(props);
}, 500);