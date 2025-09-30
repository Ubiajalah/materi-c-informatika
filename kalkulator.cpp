#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    if (op == '+')
        cout << "Hasil: " << a + b << endl;
    else if (op == '-')
        cout << "Hasil: " << a - b << endl;
    else if (op == '*')
        cout << "Hasil: " << a * b << endl;
    else if (op == '/')
        cout << "Hasil: " << a / b << endl;
    else
        cout << "Operator tidak dikenal!" << endl;

    return 0;
}
