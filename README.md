# SATS Rocket Telemetry

Rocket Telemetry platform for measuring in flight data. 

This project is for the Finnish Space Research Society [SATS]. A telemetry platform to record live launch data from rockets.

The data to be recorded from sensors are
- [GPS] 
- [Barometric data for altitude]
- [Inertial Measurement Unit]
- [Pitot Pressure]
- [Accelerometer]
- [Black box]


# The Brains

I am using two adafruit [Feather] M0 LoRa 900MHz microcontroller. One for the Reciever (Rx) and the other for the Transmitter (Tx).



# The Apps

- RFM9x Server code src/RFMx/RFM9x.ino
- RFM9x Client code src/RFM9x_client/RFM9x_client.ino
- main telemetry app in development. The plan is this code will initiate the peripheral code and compile the sent message packet.


















[SATS]: 	<http://www.sats-saff.fi/>
[Inertial Measurement Unit]: 	<https://en.wikipedia.org/wiki/Inertial_measurement_unit>
[Barometric data for altitude]: 	<https://en.wikipedia.org/wiki/Barometer>
[GPS]:	<https://en.wikipedia.org/wiki/Global_Positioning_System>
[Pitot Pressure]:	<https://en.wikipedia.org/wiki/Pitot_pressure>	
[Accelerometer]:      <https://en.wikipedia.org/wiki/Accelerometer>
[Black box]:	<https://en.wikipedia.org/wiki/Black_box>
[Feather]:  <https://www.adafruit.com/product/3178>
