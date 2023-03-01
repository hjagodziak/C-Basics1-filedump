#include <iostream>

using namespace std;

struct str{ string nick;
				string haslo;
				int numer;
				short data;
			};
struct uklad{ string nazwa;
				string lacinska;
				int odleglosc;
				short ileks;
			};

int main() {
	str pierwszy={"pierwszy","Zo2g377d",1,1987};
	cout<<pierwszy.nick<<endl;
	cout<<pierwszy.data<<endl<<endl;
	
	uklad drugi={"Merkury","Mercurius",57,0};
	cout<<drugi.nazwa;
	return 0;
}
