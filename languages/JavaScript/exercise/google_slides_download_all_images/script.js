let arr = [];

document.querySelectorAll("image")
    .forEach((a) => {
        let link = a.href.baseVal;
        download(link);

        arr.push(link);
    });

console.log(arr);

function download(source) {
    var el = document.createElement("a");

    el.setAttribute("href", source);
    el.setAttribute("download", "");

    document.body.appendChild(el);

    el.click();
    el.remove();
}