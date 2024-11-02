#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//membuka file
	ofstream fileku;
	fileku.open("dokumen.txt");

	//menulis file
	fileku << " diganti hak e hak e";
	fileku.close();

	//cara membaca file
	string temp;
	fstream openFile("dokumen.txt");
	while (getline(openFile, temp))
	{
		cout << temp +"\n";
	}
	return 0;
}