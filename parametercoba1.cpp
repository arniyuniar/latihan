#include <iostream>
using namespace std;

//prototype
int tambahkan (int a, int b);
int a , b;

//program utama
int main () {
cout << "masukkan nilai A : ";
	cin >> a;

cout << "masukkan nilai B : ";
	cin >> b;

	cout << "Hasil : " << tambahkan (a, b) << endl;
	return 0;
}

	int tambahkan (int a, int b) {
	return a + b;
}