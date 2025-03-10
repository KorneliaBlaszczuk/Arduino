# Arduino

## ENG

### dioda_1

Simple programme to turn diode on.

### dioda_2

Programme turining diode on and off with certain delay.

### dioda_3

Programme implementing system with two diodes that are on alternately.

### fotorezystor_1

Programme with photoresistor and diode. The light is turned on in the dark, and off when light falls on the photoresistor.

### fotorezystor_2

The program extends the first version with a potentiometer. thanks to it you can set your own threshold at which the diode lights up.

### licznik

Counter.

## okreslanie_roznicy_natezenia_swiatla

The design uses two photoresistors as separate voltage dividers, placed on the far sides of the contact plate. To increase the precision of the measurement, the sensors are tilted slightly outward.

The microcontroller reads the voltage values from the two photoresistors and displays them in the terminal. We observe how the readings change when we cover the sensors with our hand (creating a shadow) or point a flashlight at them.

### przycisk_dioda

Programme using button and diode. When we press button, the diode is switched on.

### sygnalizacja

Small traffic light project.

### uart_1

Notification using asynchronous outputs notifying the passage of 5s.

### uart_2

The project aims to create an alarm system that uses a button and LEDs to indicate the status of a closed window or door.

Depending on the state of the button (open window or closed window), the system lights up the corresponding LEDs:

Green LED - the window is closed (button pressed).
Red LED - the window is open (the button is not pressed). In addition, in the case of an open window, the terminal's alarm information is displayed.

### uart_3

Takes the name and displays the message with it.

### uart_diody

The project involves controlling two LEDs (green and red) using serial communication with a computer. The LEDs can be managed by sending appropriate commands via Serial Monitor in the Arduino IDE environment. The program receives the commands and based on them turns the corresponding LED on or off.

### woltomierz

Voltmeter model.

### zakresy_napiecia_diody

The project aims to control five LEDs depending on the value read from a potentiometer connected to the analog input (e.g. A5) of the microcontroller. This value is then scaled, and the corresponding LED is lit depending on the range of values.
