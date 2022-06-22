const s = [5, 7, 2];

function editInPlace() {
    [2, 5, 7].forEach((el, index) => {
        s[index] = el;
    });
}
editInPlace();