#include <iostream>
#include <vector>

using namespace std;

void main() {
	
	vector <int> vec1;
	//3 jumlah kotak, 12 isi dari kotak
	vector <int> vec2(3,12);
	//mengcopy vektor ke vektor
	vector<int>vec3(vec2);


	//menampilkan vektor

	for (int i = 0; i < vec3.size(); i++)
	{
		cout << vec3[i] << " | ";
	}
}