#include <iostream>
using namespace std;

int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    } 
    return (n == 0 || c == n);
}
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}
void tampilPrima() {
    if (isPrima(angka))
        cout << angka << " adalah bilangan prima." << endl;
    else
        cout << angka << " bukan bilangan prima." << endl;
}
void tampilFibonacci() {
}