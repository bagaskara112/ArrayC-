#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}for (int i = 2; i <= num / 2; ++i) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;

	cout << "Masukan Nilai n: "; cin >> n;
	cout << "Bilangan prima kelipatan 3 hingga n" << n << "adalah : ";
	for (int i = 3; i <= n; i += 3) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	return 0;
}