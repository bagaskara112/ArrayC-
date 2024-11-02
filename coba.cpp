#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk membalikkan sebuah string
string reverseString(string s) {
    string r = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}

// Fungsi untuk mengecek apakah sebuah string adalah palindrom atau tidak
bool isPalindrome(string s) {
    // Mengubah semua huruf menjadi huruf kecil
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    // Membandingkan string dengan string yang dibalikkan
    return s == reverseString(s);
}

int main() {
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    cout << "Hasil: ";
    if (isPalindrome(kata)) {
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }
    return;
}