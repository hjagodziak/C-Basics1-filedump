#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/*int y=1;
	while(y<=1 || y>2){
		int x;
		cout << "Dzien tygodnia: ";
		cin >> x;
		if(x>7){
			cout << "Blad!";
		}
		else{
			switch(x){
				case 1: cout << "Poniedzialek";break;
				case 2: cout << "Wtorek";break;
				case 3: cout << "Sroda";break;
				case 4: cout << "Czwartek";break;
				case 5: cout << "Piatek";break;
				case 6: cout << "Sobota";break;
				case 7: cout << "Niedziela";break;
			}
		}
		cout << "\n";
		cout << "Kontynuowac? [1=tak/2=nie]: ";
		cin >> y;
	}	
	int n=2;
	do{
		cout << "Koniec.";
	}while(n<=1);*/
	
//////////////////////////////////////////////////////////////////
	
	for(int i=1;i<=1;){
		int x;
		cout << "Dzien tygodnia: ";
		cin >> x;
		if(x>7){
			cout << "Blad!";
		}
		else{
			switch(x){
				case 1: cout << "Poniedzialek";break;
				case 2: cout << "Wtorek";break;
				case 3: cout << "Sroda";break;
				case 4: cout << "Czwartek";break;
				case 5: cout << "Piatek";break;
				case 6: cout << "Sobota";break;
				case 7: cout << "Niedziela";break;
			}
		}
		cout << "\n";
		cout << "Kontynuowac? [1=tak/2=nie]: ";
		cin >> i;
	}
	int n=2;
	do{
		cout << "Koniec.";
	}while(n<=1);
	
	return 0;
}
