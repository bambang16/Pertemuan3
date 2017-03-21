#include <iostream>

using namespace std;

// prototype
int tambahkan();

// global variable
int a, b;

// proses utama
int main(int argc, char const *argv[])
{
	cout << "Hasil : " << tambahkan() << endl;

	return 0;
}

// fungsi penambahan
int tambahkan()
{
	cout << "Masukan nilai A : ";
	cin >> a;

	cout << "Masukan nilai B : ";
	cin >> b;

	return a + b;
}