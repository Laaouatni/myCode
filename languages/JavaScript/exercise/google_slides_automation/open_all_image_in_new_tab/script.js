let arr = [];

document.querySelectorAll("image")
    .forEach((a, index) => {
        let link = a.href.baseVal;
        openImage(link);

        arr.push(link);
        console.log(`✅ ${index + 1}/${arr.length} - ${link}`);
    });

console.log(`✅✅✅ finished opening ${arr.length} images`, arr);


function openImage(link) {
    var el = document.createElement("a");

    el.setAttribute("href", link);
    el.setAttribute("target", "_blank");

    document.body.appendChild(el);

    el.click();
    el.remove();
}