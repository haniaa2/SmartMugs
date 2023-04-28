const int sensorPin = A5; // Change this line to use A5 instead of A0
const float supplyVoltage =3.3;
const float seriesResistor = 10000;
const float thermistorNominalResistance = 10000;
const float temperatureNominal = 25;
const float bCoefficient = 3950;
const float calibrationOffset = 0.0; // Replace 0.0 with your calculated offset, if needed

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); 
  float voltage = sensorValue * (supplyVoltage / 1023.0);
  float resistance = seriesResistor / ((supplyVoltage / voltage) - 1);

  float temperature = resistance / thermistorNominalResistance;
  temperature = log(temperature);
  temperature /= bCoefficient;
  temperature += 1.0 / (temperatureNominal + 273.15);
  temperature = 1.0 / temperature;
  temperature -= 273.15;

  // Apply the calibration offset
  temperature += calibrationOffset;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");



  delay(1000);
}
