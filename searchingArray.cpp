#include <iostream>

using namespace std;

void main() {
	int data[11] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
	int i=0, input, flag = 0;

	//cetak isi array
	for (int i = 0; i < 11; i++)
	{
		cout << data[i] << " | ";
	}

	cout << "\nMasukan angka yang dicari : ";
	cin >> input;

	//pencarian] array
	while (i<11)
	{
		if (input == data[i])
		{
			flag = 1;
			break;
		}
		i++;
	}


	//check 
	if (flag==1)
	{
		cout << "\nAda";
	}
	else {
		cout << "\nTidak ada";
	}

}