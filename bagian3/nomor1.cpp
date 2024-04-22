#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct DataMahasiswa {
    string nama; 
    int nim, kehadiran, tugas, quis, uts, uas;
    double akhir;
};

int main() {
    const int jumlah_mahasiswa = 6;
    DataMahasiswa mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << "\nNomor. " << i + 1 << endl;
        cout << "Masukkan Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nilai Kehadiran: ";
        cin >> mahasiswa[i].kehadiran;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;
        cout << "Nilai Quiz: ";
        cin >> mahasiswa[i].quis;
        cout << "Nilai UTS: "; 
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> mahasiswa[i].uas;

        mahasiswa[i].akhir = mahasiswa[i].kehadiran * 0.05 + mahasiswa[i].quis * 0.10 + mahasiswa[i].tugas * 0.15 + mahasiswa[i].uts * 0.35 + mahasiswa[i].uas * 0.35;
    }

    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(5) << "| No" << setw(15) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(12) << "| Nilai Akhir" << "|" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        cout << left << setw(5) << i + 1 << setw(15) << mahasiswa[i].nama << setw(10) << mahasiswa[i].nim << setw(10) << mahasiswa[i].kehadiran << setw(10) << mahasiswa[i].tugas << setw(10) << mahasiswa[i].quis << setw(10) << mahasiswa[i].uts << setw(10) << mahasiswa[i].uas << setw(12) << fixed << setprecision(2) << mahasiswa[i].akhir << endl;
    }
    cout << "------------------------------------------------------------------------------------------------" << endl;

    return 0;
}
