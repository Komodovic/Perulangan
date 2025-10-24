#include <iostream>
using namespace std;

int main() {
	int n;
	int jumGenap = 0, jumGanjil = 0;
	
	cout << "Masukkan jumlah data: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		int data;
		cout << "Masukkan data ke-" << i << ": ";
		cin >> data;

		if (data % 2 == 0) {
			jumGenap += data;
		}
		else {
			jumGanjil += data;
		}
	}

	cout << "Jumlah bilangan genap = " << jumGenap << "\n";
	cout << "Jumlah bilangan ganjil = " << jumGanjil << "\n";


	return 0;

}
