#include <iostream>

using namespace std;

// prototype
void prosesBaca();
int prosesTambah();
int proseKurang();
void prosesTampil();

// variable global
int a, b;

int main(int argc, char const *argv[])
{
	prosesBaca();
	prosesTampil();
	return 0;
}

// proses membaca
void prosesBaca()
{

	cout << "Masukan nilai A : ";
	cin >> a;

	cout << "Masukan nilai b : ";
	cin >> b;
}

int prosesTambah()
{

	return a + b;
}

int proseKurang()
{

	int hasil;
	hasil = a - b;

	return hasil;
}

void prosesTampil()
{

	cout << "Hasil Tambah : " << prosesTambah() << endl;
	cout << "Hasil Kurang : " << proseKurang() << endl;
}