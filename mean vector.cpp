#include <iostream>
#include <vector>

using namespace std;

int main() {
	//memasukkan jumlah angka
	cout << "Masukan jumlah angka: ";
	int jumlah;
	cin >> jumlah;
	cout << endl;

	//memasukkan angka angka
	cout << "======================\n";
	vector<int> data;
	cout << "Masukan angka-angka:\n";
	for (int i = 0; i < jumlah; i++) 
	{
		int nomor;
		cout << "Angka Ke-" << i + 1 << ": ";
		cin >> nomor;
		data.push_back(nomor);
	}
	cout << endl;

	//menghitung total 
	cout << "======================\n";
	int total = 0;
	for (int i = 0; i < jumlah; i++)
	{
		total += data[i];
	}
	
	//menghitung rata-rata
	int mean = total / jumlah;

	//menampilkan hasil
	cout << "Meannya adalah: " << mean << endl;


















	/*vector<int> data = { 92, 65, 74, 80, 80, 70, 78 };
	
	size_t size = data.size();

	int total = 0;
	for (size_t i = 0; i < size; i++) {
		total += data[i];
	}
	double mean = total / size;

	cout << "Mean: " << mean << endl;*/

	return 0;
}