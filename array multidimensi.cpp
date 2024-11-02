#include <iostream>
using namespace std;

void main() {
	//int angka[2];
	///*
	//[0]
	//[1]
	
	int nomor[2][3] = { 1, 4, 6, 2, 3, 5 };
	//cout << nomor[1][2] << endl;

	/*cout << nomor[0][0] << " "; 
	cout << nomor[0][1] << " ";
	cout << nomor[0][2] << endl;*/

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 3; b++) {
			cout << nomor[a][b] << " ";
		}
		cout << endl;
	}
	/*
	[0][0] = 1
	[0][1] = 4
	[0][2] = 6

	[1][0] = 2
	[1][1] = 3
	[1][2] = 5
	*/
}