#include <iostream>
using namespace std;

int main() {
	int speed;
	cout << "How fast is the wind?" << endl;
	cin >> speed;
	if (speed < 25)
		cout << "Not a strong wind";
	else if (speed <= 38)
		cout << "Strong wind";
	else if (speed <= 54)
		cout << "Gale";
	else if (speed <= 72)
		cout << "Whole gale";
	else
		cout << "Hurricane";
}
