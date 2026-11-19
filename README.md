# Embedded-C-journey

A public log of me relearning **Embedded C from scratch** and moving on to **STM32 firmware development**, one day at a time.

## Goals

- Build a solid foundation in C, then embedded C (bit manipulation, pointers, structs, `volatile`, interrupts, state machines)
- Understand memory-mapped registers and write register-level drivers before using HAL
- Move to STM32 (GPIO, timers, UART, I2C, SPI, interrupts)
- Complete small projects that show up in a firmware portfolio

## Resources

| Stage | Resource |
|-------|----------|
| Core C | *The C Programming Language* (K&R, 2nd Edition) |
| Embedded C | *Making Embedded Systems* (Elecia White) |
| Embedded C + STM32 | FastBit Embedded Brain Academy ARM Cortex-M course (Udemy) |
| STM32 | Reference manual, datasheet, Cortex-M programming manual |
| OS concepts | *Operating Systems: Three Easy Pieces* (OSTEP) |

## Repository structure

```
embedded-c-journey/
├── 01-kr-c/
├── 02-bit-manipulation/
├── 03-pointers/
├── 04-structs-unions/
├── 05-registers-volatile/
├── 06-interrupts-state-machines/
├── 07-stm32/
├── notes/
├── logs/
└── README.md
```


## Build and run

```bash
gcc -Wall -Wextra -std=c11 -o out file.c
./out
```

STM32 projects are built with STM32CubeIDE.

## Progress log

| Date | What I did |
|------|------------|
| Day 1 | Setup, K&R Chapter 1 |

## About

I'm Reshwanth, an ECE graduate focused on embedded systems, IoT, and edge AI.
