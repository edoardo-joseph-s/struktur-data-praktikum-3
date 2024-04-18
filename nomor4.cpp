#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> larik;
    int angka = 0;

    // membuat larik bilangan ganjil
    for(int i = 1; i <= 100; i+=2) {
        if(i % 1 == 0) {
            larik.push_back(i);
            angka += i;
        }
    }

    // hitung rata-rata
    double rata_rata = static_cast<double>(angka) / larik.size();

    // output rata-rata 1-100
    cout << "Angka ganjil 1-100:  ";
    for(int i : larik)
        cout << i << " ";
    
    cout << "\nRata-rata: " << rata_rata << endl;

    return 0;
}
