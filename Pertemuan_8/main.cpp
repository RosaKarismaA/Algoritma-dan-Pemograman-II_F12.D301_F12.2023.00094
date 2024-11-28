#include <iostream>

using namespace std;
int recAdd (int a, int b) {
    if (b == 0) {
        return a;
    }else {
        return recAdd (a+1, b-1);
    }
}

int recPowerOfTwo (int n, int e) {
    if (e == 1) {
        return n;
    }else {
        return n * recPowerOfTwo(n, e-1);
    }
}

int main()
{
    int a, b;
    cout << "Masukkan bilangan pertama :";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;

    cout << "Hasil Penjumlahan " << a << " + " << b << " adalah : " << recAdd(a, b) << endl;

    cout << endl;

    int n, e = 2;
    cout << "Masukkan Hasil Penjumlahan : ";
    cin >> n;

    cout << "Hasil Perpangkatan " << recPowerOfTwo (n, e) <<endl;
    return 0;
}
