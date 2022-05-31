setInterval(() => {
    let subscribedChannel = document.querySelector("[subscribed]");
    let unsubButton = document.querySelector(`yt-confirm-dialog-renderer`)[0].querySelector(`#confirm-button`);

    subscribedChannel.click();
    unsubButton.click();
}, 1000 / 30);