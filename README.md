# 8051 Microcontroller Projects using SDCC

## 📌 Overview

This repository contains programs and projects for the **8051 microcontroller**, compiled using the **SDCC (Small Device C Compiler)**.
SDCC is a free, open-source, retargettable C compiler designed for embedded systems, supporting the 8051 architecture very well.
You can test your projects using **real hardware** or simulate them using **Proteus**.

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

* **SDCC** = Small Device C Compiler

* Open-source, cross-platform toolchain for 8-bit and small CPUs

* Supports many architectures, including:

  * Intel MCS-51 (8051 family)
  * Z80
  * STM8
  * PIC16/PIC18 (experimental)

* Runs on **Windows, Linux, and macOS**.

* For 8051, SDCC compiles `.c` source files into `.ihx` files.

* `.ihx` files can be converted to `.hex` using `packihx` for flashing or simulation.

---

## ⚙️ How to Build with SDCC

1. Install **SDCC**: [Download here](http://sdcc.sourceforge.net/)

   * Available for **Windows, Linux, and macOS**

2. Write your C code (e.g., `led_blink.c`)

3. Compile your code:

   ```bash
   sdcc led_blink.c
   ```

   * Generates `led_blink.ihx`

4. Convert `.ihx` → `.hex` (if required by programmer or simulator):

   ```bash
   packihx led_blink.ihx > led_blink.hex
   ```

5. Flash `.hex` to your 8051 microcontroller using a programmer (USBasp, etc.)

---

## 🖥️ Simulation in Proteus

If you don’t have physical hardware, you can **simulate your 8051 projects using Proteus**.

### Steps:

1. **Install Proteus** (Windows; Linux can run via Wine).

2. **Create a new schematic**:

   * Place an **8051 microcontroller**.
   * Add components like LEDs, switches, or other peripherals.

3. **Load the `.hex` file**:

   * Click the 8051 → Edit Properties → Program File → Select `led_blink.hex`.

4. **Run simulation**:

   * Click **Play** → observe LEDs, motors, or sensors behave as in hardware.

5. **Debug easily**:

   * Step through code, monitor ports, or add virtual probes.

✅ **Benefits**: Safe testing, learning, and rapid prototyping without hardware.

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
packihx led_blink.ihx > led_blink.hex
```

* Run in **Proteus** or flash to 8051 MCU.

---

## ✅ References

* [SDCC Official Site](http://sdcc.sourceforge.net/)
* [8051 Microcontroller Basics](https://en.wikipedia.org/wiki/Intel_MCS-51)
* [Proteus Simulation Tool](https://www.labcenter.com/)

