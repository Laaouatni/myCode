// Only change code below this line
class Thermostat {
    constructor(temperature) {
        this._temperature = temperature;
    }
    get temperature() {
        let FtoC = (5 / 9 * (this._temperature - 32));
        return FtoC;
    }
    set temperature(newTemp) {
        let CtoF = newTemp * 9.0 / 5 + 32;
        this._temperature = CtoF;
    }
}
// Only change code above this line

const thermos = new Thermostat(76); // Setting in Fahrenheit scale
let temp = thermos.temperature; // 24.44 in Celsius
thermos.temperature = 26;
temp = thermos.temperature; // 26 in Celsius