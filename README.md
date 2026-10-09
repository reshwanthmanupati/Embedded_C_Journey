# embedded-c-journey

A public log of me relearning **Embedded C from scratch** and moving on to **STM32 firmware development**, one day at a time.

I'm following a self-run 9-to-5 study routine, with daily commits as proof of work.

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

## Roadmap

- [ ] K&R Chapters 1-3 with all exercises (Week 1 milestone)
- [ ] K&R Chapters 4-8
- [ ] Bit manipulation library
- [ ] Pointers, structs, unions
- [ ] `volatile`, `const`, memory-mapped registers
- [ ] Ring buffer and state machine projects
- [ ] STM32 GPIO at register level
- [ ] STM32 UART, timers, interrupts
- [ ] STM32 I2C and SPI with a sensor
- [ ] First complete STM32 mini project

## Daily routine

| Time | Activity |
|------|----------|
| 9:00-10:45 | Embedded C concepts |
| 11:00-12:30 | Coding exercises |
| 1:30-3:30 | OS (OSTEP) |
| 3:45-5:00 | Revision, commits, STM32 (from week 2) |
| 5:00-5:30 | Daily log |

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
