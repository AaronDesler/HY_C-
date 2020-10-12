#include "hw2.h"
#include <algorithm> 
#include <list>
using namespace std;


int HW2::faculty(int x) {
	if (x == 1) {
		return x;
	}
	else {
		x *= faculty(x - 1);
	}
}

void HW2::binomial() {
	cout << "Exercise 1: " << endl;
	//declare
	int n, r;
	//input
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter r: ";
	cin >> r;
	//output
	cout << "C(n, r) = " << (faculty(n) / (faculty(n - r) * faculty(r))) << endl;
}

void HW2::permutNumbers() {
	cout << "Exercise 2: " << endl;
	int inputInt;
	cin >> inputInt;
	list <int> permList;
	int myints[100];
	cout << "Enter Integers: " << endl;
	int i = 0;
	do {
		cin >> myints[i];
		i++;
	} while (inputInt);
	const int arrSize = permList.size();

	std::sort(myints, myints + 3);
	do {
		std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
	} while (std::next_permutation(myints, myints + 3));

	std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

}

int HW2::third(int x) {
		if (x >= 0)
		{
			x = x - 1;
			int y = x + third(x);
			return y + third(x);
		}
		else
		{
			return 1;
		}
	}



int HW2::init(int j) {
	int i = 0;
	while (1) {
		cout << string(3, '\n');
		cout << "Homework #" << j << endl;
		cout << "For 'Binomial Coefficient' enter 1" << endl << "For 'Permutation' enter 2" << endl << "Terminate with 0" << endl;
		cin >> i;
		cout << string(3, '\n');
		switch (i) {
		case 0:
			return 0;
		case 1:
			binomial();
			break;
		case 2:
			permutNumbers();
			break;
		case 3:
			int ii;
			cin >> ii;
			cout << third(ii);
		default:
			break;
		}
	}
}