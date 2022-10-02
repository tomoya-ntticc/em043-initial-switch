# Initial switch for emergencies! 043

- [Equipment](#equipment)
  - [Circuit](#circuit)
- [Setup](#setup)
  - [1. Connect cables to reset pin](#1-connect-cables-to-reset-pin)
  - [2. Connect cables to signal pin](#2-connect-cables-to-signal-pin)
  - [3. Connect to power supply](#3-connect-to-power-supply)
- [Run](#run)
  - [1. On power supply](#1-on-power-supply)
  - [2. Change mode with Switch](#2-change-mode-with-switch)
- [Shutdown](#shutdown)
  - [1. Off power supply](#1-off-power-supply)

## Equipment

- mini USB-B (power supply, and PC connection)
- switch (alternate)
- cables
  - to reset pin: 24 cables
  - to signal pin: 2 cables

|![IMG_1681](https://user-images.githubusercontent.com/94507251/193446620-a0290bc6-b81d-4a80-bb49-4828c043b505.png)|
|---|

### Circuit

|![IMG_1679](https://user-images.githubusercontent.com/94507251/193446617-b4d01efc-4ee2-4511-b555-e3148b9f9e90.png)|![IMG_1680](https://user-images.githubusercontent.com/94507251/193446618-c1feca54-9372-407c-8cde-96b6ab393e6b.png)|
|---|---|

## Setup

### 1. Connect cables to reset pin

|cable color|Pin|
|---|---|
|white|RST|
|Black|GND|

|cable No.|LED panel|
|---|---|
|1|A, up|
|2|A, down|
|3|B, up|
|4|B, down|
|:|:|
|23|L, up|
|24|L, down|

|![IMG_1674](https://user-images.githubusercontent.com/94507251/193446584-8525de71-fcdb-4213-978e-7225afd50e00.png)|
|---|

### 2. Connect cables to signal pin

|cable|LED panel|
|---|---|
|1-A, white cable|A, up, white cable|
|1-B, black cable|A, up, black cable|
|24-A, white cable|L, down, lower pin|
|24-B, black cable|L, down, upper pin|

|1-A,B|24-A,B|
|---|---|
|![IMG_1678](https://user-images.githubusercontent.com/94507251/193446615-02d17d80-001a-4ff7-ad4b-7597cad49493.png)|![IMG_1677](https://user-images.githubusercontent.com/94507251/193446614-bacdc13c-1de7-494b-b675-f20ad598d3ff.png)|

### 3. Connect to power supply

## Run

### 1. On power supply

### 2. Change mode with Switch

|LED of switch|Mode|Action|
|---|---|---|
|ON|DEBUG|No.2~24 LED panels ON → No.24 panel send signal to No.1 → No.1 panel ON|
|OFF|RUN|Running work|

## Shutdown

### 1. Off power supply
