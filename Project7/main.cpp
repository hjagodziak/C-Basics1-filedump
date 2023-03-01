#include <iostream>

using namespace std;

int main() {
	int a,b;
	char z;
	cout << "Podaj a: ";
	cin >> a;
	cout << endl;
	cout << "Podaj b: ";
	cin >> b;
	cout << endl;
	cout << "Wybierz dzialanie (m-nozenie d-zielenie s-uma r-oznica): ";
	cin >> z;
	cout << endl;
	if(z=='m'){
		int iloczyn=(a*b);
		cout << iloczyn;
	}
	else if(z=='d'){
		int iloraz=(a/b);
		cout << iloraz;
	}
	else if(z=='s'){
		int suma=(a+b);
		cout << suma;
	}
	else if(z=='r'){
		int roznica=(a-b);
		cout << roznica;
	}
	return 0;
}
