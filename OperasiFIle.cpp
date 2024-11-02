#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {
	string temp, nama, nim, jurusan;
	ofstream file;
	//membuka file
	file.open("text.txt");

	//menulis file
	cout << "Masukan Nama = ";
	getline(cin, nama);

	cout << "Masukan Nim = ";
	getline(cin, nim);

	cout << "Masukan Jurusan = ";
	getline(cin, jurusan);

	temp = nama + "\n" + nim + "\n" + jurusan;
	file << temp;
	file.close();

	cout << "Isi dokumen adalah = \n";
	cout << "======================\n";
	//menampilkan isi file
	ifstream data("text.txt");
	while (getline(data, temp))
	{
		cout << temp + "\n";
	}




}