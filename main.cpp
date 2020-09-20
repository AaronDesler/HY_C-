#include <iostream>
#include "./hw1.h"

int main() {
	int i = 0;
	while (1) {

		cout << "Enter Homework#" << endl << "Terminate with 0" << endl;
		cin >> i;
		cout << string(100, '\n');

		switch (i) {
		case 0:
			return 0;
		case 1:
			HW1 hw;
			hw.init(i); //make constructor
			break;

		default:
			break;
		}
	}
}