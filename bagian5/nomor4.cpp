#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lr;
    int a = 0;

    for (int i = 1; i <= 100; i += 2) {
        lr.push_back(i);
        a += i;
    }

    double bil_rata = static_cast<double>(a) / lr.size();

    cout << "Kumpulan angka ganjil: ";
    for (int i : lr)
        cout << i << " ";

    cout << "\nRata-rata: " << bil_rata << endl;

    return 0;
}
