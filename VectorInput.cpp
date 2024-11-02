#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector <int> vect5;
	int input;

	cout << "Masukan Isi Vector: \n";
	cout << "===================\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Vector ke-" << i << " : ";
		cin >> input;
		vect5.push_back(input);
	}

	//menampilkan vektor
	cout << "\n\nIsi Dari Vector: \n";
	cout << "================\n";
	for (auto i = vect5.begin(); i != vect5.end(); i++)
	{
		cout << *i << " | ";

	}
}