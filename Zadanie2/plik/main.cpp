#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream plik;
	plik.open("plik.txt", ios::in);
	if(plik.good()==true){
		int b;
		cout<<"Podaj numer znaku do odczytania (od 0): ";
		cin>>b;
		char a;
		plik.seekg(b);
		plik>>a;
		cout<<a<<endl;
	}
	else cout<<"Blad otwarcia pliku!";
	
	
	
	fstream plik1("test.txt", ios::in | ios::out);
	if(plik1.good()==true){
		string dane;
		getline(plik1,dane);
		cout<<dane<<endl;
		plik1.close();
	}
	else cout<<"Blad otwarcia pliku!";
	
	
	
	fstream plik2;
	plik2.open("test1.txt", ios::in | ios::out);
	if(plik2.good()==true){
		cout<<"Uzyskano dostep do pliku."<<endl;
		plik2.close();
	}
	else cout<<"Dostep zabroniony!";
	
	
	
	fstream plik3;
	plik3.open("plik1.txt", ios::in | ios::app);
	if(plik3.good()==true){
		string dane;
		for(int i=0;i<10;i++){
			cout<<"Podaj wyraz: ";
			cin>>dane;
			plik3<<dane;
			plik3<<" ";
		}
	}
	else cout<<"nie udalo sie otworzyc!";
	
	
	
	fstream plik4("test2.txt", std::ios::out);
	if(plik1.good()==true){
		string napis;
		getline(std::cin, napis);
		plik4.write(& napis[0],napis.length());
	}
	else cout<<"Blad otwarcia pliku!";
	return 0;
}
