# Display-Light-LED-Color-Controller

This simple AVR C project implements a color-changing LED using the ATtiny13A microcontroller. The LED cycles through different colors based on a push button's state.

## Table of Contents
- [Prerequisites](#prerequisites)
- [How It Works](#how-it-works)
- [Circuit Setup](#circuit-setup)
- [AVR Microcontroller Configuration](#avr-microcontroller-configuration)
- [Compiling and Flashing](#compiling-and-flashing)
- [Author](#author)
- [License](#license)

## Prerequisites
- AVR Microcontroller: ATtiny13A
- AVR Toolchain
- AVR Programmer (e.g., USBasp)
- RGB LED
- Push Button
- Resistors
- Breadboard and jumper wires

## How It Works
The program initializes three output pins for the Red, Green, and Blue components of an RGB LED. It also configures an input pin for a push button. The program enters a loop where it checks the state of the push button. Based on the button state, the LED changes colors. The implemented colors include Red, Yellow, Green, Cyan, Blue, Magenta, and White.

## Circuit Setup
1. Connect the ATtiny13A to the RGB LED and push button.
2. Connect the RGB LED pins to the ATtiny13A output pins.
3. Connect the push button to the ATtiny13A input pin.
4. Add appropriate resistors to the RGB LED to limit the current.

## AVR Microcontroller Configuration
- **Clock Frequency:** 1.2 MHz (defined by `F_CPU`)
- **Output Pins:**
  - PB3 (Pin 2): Red LED
  - PB1 (Pin 6): Green LED
  - PB2 (Pin 7): Blue LED
- **Input Pin:**
  - PB4 (Pin 3): Push Button

## Compiling and Flashing
1. Compile the C code using an AVR toolchain.
   ```bash
   avr-gcc -g -mmcu=attiny13a -o LED_blink.elf LED_blink.c
2. Program the ATtiny13A using an AVR programmer.
```bash
avrdude -c usbasp -p t13 -U flash:w:LED_blink.elf
```
3. Power up the circuit and observe the LED changing colors based on the push button state.
