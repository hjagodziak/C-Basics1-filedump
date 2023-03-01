#include <iostream>

using namespace std;

int dodaj(int a,int b){
	int z=a+b;
	return z;
}
int mnozenie(int a,int b){
	int z=a*b;
	return z;
}
int dzielenie(int a,int b){
	int z=a/b;
	return z;
}
int roznica(int a,int b){
	int z=a-b;
	return z;
}
int delta(int a,int b,int c){
	int d=(b*b)-(4*a*c);
	return d;
}

int main() {
	int a,b,c;
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Podaj b: ";
	cin>>b;
	cout<<"Podaj c: ";
	cin>>c;
	char x;
	cout<<"Co chcesz liczyc? s-uma m-nozenie d-zielenie r-oznica w-delta: ";
	cin>>x;
	if(x=='w'){
		int w=delta(a,b,c);
		cout<<"Delta: "<<w;
	}
	else if(x=='s'){
		int s=dodaj(a,b);
		cout<<"Wynik (a i b): "<<s;
	}
	else if(x=='m'){
		int m=mnozenie(a,b);
		cout<<"Wynik (a i b): "<<m;
	}
	else if(x=='d'){
		int d=dzielenie(a,b);
		cout<<"Wynik (a i b): "<<d;
	}
	else if(x=='r'){
		int r=roznica(a,b);
		cout<<"Wynik (a i b): "<<r;
	}
	else cout<<"BLAD!";
	return 0;
}
