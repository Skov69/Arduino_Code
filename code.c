float MeasureTemp() {
  float t = dht.readTemperature();
  return t;
}

float MeasureHumid() {
  float t = dht.readHumidity();
  return t;
}
