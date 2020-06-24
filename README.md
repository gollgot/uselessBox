# Useless Box
Here you can find a whole tutorial to create your own useless box using Arduino board ! 

## Prerequisites

- 1 Arduino Uno
- 1 Servo motor (not DC motor)
- 2 Toggle switch button
- 1 1k Ohms resistor (more or less)
- 1 9V battery (to be autonome)
- Some wires
- 1 Breadboard
- Some piece of wood for the box

Optional stuff (for leds indicator)
- 2 More 1k Ohms resistor (more or less)
- 1 Red led
- 1 green led

## Schema
![UselessBox Schema](https://github.com/gollgot/uselessBox/blob/master/schema/useless_box_schema.png "UselessBox Schema")

We'll have a 9V battery that will power the circuit. This battery will be connected to the arduino Vin pin and the GND, and pass by a toggle switch button. This way, we'll be able to switch on or off the box.

We'll also have a servo motor that will be plugged into the 9th PWN pin of the Arduino. This motor will be activated when we'll toggle his toggle switch button.

The last part is optional, this is the led part. We can add some information light like the green led that will inform us that the board is power on and ready to run. The second led is the red one that will inform us that the motor is running.

Don't hesitate to look at crefully the schema and adapt it for your need if you want ! 
