#include <EEPROM.h>
#include <SoftwareSerial.h>

SoftwareSerial BT_Serial(2, 3);

#define Relay1 4
#define Relay2 5
#define Relay3 6
#define Relay4 7

char bt_data;
int load1, load2, load3, load4;

void setup() {
  Serial.begin(9600);
  BT_Serial.begin(9600);

  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);

  // Initialize relays to default state (HIGH)
  digitalWrite(Relay1, HIGH);
  digitalWrite(Relay2, HIGH);
  digitalWrite(Relay3, HIGH);
  digitalWrite(Relay4, HIGH);

  // Read values from EEPROM
  load1 = EEPROM.read(1);
  load2 = EEPROM.read(2);
  load3 = EEPROM.read(3);
  load4 = EEPROM.read(4);

  delay(500);
}

void loop() {
  if (BT_Serial.available() > 0) {
    bt_data = BT_Serial.read();

    // Control commands received from Bluetooth
    if (bt_data == 'A') { load1 = 0; EEPROM.write(1, load1); }
    if (bt_data == 'a') { load1 = 1; EEPROM.write(1, load1); }

    if (bt_data == 'B') { load2 = 0; EEPROM.write(2, load2); }
    if (bt_data == 'b') { load2 = 1; EEPROM.write(2, load2); }

    if (bt_data == 'C') { load3 = 0; EEPROM.write(3, load3); }
    if (bt_data == 'c') { load3 = 1; EEPROM.write(3, load3); }

    if (bt_data == 'D') { load4 = 0; EEPROM.write(4, load4); }
    if (bt_data == 'd') { load4 = 1; EEPROM.write(4, load4); }
  }

  // Power is always on, so we only need to control the relays
  digitalWrite(Relay1, load1);
  digitalWrite(Relay2, load2);
  digitalWrite(Relay3, load3);
  digitalWrite(Relay4, load4);

  // Send status over Bluetooth
  BT_Serial.print("1;"); // Power is always on (1)
  BT_Serial.print(load1);
  BT_Serial.print(";");
  BT_Serial.print(load2);
  BT_Serial.print(";");
  BT_Serial.print(load3);
  BT_Serial.print(";");
  BT_Serial.print(load4);
  BT_Serial.println(";");

  delay(500);
}
