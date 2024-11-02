#include <iostream>
using namespace std;

void main() {
	int i = 0;
	char separaton = ' ';
	string temp;
	char data[100];

	cout << "Masukan kata/kalimat :";
	cin.getline(data, 100);

	while (data[i] != '0') {
		if (data[i] != separaton) {
			temp += data[i];
		}
		else {
			cout << temp << "\n";
			temp.clear();
		}

		i++;
	}
	cout << temp << "\n";


}