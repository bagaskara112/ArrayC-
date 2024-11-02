#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void main() {
	ofstream file;
	string temp, nim, jurusan, nama;

	//membuka file
	file.open("text.txt");

	//menulis file
	cout << "Nama";
	getline(cin, nama);

	cout << "nim";
	getline(cin, nim);

	cout << "jurusan";
	getline(cin, jurusan);

	temp = nama + "\n" + nim + "\n" + jurusan;
	file << temp;
	file.close();

	//membaca file
	ifstream data("text.txt");
	while (getline(data, temp))
	{
		cout << temp + "\n";
	}
}