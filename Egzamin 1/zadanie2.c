#include <stdio.h>
#include <stdlib.h>


using namespace std;

union liczba{
	int calkowita;
	double rzeczywista;
};

struct samochod{
	char marka[20];
	char model[20];
	int rocznik;
	liczba pojemnosc;
};

int main()
{
	samochod renault;
	
	cout<<"Podaj mark�: ";
	cin>>renault.marka; //odwo�ujemy si� za pomoc� operatora "."
	
	cout<<"Podaj pojemnosc: ";
	cin>>renault.pojemnosc.rzeczywista; //odwo�ujemy si� za pomoc� operatora "."
	
	//wypisanie danych
	cout<<"Marka: "<<renault.marka<<endl;
	cout<<"Pojemno��: "<<renault.pojemnosc.rzeczywista<<endl;
	
	system("pause");
	return 0;
}
