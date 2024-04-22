#include <iostream>
#include <iomanip>
using namespace std;

struct mhs_akhir {
    string nama; 
    int nim, kehadiran, tugas, quis, uts, uas, na;
};

int main() {
    mhs_akhir mhs[6];


    for (int i = 0; i < 6 ;i++) {
        cout << "\nData. " << i + 1 << endl;
        cout << "Masukan Nama: ";
        cin >> mhs[i].nama;
        cout << "Masukan NIM: ";
        cin >> mhs[i].nim;
        cout << "Nilai Kehadiran: ";
        cin >> mhs[i].kehadiran;
        cout << "Nilai Tugas: ";
        cin >> mhs[i].tugas;
        cout << "Nilai Quiz: ";
        cin >> mhs[i].quis;
        cout << "Nilai UTS: "; 
        cin >> mhs[i].uts;
        cout << "Nilai UAS: ";
        cin >> mhs[i].uas;

        mhs[i].na = mhs[i].kehadiran * 0.05 + mhs[i].quis * 0.10 + mhs[i].tugas * 0.15 + mhs[i].uts * 0.35 + mhs[i].uas * 0.35;
    }

    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(5) << "| No" << setw(15) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(10) << "| Nilai Akhir" << "|" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        cout << left <<setw(5) << i + 1 << setw(15) << mhs[i].nama << setw(10) << mhs[i].nim << setw(10) << mhs[i].kehadiran << setw(10) << mhs[i].tugas << setw(10) << mhs[i].quis << setw(10) << mhs[i].uts << setw(10) << mhs[i].uas << setw(10) << mhs[i].na << endl;
    }
    cout << "------------------------------------------------------------------------------------------------" << endl;

    return 0;
}