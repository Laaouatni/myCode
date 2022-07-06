Notification.requestPermission();

let messageTotalNumber = 9999;

for (let index = 0; index < messageTotalNumber; index++) {
    new Notification(index);
}