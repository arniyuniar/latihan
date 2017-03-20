#include <iostream>
using namespace std;

int main () {
	// variable
	int a, b, temp;

	// proses membaca
	cout << "Masukkan nilai A : ";
	cin >> a;

	cout << "Masukkan nilai b : ";
	cin >> b;

	//posestukar
	temp = b;
	b = a;
	a = temp;

	//prosestampil
	cout <<"===================" <<endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;

	return 0;


}