let count = 0;
const Bet = "Bet";
const Hold = "Hold";

function cc(card) {
    // Only change code below this line
    switch (card) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            console.log(card + Bet);
            return card + Bet;
        case 7:
        case 8:
        case 9:
            console.log(card + Hold);
            return card + Hold;
        case 10:
        case 'J':
        case 'Q':
        case 'K':
        case 'A':
            console.log(card + Hold);
            return card + Hold;
    }
    return "Change Me";
    // Only change code above this line
}

cc(2);
cc(3);
cc(7);
cc('K');
cc('A');