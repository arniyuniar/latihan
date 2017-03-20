#include <iostream>
using namespace std;

//prototype
void prosesBaca();
void prosesTukar();
void prosesTampil();

// variabel global
	int a, b, temp;

//proses utama
int main () {
	prosesBaca();
	prosesTukar();
	prosesTampil();
	return 0;
	}

// proses membaca
void prosesBaca () {
	cout << "Masukkan nilai A : ";
	cin >> a;

	cout << "Masukkan nilai b : ";
	cin >> b;
}


	//posestukar
	void prosesTukar () {
	temp = b;
	b = a;
	a = temp;
}


	//prosestampil
	void prosesTampil () {
	cout <<"===================" <<endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
}

