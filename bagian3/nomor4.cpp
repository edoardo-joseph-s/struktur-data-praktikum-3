#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> larik;
    int a = 0;

    for (int i = 1; i <= 100; i += 2) {
        larik.push_back(i);
        a += i;
    }

    double rata2 = static_cast<double>(a) / larik.size();

    cout << "Angka ganjil: ";
    for (int i : larik)
        cout << i << " ";

    cout << "\nRata-rata: " << rata2 << endl;

    return 0;
}
