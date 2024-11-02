#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
	vector <int> vect(data, data + sizeof(data) / sizeof(int));

	//menampilkan vector
	cout << "Isi vector awal: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i]<<" | ";
	}
	
	//sorting vector
	sort(vect.begin(), vect.end());
	cout << endl;
	
	//menampilkan hasil sorting asc
	cout << "\nIsi vector Sorting ASC: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}
	
	//sorting vector DESC
	cout << endl;
	sort(vect.begin(), vect.end(), greater<int>());
	//menampilkan hasil sorting DESC
	cout << "\nIsi vector Sorting DESC: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}
}	