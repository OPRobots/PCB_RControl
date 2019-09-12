/*#include <SoftwareSerial.h>

  SoftwareSerial mySerial(10, 11); // RX, TX

  void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(57600);
  mySerial.println("Hello, world?");
  }

  void loop() { // run over and over
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
  }

  /*/
#include "FlySkyIBus.h"
#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 6);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(115200);
  IBus.begin(mySerial);
}

void loop()
{
  IBus.loop();
  // mySerial.println("hola");
  // mySerial.println(IBus.readChannel(0), DEC);
  Serial.print(IBus.readChannel(0), DEC);
  Serial.print(" ");
  Serial.print(IBus.readChannel(1), DEC);
  Serial.print(" ");
  Serial.print(IBus.readChannel(2), DEC);
  Serial.print(" ");
  Serial.print(IBus.readChannel(3), DEC);
  Serial.print(" ");
  Serial.print(IBus.readChannel(4), DEC);
  Serial.print(" ");
  Serial.println(IBus.readChannel(5), DEC);
}
