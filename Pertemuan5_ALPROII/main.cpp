#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout<<endl;

    if (angka % 2 == 0) {
        cout << angka << " adalah angka genap." << endl;
    } else {
        cout << angka << " adalah angka ganjil." << endl;
    }

    cout<<endl;
    cout<< "dan"<<endl;
    cout<<endl;

    if (angka % 3 == 0) {
        cout << angka << " adalah kelipatan 3." << endl;
    } else {
        cout << angka << " bukan kelipatan 3." << endl;
    }

    return 0;
}

