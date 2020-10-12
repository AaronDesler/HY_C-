#include "hw3.h"
using namespace std;


void HW3::count_chars(char text[]) {
	for (int i = 65, k = 0; i <= 90; i++, k++) {
		int m = 0;
		for (int j = 0; text[j] != -1; j++) {
			if (int(text[j]) == i || int(text[j]) == i + 32)
				m++;
		}
		cout << char(i) << ", " << char(i + 32) << " : " << m << endl;
	}
}

void HW3::count_chars2(char text[], int result[26]) {
	for (int i = 65, k = 0; i <= 90; i++, k++) {
		int m = 0;
		for (int j = 0; text[j] != -1; j++) {
			if (int(text[j]) == i || int(text[j]) == i + 32)
				m++;
		}
		result[k] = m;
	}
}

void HW3::chars_init() {
	char text[] = "Today is a nice day for having a little picnic.";
	count_chars(text);
}

void HW3::transposed() {
	//change count_chars to write results into array
	char text[] = "Today is a nice day for having a little picnic.";
	int result[26];
	count_chars2(text, result);

	//look for the biggest value(s)
	int maxCount = 0;
	for (int l = 0; l <= 25; l++) {
		if (result[l] > maxCount)
			maxCount = result[l];
	}

	//iterate through, subtracting one for each instance of a star
	for (int o = maxCount; o > 0; o--) {
		for (int p = 0; p < 25; p++) {
			if (result[p] != o) {
				//cout << " ";
				cout << result[p];
			}
			else {
				//cout << "*";
				cout << result[p];
				result[p]--;
			}
		}
		cout << endl;
	}
	//when no more stars, print labels
	cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

int HW3::init(int j) {
	int i = 0;
	while (1) {
		cout << string(3, '\n');
		cout << "Homework #" << j << endl;
		cout << "For 'chars_unit' enter 1" << endl << "For 'StarChart' enter 2" << endl << "Terminate with 0" << endl;
		cin >> i;
		cout << string(3, '\n');
		cout << "Exercise " << i << ": " << endl;
		switch (i) {
		case 0:
			return 0;
		case 1:
			chars_init();
			break;
		case 2:
			transposed();
			break;
		case 3:
			break;
		default:
			break;
		}
	}
}