# Xila

<h2>
<p align="center">
<a href="https://xila.dev">🖥️ xila.dev 🖥️</a>
</p>
</h2>

## 📰 Introduction

Xila is a lightweight operating system (like [Contiki](https://github.com/contiki-os/contiki "Contiki") or [TinyOS](https://github.com/tinyos/tinyos-main "TinyOS")) for embedded devices (currently only the ESP32 is supported). Its goal is to offer a simple standardized API. In this way, that allows the integration of different software in one unique ecosystem, which is easy to port (only the HAL of Xila needs to be rewrite). I hope you would like it !

💭 Inspired by :
- [BASIC 80's Pocket Computer](https://www.youtube.com/watch?v=Hjdj14C_jAI "BASIC 80's Pocket Computer") - [Benjamin HECKENDORN](https://www.benheck.com/ "Benjamin HECKENDORN")
- [MultiApp Advanced](https://github.com/botofancalin/M5Stack-MultiApp-Advanced "MultiApp Advanced") - [botofancalin](https://github.com/botofancalin "botofancalin")
- [GadgetOS (ex-PyxisOS)](https://www.skewworks.com/pyxis "GadgetOS (ex-PyxisOS)") - [Skewworks](https://www.skewworks.com "Skewworks")


## 📖 Table of contents

- [Xila](#xila)
  - [📰 Introduction](#-introduction)
  - [📖 Table of contents](#-table-of-contents)
  - [🚦 Status](#-status)
  - [📄 Support](#-support)
    - [⏩ Quick start](#-quick-start)
      - [🔰 Using](#-using)
      - [💻 Develop](#-develop)
      - [🔬 Contribute](#-contribute)
  - [✅ Features](#-features)
    - [⭕ Core](#-core)
    - [🟠 Software](#-software)
  - [❓ About](#-about)
    - [🖋️ Credits](#️-credits)
    - [🧾 License](#-license)

## 🚦 Status

| Part | Status |
| :--- | :---: |
| Code - Build | [![PlatformIO CI](https://github.com/AlixANNERAUD/Xila/actions/workflows/build_code.yml/badge.svg)](https://github.com/AlixANNERAUD/Xila/actions/workflows/build_code.yml) |
| Code - Quality | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/793e3ff4ec7c4fb78254cb5bc4b0eb20)](https://app.codacy.com/gh/AlixANNERAUD/Xila/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade) |
| Code - Test coverage | [![Coverage Status](https://coveralls.io/repos/github/AlixANNERAUD/Xila/badge.svg?branch=main)](https://coveralls.io/github/AlixANNERAUD/Xila?branch=main) |
| Documentation - Build | [![Documentation Status](https://readthedocs.org/projects/xila/badge/?version=latest)](https://xila.readthedocs.io/en/latest/?badge=latest) |
| Site - Build| [![Deploy Hugo site to Pages](https://github.com/AlixANNERAUD/Xila_Site/actions/workflows/hugo.yml/badge.svg)](https://github.com/AlixANNERAUD/Xila_Site/actions/workflows/hugo.yml) |

## 📄 Support

The documentation is available here [documentation.xila.dev](https://documentation.xila.dev/ "Xila documentation").

If you have any questions or propositions, you can contact me by mail : [alix.anneraud@outlook.fr](mailto:alix.anneraud@outlook.fr) 

### ⏩ Quick start

#### 🔰 Using

Check [here the documentation](https://documentation.xila.dev/en/latest/Introduction/Get%20started/Use.html) to start using Xila.

#### 💻 Develop

Check [here the documentation](https://documentation.xila.dev/en/latest/Introduction/Get%20started/Developpment.html) to start to develop software with Xila.

#### 🔬 Contribute

This project is open to contributions of any kinds. Feel free to open an issue or a pull request.

## ✅ Features

### ⭕ Core

Here are the feature that are implemented in the core :

- Simple **account manager**.
- **Multitasking** (background execution, protections against freezing and memory overflow).
- Safe **shutdown**, **restart**, **lock** and **hibernation** (deep sleep).
- **Display**, **drive**, **GPIO**, **keyboard**, **network**, **power**, **sounds** and **time** abstraction layers.
- A simple **dialog box** API (keyboards, events, file, color picker ...).

### 🟠 Software

Here is a list of included software :

- A file manager (create, cut, remove ...).
- A preferences pannel.
- A scientific calculator.
- A clock (clock, alarms, chronometer and timer).
- A text viewer.
- A paint software.
- An internet browser.
- A music player (wav, mp3, m4a and web radio).
- An oscilloscope.
- A periodic table.
- A simple piano.
- A pong game.
- A simon game.
- A tinybasic emulator.

It's [up to you](#develop) to make this list longer 😉.

## ❓ About

### 🖋️ Credits

You can find the dependencies and reused code [here](https://xila.alixfaitgrr.fr/en/latest/Credits.html "Credits").

### 🧾 License

This software is under [M.I.T. license](https://alix-anneraud.mit-license.org/ "M.I.T. licence").

Alix ANNERAUD