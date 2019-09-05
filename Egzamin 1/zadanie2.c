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
	
	cout<<"Podaj markê: ";
	cin>>renault.marka; //odwo³ujemy siê za pomoc¹ operatora "."
	
	cout<<"Podaj pojemnosc: ";
	cin>>renault.pojemnosc.rzeczywista; //odwo³ujemy siê za pomoc¹ operatora "."
	
	//wypisanie danych
	cout<<"Marka: "<<renault.marka<<endl;
	cout<<"Pojemnoœæ: "<<renault.pojemnosc.rzeczywista<<endl;
	
	system("pause");
	return 0;
}
