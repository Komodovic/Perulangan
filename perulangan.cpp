#include <iostream>
using namespace std;

int main() {
    int n;
    int data;
    int jumGanjil = 0;
    int jumGenap = 0;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah data harus lebih dari 0!\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> data;

        if (data % 2 == 0)
            jumGenap += data;
        else
            jumGanjil += data;
    }

    cout << "Jumlah bilangan genap = " << jumGenap << "\n";
    cout << "Jumlah bilangan ganjil = " << jumGanjil << "\n";

    return 0;
}