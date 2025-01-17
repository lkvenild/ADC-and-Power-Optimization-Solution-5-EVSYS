INTRODUCTION
This example is the solution for Assignment 5: ADC EVSYS from the ADC and Power Optimization on tinyAVR 0- and 1-series, and megaAVR 0-series training manual. In this assignment, the RTC overflow event signal, instead of the RTC overflow interrupt, will be used to trigger an ADC conversion. This will further reduce the power consumption as this approach avoids RTC interrupt triggering CPU when the device is in SLEEP STANDBY mode.

The application code is written for ATtiny817 Xplained Pro, but is compatible for all devices in the tinyAVR 0-/1-series and megaAVR 0-series.

PERIPHERALS INVOLVED
Analog to Digital Converter (ADC)
Universal Synchronous and Asynchronous Receiver and Transmitter (USART)
Real Time Counter (RTC)
CPUINIT
SLPCTRL
EVENT SYSTEM
RELATED DOCUMENTS / APPLICATION NOTES
This application is described in the following application notes:

ADC and Power Optimization on tinyAVR 0- and 1-series, and megaAVR 0-series
SUPPORTED EVALUATION KIT
ATtiny817 Xplained Pro
INTERFACE SETTINGS
CPU CLK
5MHz
ADC
8-bit resolution
ADC input pin 10
Reference selection (VREF): VDD
PRESCALAER: 8
WINCM: Below Window
WINHT: 0
WINLT: 80
WCMP Interrupt enabled
USART
No parity
8-bit character size
1 stop bit
96000 baud-rate
PB2 set as TX transmission pin
RTC
PRESCALAER: 32
PER: 512
CPUINIT

SLPCTRL

EVENT SYSTEM
ASYNCHCH0: Real Time Counter overflow
ASYNCUSER1: Asynchronous Event Channel 0
Potmeter
Connect potmeter to the analog input pin, PB1, and VDD and GND
RUNNING THE DEMO
Press DOWNLOAD SELECTED EXAMPLE in the example browser, or click EXPORT PROJECT -> DOWNLOAD PACK from within START and save the .atzip file
Import .atzip file into Atmel Studio 7, by clicking File->Import->Atmel Start Project.
Build the application and program the device.
Press Start without debugging or use CTRL+ALT+F5 hotkeys to run the application.
The ADC data is continuously printed to the terminal once every 500ms.
By rotating the potmeter knob, the voltage input to ADC input pin changes. And the ADC data to Data Visualizer changes accordingly, in range from 0 to 0xFF.
The current consumption of this assignment is shown in power analysis window. It has been further reduced from the previous assignment.