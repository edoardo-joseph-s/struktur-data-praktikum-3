#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> larik;
    int angka = 0;

    for(int i = 1; i <= 100; i+=2) {
        if(i % 1 == 0) {
            larik.push_back(i);
            angka += i;
        }
    }

    double rata_rata = static_cast<double>(angka) / larik.size();

    cout << "Angka ganjil 1-100:  ";
    for(int i : larik)
    
        cout << i << " \n";
    
    cout << "\nRata-rata adalah: " << rata_rata << endl;

    return 0;
}