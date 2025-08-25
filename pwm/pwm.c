#include <8051.h>

void delay(unsigned char);

int main() {
    unsigned char dutycycle = 0; // Duty cycle variable (0-255)

    while (1) {
        // Increasing duty cycle
        for (dutycycle = 0; dutycycle <= 256; dutycycle += 16) {
            P1_0 = 1;        // Turn ON the pin
            delay(dutycycle); // ON time proportional to duty cycle

            P1_0 = 0;        // Turn OFF the pin
            delay(255 - dutycycle); // OFF time is the remaining period
        }

        // Decreasing duty cycle
        for (dutycycle = 256; dutycycle > 0; dutycycle -= 16) {
            P1_0 = 1;        // Turn ON the pin
            delay(dutycycle); // ON time proportional to duty cycle

            P1_0 = 0;        // Turn OFF the pin
            delay(255 - dutycycle); // OFF time is the remaining period
        }
    }
}

void delay(unsigned char ms) {
    unsigned char i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 120; j++); // Roughly 1 ms delay on a standard 8051 with 12 MHz crystal
    }
}

