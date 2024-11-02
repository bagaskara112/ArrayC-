#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {

awalnemen:
	string siap, ulangi, pil, lagi;
	cout << "\n\n\n\n" << endl;
	cout << "==========================================================================" << endl;
	cout << "                    Created By BAGASKARA" << endl;
	cout << "                          Kamu Siap" << endl;
	cout << "              Untuk Bermain Batu Kertas Gunting ? " << endl;
	cout << "=========================================================================" << endl;
	cout << "                          [y/t] ? ";
	cin >> siap;
	system("cls");
	if (siap == "y") {
	pertama:
		srand(time(NULL));
		int com = rand() % 10;
		cout << "___________________________________________________________________" << endl << endl;
		cout << " ===================================================================" << endl;
		cout << "  \tselamatdatang " << endl;
		cout << "  Di Game Batu, Kertas, Gunting " << endl;
		cout << "======================================================================" << endl;
		cout << "  Pilihlah dari keempat ini : " << endl;
		cout << "  1. Batu\n  2. Kertas\n  3. Gunting\n  4. Keluar" << endl;
		cout << " Tulis pilihanmu : "; cin >> pil; cout << endl;

		if (pil=="batu") {
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "  kamu pilih = BATU " << endl;

			if (com <= 3 && com >= 1) {
				cout << " COM pilih  = BATU " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; \
				cout << " ==>  SERI ! <==" << endl;
			}
			else if (com <= 6 && com >= 4) {
				cout << "COM pilih = KERTAS " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << " ==> KAMU KALAH ! <== " << endl;
			}
			else {
				cout << " COM pilih = GUNTING " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "  ==> KAMU MENANG ! <==" << endl;
			}
		}
		else if (pil == "kertas") {
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "  kamu pilih = KERTAS " << endl;

			if (com <= 3 && com >= 1) {
				cout << " COM pilih  = KERTAS " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; \
					cout << " ==>  SERI ! <==" << endl;
			}
			else if (com <= 6 && com >= 4) {
				cout << "COM pilih = GUNTING " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << " ==> KAMU KALAH ! <== " << endl;
			}
			else {
				cout << " COM pilih = BATU " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "  ==> KAMU MENANG ! <==" << endl;
			}
		}
		else if (pil == "gunting") {
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "  kamu pilih = GUNTING " << endl;

			if (com <= 3 && com >= 1) {
				cout << " COM pilih  = GUNTING " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; \
					cout << " ==>  SERI ! <==" << endl;
			}
			else if (com <= 6 && com >= 4) {
				cout << "COM pilih = BATU " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << " ==> KAMU KALAH ! <== " << endl;
			}
			else {
				cout << " COM pilih = KERTAS " << endl;
				cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "  ==> KAMU MENANG ! <==" << endl;
			}
		}
		else if (pil == "keluar") {
		exit:
			system("cls");
			cout << "n\ Terimakasih, Sudah Bermain :)" << endl;
			cout << "     Bermain Lagi Yah          " << endl;
			getch();
			return;
		}
		else {
			cout << "______________________________" << endl << endl;
			cout << "Input Salah ! Silahkan Ulangi Kembali " << endl;
			cout << "     ==> Tekan ENGTER <==" << endl;
			getch();
			system("cls");
			goto pertama;
		}
		cout << "____________________________________________" << endl << endl;
		cout << " Tekan ENTER";
		getch();
		system("cls");

		cout << "______________________________________________" << endl;
		cout << "=============================================" << endl;
		cout << " Main Lagi [y/t] ? ";
		cin >> lagi;
		if (lagi == "y") {
			system("cls");
			goto pertama;
		}
		else if (lagi == "t") {
			system("cls");
			goto exit;
			getch();
		}
	}
else if (siap == "t") {
keluar:
system("cls");
cout << "\n\n\n\n" << endl;
cout << "==========================================================" << endl;
cout << "                  Kamu Telah Keluar Dari Permainan" << endl;
cout << "==========================================================" << endl;
cout << "                          Tekan ENTER";
getch();
return 0;

	}
else {
	cout << "\n\n\n\n" << endl;
	cout << "======================================================" << endl;
	cout << "                      **** Inputan Salah ! ****" << endl;
	cout << "                                Ulangi ?" << endl;
	cout << "======================================================" << endl;
	cout << "                              y ?";
	cin >> ulangi;
	if (ulangi == "y") {
		system("cls");
		goto awalnemen;
	}
	else {
		goto keluar;
	}
}
