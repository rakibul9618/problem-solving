#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit_temperature);
double fahrenheit_to_kelvin(double fahrenheit_temperature);

int main()
{

  double fahrenheit_temperature, celsius_temperature, kelvin_temperature;

  cout << "Enter the fahrenheit temperature: ";
  cin >> fahrenheit_temperature;
  cout << endl;

  celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
  kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

  cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";

  return 0;
}

double fahrenheit_to_celsius(double fahrenheit_temperature)
{
  return round(((fahrenheit_temperature - 32) * 5) / 9);
}

double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
  return round(((fahrenheit_temperature - 32) * 5) / 9 + 273);
}