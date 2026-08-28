# stmdevboard
# Why I made it
Last year, I made an STM board but I had some trouble with programming and soldering the board, and it didn't end up working. Thus, I want to actually make a proper STM32 board this time instead of rushing into an entire custom board. This is meant to be for me to get more experienced with STM MCU development, both on the hardware and software side. Overall, this is just a devboard in which you can plug and play wires into in order to program the STM, and to connect other boards to it as well.

# Assembly Instructions

1) Solder PCB

# Demo Video


https://github.com/user-attachments/assets/0cf9e99f-254d-49b3-bc89-e1d1af4b3d00



# Pictures
<img width="654" height="723" alt="image" src="https://github.com/user-attachments/assets/4869206b-2d32-494e-9038-28b59c48175f" />

<img width="630" height="536" alt="image" src="https://github.com/user-attachments/assets/47874806-8040-46f4-bc62-332242db287f" />
<img width="1016" height="664" alt="image" src="https://github.com/user-attachments/assets/73aa78d2-185a-4525-9933-0b4bfc9ce5a6" />

<img width="3024" height="4032" alt="IMG_8354" src="https://github.com/user-attachments/assets/f47be236-edc2-4313-bfb8-c479f7308573" />
<img width="3024" height="4032" alt="IMG_8353" src="https://github.com/user-attachments/assets/b7427efc-1c1e-4139-b073-8c2e0893b3fe" />
<img width="3024" height="4032" alt="IMG_8351" src="https://github.com/user-attachments/assets/2fe82c96-92b7-4d7f-b941-75f9074295f6" />
<img width="3024" height="4032" alt="IMG_8349" src="https://github.com/user-attachments/assets/948c16f1-a347-42b8-8648-b0bd91b93d6f" />
<img width="3024" height="4032" alt="IMG_8350" src="https://github.com/user-attachments/assets/926a63c4-21b6-41f9-9486-6fcd2458e869" />
<img width="4284" height="5712" alt="IMG_8352" src="https://github.com/user-attachments/assets/26c00551-8ed1-4a7b-ad0f-de3f9b0a3dac" />


# BOM

| Item | Purpose | Qty | Cost | Link |
| :--- | :--- | :---: | :---: | :--- |
| **100n capacitor** | Decoupling / Filtering | 20 | $0.68 | [DigiKey](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL21B104KACNNNC/3886757) |
| **4.7u capacitor** | Bulk Storage / VCAP | 10 | $0.60 | [DigiKey](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL21A475KQFNNNG/3894444) |
| **1u capacitor** | Decoupling / Filtering | 10 | $0.49 | [DigiKey](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL21B105KAFNNNE/3886724) |
| **18p capacitor** | Crystal Load | 10 | $0.49 | [DigiKey](https://www.digikey.com/en/products/detail/kemet/C0805C180M3HACTU/7949065) |
| **USB Conn** | USB-C Port | 2 | $1.60 | [DigiKey](https://www.digikey.com/en/products/detail/gct/USB4105-GF-A/11198441) |
| **2x3 pin conn** | SWD Debug Header | 2 | $0.20 | [DigiKey](https://www.digikey.com/en/products/detail/same-sky-formerly-cui-devices/SSK03-MPH-254-B3/28772172) |
| **1x12 pin conn** | IO Expansion | 4 | $0.76 | [DigiKey](https://www.digikey.com/en/products/detail/same-sky-formerly-cui-devices/SSK01-MPH-254-A12/28772231) |
| **5.1k resistor** | USB CC Pull-down | 10 | $0.21 | [DigiKey](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/RMCF0603FT5K10/1760908) |
| **10k resistor** | Boot/Reset Config | 10 | $0.25 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC0603FR-0710KL/726880) |
| **2.7k resistor** | I2C Pull-up | 10 | $0.21 | [DigiKey](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/RMCF0603FT2K70/1761047) |
| **NCP1117** | ldo | 2 | $0.76 | [DigiKey](https://www.digikey.com/en/products/detail/onsemi/NCP1117LPST33T3G/2194024) |
| **TVS1400** | tvs diode | 2 | $2.20 | [DigiKey](https://www.digikey.com/en/products/detail/texas-instruments/TVS1400DRVR/8566097?s=N4IgTCBcDaIC4DcDOBGALABgwEwE4JAF0BfIA) |
| **STM32411RCT** | mcu | 2 | $13.94 | [DigiKey](https://www.digikey.com/en/products/detail/stmicroelectronics/STM32F411RCT6/4935721) |
| **KMR211G FS** | Reset / Boot Button | 2 | $1.34 | [DigiKey](https://www.digikey.com/en/products/detail/c-k/KMR211G-LFS/550475) |
| **ABM8G-25.000MHZ-B4Y-T** | 25 MHz HSE Clock | 2 | $1.64 | [DigiKey](https://www.digikey.com/en/products/detail/abracon-llc/ABM8G-25-000MHZ-B4Y-T/2218043?gclsrc=aw.ds&gad_source=1&gad_campaignid=17922795960&gclid=Cj0KCQjwjb3SBhDgARIsAMKiWzg1JLbqhfEGki8o8Jwp41Jk8wADeIN8Ymt2y0BRtB40OBOowfe_kLgaAh4yEALw_wcB) |
| **PCB + STENCIL** | PCBing | 1 | $11 | jlcpcb.com |
Shipping: $18

**Total Estimated Cost:** $54.37
