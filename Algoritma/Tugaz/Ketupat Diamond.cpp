#include <iostream>
using namespace std;

int main(){
	
	int t;
	int a;
	int b;
	int h;
	
	cout << "Masukkan Tinggi Ketupat (Ganjil): ";
	cin >> h;
	
	t = (h/2) + 1;
	
	for (a = 1; a <= t; a++){
		for (b = 1; b <= t - a; b++){
			cout << " ";
		}
		for (b = 1; b <= t - (t - a); b++){
			cout << "*" << " ";
		}
		cout << endl;
	}
	for (a = 1; a <= t-1; a++){
		for (b = 1; b <= a; b++){
			cout << " ";
		}
		for (b = 1; b <= t - a; b++){
			cout << "*" << " ";
		}
		cout << endl;
	}
}
