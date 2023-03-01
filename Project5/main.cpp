#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	for(int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
				cout << "x";
		}
		cout<<endl;
	}
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars[0] << endl;
	int myNum[3] = {10, 20, 30};
	cout << myNum[2] << endl;
	return 0;
}
