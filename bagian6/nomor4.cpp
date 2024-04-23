#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> gjl;
    int a = 0;

    for (int i = 1; i <= 100; i += 2) {
        gjl.push_back(i);
        a += i;
    }

    double RataRata = static_cast<double>(a) / gjl.size();

    cout << "Angka ganjil: ";
    for (int i : gjl)
        cout << i << " ";

    cout << "\nRataRata-RataRata: " << RataRata << endl;

    return 0;
}
