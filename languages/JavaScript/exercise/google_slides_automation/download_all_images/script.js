let arr = [];

let notDownNum = 0;

document.querySelectorAll("image")
    .forEach((a, index) => {
        let link = a.href.baseVal;

        if (link != "//ssl.gstatic.com/docs/presentations/images/animation_indicator.svg") {
            downloadImage(link, index);

            arr.push(link);
            console.log(`✅ ${index + 1}/${arr.length} - ${link}`);
        } else {
            notDownNum++;
            console.log(`❌ ${index + 1}/${arr.length} - ${notDownNum} - ${link}`);
        }
    });

console.log(`✅✅✅ finished downloading ${arr.length - notDownNum}/${arr.length} images`);

async function downloadImage(imageSrc, index) {
    const image = await fetch(imageSrc);
    const imageBlog = await image.blob();
    const imageURL = URL.createObjectURL(imageBlog);

    const link = document.createElement('a')

    link.href = imageURL;
    link.download = `${index + 1} esame anas`;

    document.body.appendChild(link)
    link.click()

    document.body.removeChild(link)
}