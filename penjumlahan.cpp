#include <iostream>
using namespace std;

void main() {
	int A[3][3];
	int B[3][3];
	int hasil[3][3];

	//pengisian matrix a
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "A[" << i << "]" << "[" << j << "] = ";
			cin >> A[i][j];
		}
	}
	cout << "===========================" << endl;
	//output matrix A
	cout << "Hasilnya adalah = \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "================================" << endl;
	//pengisian matrix B
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "B[" << i << "]" << "[" << j << "] = ";
			cin >> A[i][j];
		}
	}
	cout << "===========================" << endl;
	//output matrix A
	cout << "Hasilnya adalah = \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << B[i][j]<<" ";
		}
		cout << endl;
	}

	cout << endl;
	//penjumlahan
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			hasil[i][j] = A[i][j] + B[i][j];
		}
	}

	//cout hasil
	cout << "Hasilnya adalah = \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << hasil[i][j] <<" ";
		}
	}


}