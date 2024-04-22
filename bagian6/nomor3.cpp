#include <iostream>
using namespace std;

int main() {
    int luas, ab, cd, t;

    cout << "Alas Atas: ";
    cin >> ab;
    cout << "Alas Bawa: ";
    cin >> cd;
    cout << "Tinggi   : ";
    cin >> t;

    luas = 0.5 * t * (ab+cd);

    cout << "Luad prisma adalah: " << luas << endl;
}