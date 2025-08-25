
# 8051 Microcontroller Projects using SDCC

## 📌 Overview

This repository contains programs and projects for the **8051 microcontroller**, compiled using the **SDCC (Small Device C Compiler)**.
SDCC is a free, open-source, retargettable C compiler designed for embedded systems, and it supports the 8051 architecture very well.

---

## 🔹 About 8051

* The **8051** is an 8-bit microcontroller originally developed by Intel.
* Widely used in embedded systems and educational projects.
* Features (standard version):

  * 8-bit CPU
  * 128 bytes of on-chip RAM
  * 4 KB on-chip ROM (depends on variant)
  * 32 I/O lines (4 ports)
  * Timers, counters, and serial communication (UART)

---

## 🔹 About SDCC Compiler

* **SDCC** = Small Device C Compiler.
* Open-source, cross-platform toolchain for 8-bit and small CPUs.
* Supports many architectures, including:

  * Intel MCS-51 (8051 family)
  * Z80
  * STM8
  * PIC16/PIC18 (experimental)
* Runs on **Windows, Linux, and macOS**.
* For 8051, SDCC compiles `.c` source files into `.hex` files that can be loaded into microcontroller programmers/simulators.

---

## ⚙️ How to Build with SDCC

1. Install **SDCC**: [Download here](http://sdcc.sourceforge.net/)

   * Available for **Windows, Linux, and macOS**.

2. Write your code (e.g., `led_blink.c`).

3. Compile the code:

   ```bash
   sdcc led_blink.c
   ```

   This generates an `led_blink.ihx` file.

4. Convert `.ihx` to `.hex` (optional, if required by your programmer):

   ```bash
   packihx led_blink.ihx > led_blink.hex
   ```

5. Flash the `.hex` file into your 8051 microcontroller using a programmer (like USBasp or other tools).

---

## 📂 Repository Structure

```
/src        → Source code (.c, .h)
/build      → Compiled outputs (.ihx, .hex)
/docs       → Documentation and circuit diagrams
```

---

## 🚀 Example Project: LED Blink

```c
#include <8051.h>

void delay() {
    unsigned int i;
    for(i = 0; i < 50000; i++);  // simple delay loop
}

void main() {
    while(1) {
        P1 = 0xFF;  // Turn ON LEDs connected to Port 1
        delay();
        P1 = 0x00;  // Turn OFF LEDs
        delay();
    }
}
```

* Compile:

  ```bash
  sdcc led_blink.c
  ```
* Flash `led_blink.hex` to 8051.

---

## ✅ References

* [SDCC Official Site](http://sdcc.sourceforge.net/)
* [8051 Microcontroller Basics](https://en.wikipedia.org/wiki/Intel_MCS-51)

---
