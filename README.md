# Mega Zero based on Marlin 1.1.9.1
Fully tested source code and firmware build ready for upload to your ANYCUBIC Mega Zero printer.

## Why I did it?
I noticed that my ANYCUBIC Mega Zero printer was behaving strangely: it finishes printing without a "beep" signal, it leaves an abandoned file on the SD card and after finishing printing and turning the printer back on, it asks whether to continue printing. It shouldn't be like that. In addition, I noticed that I do not have access to many functions. That's why I decided to revise the V0.0.4 firmware stored in the printer.

## What have I done?
I decided to use the original Marlin 1.1.9.1 code from this site: https://marlinfw.org/docs/basics/install.html, because it is best for 8-bit ATmega 1284P microchip used on this printer board. After careful analyze source code, I kept settings related to hardware. By the way, I corrected a few things. Next, I compiled prepared codes to `.hex` file and sent on my printer. After the first launch, I saw a new menu with many new functions. Then I made a few test prints.

## What has changed?
Due to the numerous changes it is difficult to list all changes. You will best see all the changes here: https://github.com/NOVAXIM/MEGA_ZERO/compare.

### The most important changes:
1. disabled cold extrusion
2. calibrated value of extruder axis steps-per-unit
3. settings for a film pressure probe (0,0)
4. disabled inactive extruder
5. corrected position X and Y after homing
6. updated auto-calculation of positioning according to relation to probe position
7. enabled M503 code
8. enabled feedback on EEPROM commands
9. updated temperature and fan speed values
10. added Korean language
11. defined english as default language
12. increased thermal protection period and decreased thermal hysteresis
13. enabled ARC support
14. raised version number to V0.0.5
15. changed displaying information in "Printer Info" menu
16. `_Bootscreen.h` was matched
17. `_Statusscreen.h` was matched
18. lots of new options added to the printer menu

#### Notes:
re 1. In order for the extruder motor to start working, the extractor must be heated over 170° C.\
re 2. If you give order to extrude 10 cm of filaments, the printer will output 10 cm of filament. No less and no more.\
re 7. You can write (and load) different G-code values in(from) EEPROM memory.\
re 8. Required by [Marlin EEPROM Editor](https://plugins.octoprint.org/plugins/eeprom_marlin/). This is an excellent plugin for OctoPrint. Thanks to the authors!

## How to upload firmware to printer?
Of course, you can to use the [Arduino IDE](https://www.arduino.cc/en/software) to compile the source code contained in `Marlin` directory from full source package and to send this compilation to your printer. However, for many people it is too difficult or they just don't have a suitable Sanguino board in the Arduino library. Therefore, with every release I will add a `.hex` file, ready to be sent to the printer.\
Easiest way to upload the firmware to printer is to use [OctoPrint](https://octoprint.org/) with the [Firmware Updater](https://plugins.octoprint.org/plugins/firmwareupdater/) plugin. Upload firmware process takes about 40 seconds. **Be careful not to lose electricity during this process!**

## Last word
It took me a lot of time and effort. I tried to do everything very carefully. I'm not giving you the prototype. It works great on my printer. If only you can, please support me with any donation with [PayPal](https://www.paypal.com/donate?business=UYAGJ7MSRGKJS&item_name=Mega+Zero+firmware+support&currency_code=USD). Thanks to your kindness, this project will be continued.

[<p align="center"><img width="25%" height="25%" src="https://github.com/NOVAXIM/Mega-Zero-based-on-Marlin-1.1.9.1/blob/master/Donate-with-PayPal.png?raw=true"></p>](https://www.paypal.com/donate?business=UYAGJ7MSRGKJS&item_name=Mega+Zero+firmware+support&currency_code=USD)
**Enjoy yourself with new improved printer!**