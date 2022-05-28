function spamMessage(props) {
    props.event();
    props.input.innerHTML = props.text;
    props.input.dispatchEvent(props.event());
    props.button.click();
}

let n = 0;

setInterval(() => {
    n++;

    let props = {
<<<<<<< HEAD
        "text": `✅ test ${n/2}`,
=======
        "text": `✅ naima ${n/2}`,
>>>>>>> 42198c124a700182776b873f404200df4374c27e
        "input": document.querySelectorAll("._13NKt")[1],
        "button": document.querySelectorAll("._3HQNh")[1].querySelectorAll("button")[0],
        "event": () => {
            return new InputEvent("input", { bubbles: true });
        }
    }

    spamMessage(props);
}, 100);