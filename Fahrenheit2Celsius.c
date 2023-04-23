/*

Progam to convert fahrenheit to celsius

Alex Maso  4/10/22
*/

#include <iostream>

double fahrenheit2Celsius(double fahrenheit) {

	double celsius;

	celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
	return celsius;
}

int main() {

	double fahrenheit;
	std::cout << "Input temperature in degrees fahrenheit: " << std::endl;
	std::cin >> fahrenheit;
	std::cout << "Temperature in celsius: " << fahrenheit2Celsius(fahrenheit) << std::endl;
}
