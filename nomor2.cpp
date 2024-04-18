#include <iostream>
using namespace std;

int main() {
    // deklarasi variable
    int a, b, c, d, t;

    // input
    cout << "Note: Masukan 4 angka dengan spasi sebagai pemisah\n";
    cout << "Masukan 4 angka    : ";
    cin >> a >> b >> c >> d;

    // penjumlahan
    t = a + b + c + d;

    // output dari program
    cout << "Hasil dari " << a << " + " << b << " + " << b << " + " << c << " + " << d << " adalah: " << t  << endl;
    return 0;
}