#include <iostream>
using namespace std;

int main() {
    // deklarasi
    int var_luas, ab, cd, t;

    // input alas bawa, alas atas, tinggi
    cout << "Masukan Alas Atas  : ";
    cin >> ab;
    cout << "Masukan Alas Bawah : ";
    cin >> cd;
    cout << "Masukan Tinggi     : ";
    cin >> t;

    // menghitung luas trapesium
    var_luas = 0.5 * (ab + cd) * t;

    // output hasil dari luas trapesium
    cout << "Luas trapesium adalah: " << var_luas << endl;
    return 0;

}