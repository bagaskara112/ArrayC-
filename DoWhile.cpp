#include <iostream>
using namespace std;

int main() {
	int awal, akhir, hasil;
	string ulang;
	do {
		cout << "Masukan nilai awal :"; cin >> awal;
		cout << "Masukan nilai Akhir :"; cin >> akhir;
		hasil = awal * akhir;
		cout << "Hasilnya adalah" << hasil << endl;
		cout << "Ulangi progam [y/n] : "; cin >> ulang;

	} while (ulang == "y");
	

	
}