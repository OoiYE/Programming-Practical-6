#include <iostream>
using namespace std;

int main() {
	int pH;
	cout << "Please enter the pH value: ";
	cin >> pH;

	if (pH > 7)
		if (pH < 12)
			cout << "Alkaline";
		else
			cout << "Very Alkaline";
	else 
	if (pH == 7)
		cout << "Neutral";
	else if (pH > 2)
		cout << "Acidic";
	else
		cout << "Very Acidic";

	return 0;
}