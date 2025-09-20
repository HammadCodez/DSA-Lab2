#include <iostream>
using namespace std;

int main() {

	int size;
	cout << "Enter the size of array" << endl;
	cin >> size;

	int* salArray = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter the salaray of " << (i + 1) << "employee:" << endl;
		cin >> *(salArray + i);
	}

	for (int i = 0; i < size; i++) {
		salArray[i] = salArray[i] + salArray[i] / (i + 1);
	}

	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << salArray[i] << " ";
	}
	cout << endl;


	return 0;
}