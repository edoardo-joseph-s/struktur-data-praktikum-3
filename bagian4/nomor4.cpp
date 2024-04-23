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

    double rata_rata_bilgjl = static_cast<double>(a) / larik.size();

    cout << "Deret bilangan ganjil: ";
    for (int i : larik)
        cout << i << " ";

    cout << "\nRata-rata: " << rata_rata_bilgjl << endl;

    return 0;
}
