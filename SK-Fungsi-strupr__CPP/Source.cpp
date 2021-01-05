#pragma warning(disable:4996)

#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int main()
{
	char kata[20];
	
	cout << "Masukkan Sembarang Kata dengan Huruf Kecil : ";
	gets_s(kata);
	strupr(kata);
	
	cout << "Hasil Perubahan : " << kata << endl;
	
	_getch();
	return 0;
}