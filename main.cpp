#include <iostream>
#include "./hw1.h"
#include "./hw2.h"
#include "./hw3.h"

int main() {
	int i = 0;
	while (1) {

		cout << "Enter Homework#" << endl << "Terminate with 0" << endl;
		cin >> i;
		cout << string(3, '\n');

		switch (i) {
		case 0:
			return 0;
		case 1:
			HW1 hw1;
			hw1.init(i);
			break;
		case 2:
			HW2 hw2;
			hw2.init(i);
			break;
		case 3:
			HW3 hw3;
			hw3.init(i);
		default:
			break;
		}
	}
}