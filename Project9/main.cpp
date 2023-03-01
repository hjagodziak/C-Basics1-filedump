#include <iostream>
#include <cmath>
#include <windows.h>
#include <fstream>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
	fstream plik, plikwynikowy;
	plikwynikowy.open("liczbypierwsze.txt", ios::out|ios::trunc);
	plik.open("liczba.txt", ios::out| ios::in | ios::trunc);
	srand(time(NULL));
	if(plik.good() ){
		int k=0;
		int liczba=10001;
		for(int i=0;i<500;i++){
			int a=(rand()%10000 -0);
			plik<<a<<endl;
			k=i;
		}
		cout<<"W pliku znajduje sie "<<k<<" liczb."<<endl;
	}
	else{
		cout<<"Nie wypelniono pliku liczbami";
	}
	plik.seekg(0, ios::beg);
	while(!plik.eof()){
		int a,b,i=2,s,z;
		plik>>a;
		cout<<"Wczytalem liczbe z pliku: "<<a<<endl;
		s=a;
		for(i=2;i<s;i++){
			b=s%i;
			cout<<"Wczytana liczba: "<<s<<endl;
			cout<<s<<" : "<<i<<" = "<<b<<endl;
			//Sleep(1000);
			if(b==0){
				cout<<"Liczba jest zlozona!"<<endl;
				break;
			}
			else if(i==a-1){
				cout<<"Liczba jest pierwsza!"<<endl;
				plikwynikowy<<a<<endl;
			}
		}
	}
	plik.close();
	plikwynikowy.close();
	return 0;
}
