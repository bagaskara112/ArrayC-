#include <iostream>

using namespace std;

void main() {
	int A[3][3], B[3][3], hasil[3][3], jml=0;

	//Matrix A
	cout << "Masukan Matrix A :\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "A[" << i << "]" << "[" << j << "] = ";
			cin >> A[i][j];
		}
	}
	cout << "======================================\n";
	//Matrix B
	cout << "Masukan Matrix B :\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << "B[" << i << "]" << "[" << j << "] = ";
			cin >> B[i][j];
		}
	}
	cout << endl;

	//rumus penjumlahan
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			jml = 0;
			for (int k = 0; k < 3; k++)
			{
				jml = jml + A[i][k] * B[k][j];
				hasil[i][j] = jml;
			}
			
		}
	}

	//menampilkan hasil
	cout << "======================================\n";
	cout << "Menampilkan Hasil :\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << hasil[i][j] << " ";
		}
		cout << endl;
	}
}