#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string nama, nim, jurusan, temp;

void main() {
	
	//membuka file data.txt
	ofstream data;
	
	data.open("data.txt");

	//meenulis data.txt
	cout << "Masukan Nama = ";
	getline(cin, nama);

	cout << "Masukan Nim = ";
	getline(cin, nim);

	cout << "Masukan Jurusan = ";
	getline(cin, jurusan);

	temp = nama+"\n"+nim+"\n"+ jurusan;
	data << temp;
	data.close();

	//menampilkan isi data.txt
	cout << "\n\nHasil dari pengisian data \n";
	cout << "=======================\n";

	ifstream Biodata("data.txt");
	while (getline(Biodata, temp))
	{
		cout << temp + "\n";
	}
}