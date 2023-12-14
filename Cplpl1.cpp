#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// int, short, long, long long
	// double, float, long double
	// bool; char
	//auto keyword for types?



	double x = 10;
	int y = x++;
	x = 10;
	int z = ++x;
	cout << y << endl
			  << z << endl;
	//stream insertion operator

	double divide = x / y;
	cout << divide;
	z = (x + 10) / (y * 3);
	cout << "z = " << z << endl;

	double income = 95000;
	const double stateTaxRate = .04;
	int stateTax = income * stateTaxRate;

	const double countyTAxRate = .04;
	int countyTax = income * countyTAxRate;

	double totalTax = stateTax + countyTax;

	cout << "Enter a value: ";
	//stream extraction operator
	int value;
	int value2;
	cin >> value >> value2;
	cout << value + value2;
	cout << "fahrenheit ";
	int fahrenheit;
	cin >> fahrenheit;
	double celsius = (fahrenheit - 32) / 1.8;
	cout << celsius << endl;

	double result = floor(1.2);
	result = pow(2, 3);
	cout << "Enter radius ";
		double radius;
	cin >> radius;
	const double PI = 3.14;
	double area = pow(radius, 2) * PI;
	cout << area;

	float interest = 3.67F; //or 3.67f
	long fileSize = 90000L;
	char a = 'a';
	bool isEligible = true;

	int numberEmpty {  };

	//decimal, binary, hexa
	//"unsigned" keyword
	int red = 0b11111111;
	int blue = 0xff;
	int big = 1'000'000;
	//short another = { big };

	srand(time(nullptr));
	int ra = rand() % 10;
	cout << ra;

	return 0;
}