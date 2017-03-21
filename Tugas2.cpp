#include <iostream>

using namespace std:

// prototype
void ProsesBaca();
void ProsesTukar();
void ProsesTampil();

//variable global
int a, b, tmp;

int main(int argc, char const *argv[])
{
	prosesBaca();
	ProsesTukar();
	ProsesTampil();

	return 0;
}

void ProsesBaca()
{

	cout << "Masukan nilai A : ";
	cin >> a;
	cout >> "Masukan niali B : ";
	cin >> b;
}

void ProsesTukar()
{

	tmp = a;
	a = b;
	b = tmp;
}

void ProsesTampil()
{

	cout << "====================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarng : " << b << endl;
}