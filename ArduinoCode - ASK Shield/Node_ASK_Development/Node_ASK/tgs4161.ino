/* ASK Shield - Tgs4142 */

int getTgs4161(int tgsPin, int sensorReadings) { 
  int figaroCO2Val = 0;
  digitalWrite(figarocircuit, LOW); // turn on sensing VCC
  digitalWrite(figaroheater, LOW); // disconect R12 of the circuit (only for tgs2442)
  figaroCO2Val = getAverage(tgsPin, sensorReadings, 1); // take average measurement here
  return figaroCO2Val;
}