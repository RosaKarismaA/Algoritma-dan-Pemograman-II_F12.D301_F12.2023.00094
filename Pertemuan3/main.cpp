#include <iostream>

using namespace std;

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x, y;

    cout << "Masukkan nilai x : ";
    cin >> x;
    cout << "Masukkan nilai y : ";
    cin >> y;

    cout << endl;

    int minimum = min(x, y);
    cout << "Nilai minimum : " << minimum << endl;

    return 0;
}

