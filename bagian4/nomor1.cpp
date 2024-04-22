#include <iostream>
#include <iomanip>
using namespace std;

struct dt {
    string nama; 
    int nim, kehadiran, tugas, quis, uts, uas;
    float akhir;
};

int main() {
    dt siswa[6];


    for (int i = 0; i < 6 ;i++) {
        cout << "\nData ke. " << i + 1 << endl;
        cout << "Masukan Nama   : ";
        cin >> siswa[i].nama;
        cout << "Masukan NIM    : ";
        cin >> siswa[i].nim;
        cout << "Nilai Kehadiran: ";
        cin >> siswa[i].kehadiran;
        cout << "Nilai Tugas    : ";
        cin >> siswa[i].tugas;
        cout << "Nilai Quiz     : ";
        cin >> siswa[i].quis;
        cout << "Nilai UTS      : "; 
        cin >> siswa[i].uts;
        cout << "Nilai UAS      : ";
        cin >> siswa[i].uas;

        siswa[i].akhir = siswa[i].kehadiran * 0.05 + siswa[i].quis * 0.10 + siswa[i].tugas * 0.15 + siswa[i].uts * 0.35 + siswa[i].uas * 0.35;
    }

    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(5) << "| No" << setw(15) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(10) << "| Nilai Akhir" << "|" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        cout << left <<setw(5) << i + 1 << setw(15) << siswa[i].nama << setw(10) << siswa[i].nim << setw(10) << siswa[i].kehadiran << setw(10) << siswa[i].tugas << setw(10) << siswa[i].quis << setw(10) << siswa[i].uts << setw(10) << siswa[i].uas << setw(10) << siswa[i].akhir << endl;
    }
    cout << "------------------------------------------------------------------------------------------------" << endl;

    return 0;
}