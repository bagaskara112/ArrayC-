#include <iostream>
#include <vector>

using namespace std;

void main() {
	int kotak[4] = { 100, 32, 8, 5 };

	//replace array ke vektor
	vector<int>vect4(kotak, kotak + sizeof(kotak)/sizeof(int));

	//menampilkan vector 
	cout << "Array to Vector :\n";
	for (int i = 0; i < vect4.size(); i++)
	{
		cout << vect4[i] << " | ";
	}
}