#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
	fstream plik;
	plik.open("liczba.txt", ios::out | ios::in | ios::trunc);
	srand(time(NULL));
	if(plik.good()){
		int k=0;
		int liczba=10001;
		for(int i=0;i<5001;i++){
			int a=(rand()%10000 -0);
			plik<<a<<endl;
			k=i;
		}
		cout<<"Ile liczb? - "<<k<<endl;
		plik.seekg(0, ios::beg);
		while(!plik.eof()){
			int m=10001;
			plik>>m;
			cout<<"Minimum = "<<liczba<<endl;
			cout<<"Aktualna = "<<m<<endl;
			if(liczba>m){
				liczba=m;
			}
			//Sleep(1);
		}
		/*for(int j=5001;j==1;j--){
			int m=10001;
			plik>>m;
			cout<<"Minimum = "<<liczba<<endl;
			cout<<"Aktualna = "<<m<<endl;
			if(liczba>m){
				liczba=m;
			}
			//Sleep(1);
		}*/
		//Nie uda³o mi siê z for
		plik.close();
	}
	else{
		cout<<"Brak dostêpu!";
	}
	return 0;
}//Wykonane przez Hubert Jagodziñski
