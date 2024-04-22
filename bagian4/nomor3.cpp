#include <iostream>
using namespace std;

int main() {
    int luas, cd, ab, t;

    cout << "Alas atas: ";
    cin >> ab;
    cout << "Alas bawa: ";
    cin >> cd;
    cout << "Tinggi: ";
    cin >> t;

    luas = 0.5 * t * (ab+cd);

    cout << "Luas Prisma adalah: " << luas << endl;
}