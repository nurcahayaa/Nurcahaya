#include <iostream>
using namespace std;

int main() {
	int x,y;
	string pilihan;
	
	cout << "========= ARITMATIKA =========" << endl;
	cout << "Masukkan Nilai x" << endl;
	cin >> x;
	cout << "Masukkan Nilai y" << endl;
	cin >> y;
	cout << "Masukkan pilihan: ";
	cin >> pilihan;
	
	if(pilihan == "penjumlahan") {
		cout << " hasil " << x+y  << endl;
	} else 	if(pilihan == "pengurangan") {
		cout << " hasil " << x-y  << endl;
	} else 	if(pilihan == "pembagian") {
		cout << " hasil " << x/y  << endl;
	} else 	if(pilihan == "perkalian") {
		cout << " hasil " << x*y  << endl;
	} 
	
	cout << "program ini menggunakan program kalkulator sederhana" << endl;
	return 0;
}

