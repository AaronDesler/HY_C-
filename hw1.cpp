#include "hw1.h"
//using namespace HW1;

void HW1::bools() {
	cout << "Exercise 1: " << endl;
	int x = -5;
	int power = 1024;
	int y = 7;
	float item = 1.5;
	const float MIN = -12.0;
	const char DAY = 'M';
	int num = 12;
	const int MAX = 1024;
	int Sens = 12;

	cout << ((x > y) && !y) << endl;
	cout << ((item > MIN) || (DAY != 'M')) << endl;
	cout << (((num * 128) < power) && y) << endl;
	cout << ((!(power != MAX)) && (Sens == num)) << endl;
	cout << (((y + x) < num) || (DAY == 'M')) << endl;
	cout << ((Sens * (!y)) != 0) << endl;
	cout << ((!x || y) && (!y || x)) << endl;
}

void HW1::maximum() {
	cout << "Exercise 2: " << endl;

	int i1, i2, i3;
	string stringbuilder[3] = { "first ", "second ", "third " };

	cout << "Enter " << stringbuilder[0] << "integer: ";
	cin >> i1;
	cout << "Enter " << stringbuilder[1] << "integer: ";
	cin >> i2;
	cout << "Enter " << stringbuilder[2] << "integer: ";
	cin >> i3;
	cout << endl;

	cout << "The biggest input value is " << max(i1, max(i2, i3));
}

void HW1::cumulativeSum() {
	cout << "Exercise 3: " << endl;

	int newInt = 0;
	int cumulativeValue = 0;

	do {
		cout << "Enter an integer." << endl << "To terminate enter 0." << endl << "Integer: ";
		cin >> newInt;
		cumulativeValue += newInt;
		cout << "Cumulative value of inputs: " << cumulativeValue << endl;
		cout << endl;
	} while (newInt);

	cout << "Terminated." << endl << "Final value: " << cumulativeValue << endl;
}

void HW1::gcd() {
	cout << "Exercise 4: " << endl;

	int a = 0, b = 0, gcd = 0;

	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;

	while (1) {
		if (a < b) {
			int swap = a;
			a = b;
			b = swap;
		}
		int r = a % b;
		if (r) {
			a = b;
			b = r;
		}
		else {
			gcd = b;
			break;
		}
	}

	cout << "The GCD is " << gcd;
}

int HW1::init(int j) {
	int i = 0;
	while (1) {
		cout << string(100, '\n');
		cout << "Homework #" << j << endl;
		cout << "For 'Bools' enter 1" << endl << "For 'Maximum' enter 2" << endl << "For 'Cumulative Sum' enter 3" << endl << "For 'GCD' enter 4" << endl << "Terminate with 0" << endl;
		cin >> i;
		cout << string(100, '\n');
		switch (i) {
		case 0:
			return 0;
		case 1:
			bools();
			break;
		case 2:
			maximum();
			break;
		case 3:
			cumulativeSum();
			break;
		case 4:
			gcd();
			break;
		default:
			break;
		}
	}
}