#include <iostream>
using namespace std;
int main() {
	char kode, lagi;
	char nama[20];
	string mobil;
	int durasi, harga, stot, tot, bayar, kmb;
	double diskon;



awal:
	cout << "====================================" << endl;
	cout << "Kode   Jenis Mobil     hrg Sewa/Hari" << endl;
	cout << "1.     Sedan             350000" << endl;
	cout << "2.     Mini Bus          500000" << endl;
	cout << "3.     Bus               800000" << endl;
	cout << "====================================" << endl;
	cout << endl;
	cout << "Nama Penyewa          :", cin >> nama;
	cout << "Kode Mobil [1/2/3]    :", cin >> kode;
	cout << "Lama Sewa             :", cin >> durasi;
	cout << endl;


	if (kode == '1') {
		harga = 350000;
		mobil = "Sedan";
	}
	else if (kode == '2') {
		harga = 500000;
		mobil = "Mini Bus";
	}
	else if (kode == '3') {
		harga = 800000;
		mobil = "Bus";
	}
	else {
		cout << "Pilihan Tidak Ada" << endl;
		goto akhir;
	}

	
	stot = harga * durasi;
	cout << "Nama Penyewa          :" << nama << endl;
	cout << "Kode Mobil            :" << kode << endl;
	cout << "Jenis Mobil           :" << mobil << endl;
	cout << "Lama Sewa             :" << durasi << endl;
	cout << "Sub Total             :" << stot << endl;
	if (durasi >= 14)(diskon = stot * 0.3);
	if (durasi >= 7)(diskon = stot * 0.2);
	if (durasi >= 3)(diskon = stot * 0.1);
	else (diskon = stot * 0);


	cout << "Diskon                :" << diskon << endl;
	tot = stot - diskon;
	cout << "Total Bayar           :" << tot << endl;
	cout << "====================================" << endl;
	cout << "Uang Bayar            :", cin >> bayar;
	kmb = bayar - tot;
	cout << "Uang Kembali          :" << kmb << endl;
	cout << "====================================" << endl;
	cout << "Mau Isi Data Lagi? [Y/T]"; cin >> lagi;
	cout << endl;


	if (lagi == 'Y' || lagi == 'y')
		goto awal;
	else goto akhir;
akhir:
	cout << "Terima Kasih";
	return 0;

 }