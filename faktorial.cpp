#include <iostream>
using namespace std;

int main() {
    int n, hasil = 1;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        hasil *= i; // sama dengan hasil = hasil * i
    }

    cout << "Faktorial dari " << n << " adalah " << hasil << endl;
    return 0;
}
