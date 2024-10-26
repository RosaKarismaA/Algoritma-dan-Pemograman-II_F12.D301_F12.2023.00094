#include <iostream>

using namespace std;

int main() {

    int arr[] = {2, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Masukkan bilangan X: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << x << " ditemukan " << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << x << " tidak ditemukan" << endl;
    }

    return 0;
}

