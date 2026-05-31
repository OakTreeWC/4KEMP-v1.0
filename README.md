<img width="3211" height="2408" alt="image" src="https://github.com/user-attachments/assets/b0ad0024-4b8c-4e43-8275-0964c34fed88" />

# 4KEMP v1.0

### 4 | the number four
### K | k
### E | ey
### M | macro
### P | pad

4KEMP really just a mini macro pad. Nothing special about it. Can be used to play music games and stuff.
This project was made to help my friend learn how to use KiCad and Fusion360, ~~but then became a [hackclub blueprint](https://blueprint.hackclub.com) project for me as well.~~
To use my project, one can use [vial](https://get.vial.today) to change what each key does, and then use it to run functions on their computer.


<img width="2050" height="1549" alt="Screenshot 2026-02-07 201745" src="https://github.com/user-attachments/assets/5c03db85-8669-430c-8279-8874601343cf" />
<img width="2329" height="1378" alt="Screenshot 2026-02-07 201758" src="https://github.com/user-attachments/assets/b207dfce-97b1-4b2e-a93b-1fbe85ebda34" />
<img width="2397" height="1064" alt="Screenshot 2026-02-07 200537" src="https://github.com/user-attachments/assets/a16d5cbe-ebab-4532-87b2-42a9aa284d60" />

## Components
![IMG_2629](https://stasis.hackclub-assets.com/images/1777872872270-271x9b.jpeg)

## PCB
pcbs are pretty kewl.
also you just lost the game lol.
### Top
![IMG_2636](https://stasis.hackclub-assets.com/images/1777873154416-5weskb.jpeg)

### Bottom
![IMG_2637](https://stasis.hackclub-assets.com/images/1777873162147-mckge3.jpeg)


## Soldering
I don't have any documentation from when I was actually doing it, but I do have pics of the final product.
### Top
![IMG_2629cropped](https://stasis.hackclub-assets.com/images/1777872823409-xcettn.jpeg)

### Bottom
![IMG_2630](https://stasis.hackclub-assets.com/images/1777872834490-g8n89s.jpeg)

A lot of my solder joints could be better, it is very inconsistent, and it doesn't look great, but I'm still happy with it.

## Case
I made a few mistakes, and since I neglected to even try to print it at home first, I let them slip, but whatever.

The upper case was 3d printed by JLC 3DP at my own expense in gray resin, which I honestly love the look and feel of. 

However, the lower case is where all the mistakes arose. Stupidity on my part caused these mistakes, but oh well. Because I added neopixels on the bottom and wanted to actually use them, I ordered my lower case in translucent resin. Unfortunately though, I didn't realize that this resin was super vulnerable to warping and had horrible dimensional accuracy. 

When I received the part, I quickly realized how bad it was. Therefore, I attempted to undo the warping with heat and pressure. I ended up pushing it too far though, resulting in a large crack in the base.

Additionally, the poor accuracy caused the top left corner of my macropad to be misaligned. It isn't too bad, but its definitely there.

### Issues

Thin case causing MASSIVE warping.

![IMG_2635](https://stasis.hackclub-assets.com/images/1777873286048-ionl8i.jpeg)

Attempt to fix warping causing large crack.

![IMG_2628](https://stasis.hackclub-assets.com/images/1777873359366-dlk4wx.jpeg)

Excessive clearance around USB port.

![IMG_2632](https://stasis.hackclub-assets.com/images/1777873383548-yovitt.jpeg)

Poor dimensional accuracy of lower case causing horrific misalignment.

![IMG_2633](https://stasis.hackclub-assets.com/images/1777873445251-b5e772.jpeg)

## Assembly

Assembly was very straightforward. I first added threaded inserts into my lower case, then put my pcb into the upper case and installed all the switches. After that, I just put the entire upper case/pcb assembly into the lower case, tightened the three M3 bolts, and I was done.

![IMG_2626](https://stasis.hackclub-assets.com/images/1777874003449-2ry8r5.jpeg)

![IMG_2627](https://stasis.hackclub-assets.com/images/1777874003378-rasncw.jpeg)

## Bill of Materials
|Item                  |Description                                                                                  |Qty.|Unit Price (USD)|Total Price  (USD)|URL                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |Running Total (USD + Tax)|
|----------------------|---------------------------------------------------------------------------------------------|----|----------------|------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------|
|XIAO RP2040    |ARM® Cortex®-M0+ MCU 32-Bit Embedded Evaluation Board                                        |1   |$4.68           |$4.68             |https://www.digikey.com/en/products/detail/seeed-technology-co-ltd/102010428/14672129                                                                                                                                                                                                                                                                                                                                                                                                                       |$5.16                    |
|Rotary Encoder        |Rotary Encoder Incremental 24 Quadrature (Incremental) Horizontal                            |1   |$1.72           |$1.72             |https://www.digikey.com/en/products/detail/bourns-inc/PEC12R-4020F-S0024/4699271                                                                                                                                                                                                                                                                                                                                                                                                                            |$7.06                    |
|Reverse Neopixels     |Addressable Lighting - 10 LED Discrete Red, Green, Blue (RGB)                                |1   |$2.95           |$2.95             |https://www.digikey.com/en/products/detail/adafruit-industries-llc/4960/14302512                                                                                                                                                                                                                                                                                                                                                                                                                            |$10.31                   |
|Backlight Neopixels   |Addressable Lighting Neopixel 10 LED Discrete Serial (Shift Register) Red, Green, Blue (RGB) |1   |$4.50           |$4.50             |https://www.digikey.com/en/products/detail/adafruit-industries-llc/1655/5154679                                                                                                                                                                                                                                                                                                                                                                                                                             |$15.27                   |
|Akko Keyboard Switches|Akko V3 Silver Pro Keyboard Switch 5-Pin Linear Pre-Lubed Switches (45pcs)                   |1   |$16.99          |$16.99            |https://www.amazon.com/dp/B0CDW6W2P5?ref=cm_sw_r_cso_cp_apin_dp_HSMA9S87491DNTP9KS93&ref_=cm_sw_r_cso_cp_apin_dp_HSMA9S87491DNTP9KS93&social_share=cm_sw_r_cso_cp_apin_dp_HSMA9S87491DNTP9KS93&th=1                                                                                                                                                                                                                                                                                                         |$34.00                   |
|Schottky Diodes       |Diode 30 V 200mA Surface Mount 0603                                                          |4   |$0.17           |$0.68             |https://www.digikey.com/en/products/detail/taiwan-semiconductor-corporation/TSS54U-RGG/7360711                                                                                                                                                                                                                                                                                                                                                                                                              |$34.75                   |
|Resistor              |For Neopixel Data Line. 379 Ohms ±0.1% 0.1W, 1/10W Chip Resistor 0603 (1608 Metric)          |1   |$0.12           |$0.12             |https://www.digikey.com/en/products/detail/koa-speer-electronics-inc/RN73R1JTTD3790B25/10016392                                                                                                                                                                                                                                                                                                                                                                                                             |$34.88                   |
|PCB                   |PCB Manufactured by JLCPCB. White, 1.6mm, HASL w/ lead                                       |5   |$0.40           |$2.00             |https://jlcpcb.com                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |$37.09                   |
|Lower Case            |Case Manufactured by JLC3DP. 8001 Resin, Translucent                                         |1   |$2.19           |$2.19             |https://jlc3dp.com                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |$39.50                   |
|Upper Case            |Case Manufactured by JLCPCB. Black Resin                                                     |1   |$2.43           |$2.43             |https://jlc3dp.com                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |$42.18                   |
|Keycaps               |DSA Keycaps White 24pcs                                                                      |1   |$8.99           |$8.99             |www.amazon.com/Mechkeeb-Profile-Switches-Keyboard-Replacement/dp/B0BWDTBF1L                                                                                                                                                                                                                                                                                                                                                                                                                                 |$52.09                   |
|Rotary Encoder Knob   |Aluminum Rotary Encoder Knob 2pcs                                                            |1   |$8.99           |$8.99             |www.amazon.com/Szliyands-Aluminum-Electronic-Potentiometer-Knob，Switch/dp/B099PX52LW                                                                                                                                                                                                                                                                                                                                                                                                                        |$62.00                   |
|Threaded Inserts      |M3 Threaded Inserts 152pcs                                                                   |1   |$6.99           |$6.99             |https://www.amazon.com/Vibit-Threaded-Soldering-Printing-Components/dp/B0FWWW8VP1/ref=sr_1_3                                                                                                                                                                                                                                                                                                                                                                                                                |$69.71                   |
|Machine Screws        |M3 Screw Kit                                                                                 |1   |$9.99           |$9.99             |https://www.amazon.com/Fgruh-750PCS-Assortment-Washers-Assorted/dp/B0FGV5FCBN/ref=sr_1_3?crid=2UNAGQJ7TRSPF&dib=eyJ2IjoiMSJ9.T3HWVrCMzkskj4FDtvfCYjAhiKf2eIXJNrTn39_bFjBR1J806O1NskeC_TrNL2d-0_rv4c3tJ2WiIqImzYRsNdlKskiq_KPhw2MnuLHrr7ROWvp0aYAezCjHHAfx-j9R1FgRYMZR6z3j6DWbe_FTcKSI5cNCdqJEDhLnH9UyM0u5ed6Of07kpRqKBp5WkTLn8qUsW4GWJz8Y-hXZX6mGeCbl1zGSf24ox8LtrZCSgZs.QTs0QwFb8cDs_wXvUWLPa0GUjuv97zXGykg1SJQzuNE&dib_tag=se&keywords=m3+screw+set&qid=1771132139&sprefix=m3+screw+set%2Caps%2C211&sr=8-3|$80.72                   |
|Digikey Shipping      |                                                                                             |1   |$4.99           |$4.99             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |$86.22                   |
|JLC Shipping          |                                                                                             |1   |$8.93           |$8.93             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |$96.07                   |
