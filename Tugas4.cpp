#include <iostream>

using namespace std;

// prototype
int tambahkan(int a, int b);

// proses utama
int main(int argc, char const *argv[])
{
	cout << "Hasil : " << tambahkan(3, 6) << endl;

	return 0;
}

// fungsi penambahan
int tambahkan(int a, int b)
{
	return a + b;
}