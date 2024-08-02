#include <iostream>
using namespace std;

int main() {
	int wattage;
	cout << "Please enter the wattage: ";
	cin >> wattage;
	switch (wattage) {
	case(15):
		cout << "125 lumens";
		break;
	case(25):
		cout << "215 lumens";
		break;
	case(40):
		cout << "500 lumens";
		break;
	case(60):
		cout << "880 lumens";
		break;
	case(75):
		cout << "1000 lumens";
		break;
	case(100):
		cout << "1675 lumens";
		break;
	default:
		cout << "Wattage unknown";
		break;
	}
}
