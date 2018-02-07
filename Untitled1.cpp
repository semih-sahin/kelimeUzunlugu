/*
	Girilen kelimedeki harf sayisini bulan program
*/

#include <iostream>	// en temel kutuphane (input - output)
#include <conio.h>	// getch() fonksiyonu icin gerekli kutuphane
#include <string.h>	// strlen fonksiyonu icin gerekli kutuphane

using namespace std;	// std komutlarini(cout, cin vb.) kullanbilmemiz icin...

int main(){
	char dizi[50];	
	cout << "kelime gir: ";
	cin >> dizi;
	cout << "karakter sayisi: " << strlen(dizi) << endl;
	getch();
	return 0;
}
