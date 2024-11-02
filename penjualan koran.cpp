#include <iostream>
using namespace std;

int main() {
	int harga, ja, jk, jt, tot;
	char kode, lagi;
	string nh, hari, agen;


	cout << "                                      " << endl;
	cout << "                                                            STRUKTUR KORAN           " << endl;
	cout << " _____________ _____________ _________" << endl;
	cout << "| Kode Harian | Nama Harian |  Harga  |" << endl;
	cout << "|      1      |    Kompas   |  4000   |" << endl;
	cout << "|      2      |     Bola    |  6000   |" << endl;
	cout << "|      3      |     Tempo   |  3000   |" << endl;
	cout << "|_____________|_____________|_________|" << endl;
	cout << endl;


awal:
	cout << "Hari                :"; cin >> hari;
	cout << "======================================" << endl;
	cout << "Nama Agen           :"; cin >> agen;
	cout << "kode Harian(1/2/3)  :"; cin >> kode;
	

	if (kode == '1') {
		nh = "Kompas";
		harga = 4000;
	}
	else if (kode == '2') {
		nh = "Bola";
		harga = 6000;
	}
	else if (kode == '3') {
		nh = "Tempo";
		harga = 3000;
	}
	else {
		cout << "Maaf Kode Harian" << kode << "Tidak ada dalam daftar" << endl;
		goto akhir;
	}


	cout << "Jumlah Ambil        :"; cin >> ja;
	cout << "Jumlah Kembali      :"; cin >> jk;
	cout << "--------------------------------------" << endl;


	jt = ja - jk;
	tot = jt * harga;
	cout << "        AGEN DISTRIBUTOR KORAN        " << endl;
	cout << "             TRIBUN TIMUR             " << endl;
	cout << "======================================" << endl;
	cout << "Hari                :" << hari << endl;
	cout << "Nama Agen           :" << agen << endl;
	cout << "======================================" << endl;
	cout << "Nama Harian         :" << nh << endl;
	cout << "harga               :" << harga << endl;
	cout << "Jumlah Ambil        :" << ja << endl;
	cout << "Jumlah Kembali      :" << jk << endl;
	cout << "Jumlah Terjual      :" << jt << endl;
	cout << "======================================" << endl;
	cout << "Total Pembayaran    : Rp." << tot << endl;
	cout << "======================================" << endl;
	cout << "Mau Isi Data Lagi?[Y/T]"; cin >> lagi;
	cout << endl;


	if (lagi == 'Y' || lagi == 'y')
		goto awal;
	else
		goto akhir;
akhir:
	cout << "Terimakasih"
		;
	return 0;
}