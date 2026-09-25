# BlinkLEDBlink

ESP32 DOIT DevKit V1 firmware that ramps an LED on GPIO 23.

`ledBrightness` software-PWMs the pin on a 10 ms cycle. `runLed` holds each brightness from 1 through 10 for 500 ms. The loop then waits one second and repeats.

Open this folder in PlatformIO and upload the `esp32doit-devkit-v1` environment.
