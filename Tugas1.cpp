#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// variable
	int a, b, tmp;

	// proses membaca
	cout << "Masukan Nilai A: ";
	cin >> a;

	cout << "Masukan Nilai B: ";
	cin >> b;

	// proses tukar
	tmp = b;
	b = a;
	a = tmp;

	// proses tampil
	cout << "====================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarng : " << b << endl;

	return 0;
}