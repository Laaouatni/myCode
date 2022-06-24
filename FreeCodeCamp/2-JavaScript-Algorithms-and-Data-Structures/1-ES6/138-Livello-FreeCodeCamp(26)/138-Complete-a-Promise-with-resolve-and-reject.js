const makeServerRequest = new Promise((resolve, reject) => {
    // responseFromServer represents a response from a server
    let responseFromServer = true;

    if (responseFromServer) {
        // Change this line
        resolve(`We got the data`);
    } else {
        // Change this line
        reject(`Data not received`)
    }
});