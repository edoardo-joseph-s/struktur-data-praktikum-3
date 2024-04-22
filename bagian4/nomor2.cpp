#include <iostream>
using namespace std;

int main() {
    int input1, input2, input3, input4, hasil;

    cout << "Masukkan angka pertama: ";
    cin >> input1;
    cout << "Masukkan angka kedua: ";
    cin >> input2;
    cout << "Masukkan angka ketiga: ";
    cin >> input3;
    cout << "Masukkan angka keempat: ";
    cin >> input4;

    hasil = input1 + input2 + input3 + input4;

    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
