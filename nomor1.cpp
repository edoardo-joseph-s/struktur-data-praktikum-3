#include <iostream>
#include <iomanip>
using namespace std;

// deklarasi struct untuk data mahasiswa
struct Data {
    string nama;
    int nim, kehadiran, tugas, quiz, uts, uas, nilai_akhir;
};

int main() {
    // deklarasi array untuk 6 mahasiswa
    // entah kenapa kalau ga pake ini error
    Data mhs[6];

    // input data mahasiswa
    for (int i = 0; i < 2; i++) {
        cout << "\nData Siswa Ke-" << i + 1 << endl;
        cout << "Masukan Nama    : ";
        cin >> mhs[i].nama;
        cout << "Masukan NIM     : ";
        cin >> mhs[i].nim;
        cout << "Nilai Kehadiran : ";
        cin >> mhs[i].kehadiran;
        cout << "Nilai Tugas     : ";
        cin >> mhs[i].tugas;
        cout << "Nilai Quiz      : ";
        cin >> mhs[i].quiz;
        cout << "Nilai UTS       : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS       : ";
        cin >> mhs[i].uas;

        // menghitung nilai akhir
        mhs[i].nilai_akhir = mhs[i].kehadiran * 0.05 + mhs[i].quiz * 0.10 + mhs[i].tugas * 0.15 + mhs[i].uts * 0.35 + mhs[i].uas * 0.35;
    }

    // header tabel
    system ("CLS");
    cout << "+-------------------------------------------------------------------------------------------+" << endl;
    cout << left << setw(5) << "| No" << setw(13) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(10) << "| Nilai Akhir" << "|" << endl;
    cout << "+-------------------------------------------------------------------------------------------+" << endl;

    // menampilkan data mahasiswa
    for (int i = 0; i < 2; i++) {
        cout << setiosflags(ios::left) << setw(4) << "| " << i + 1;
        cout << setiosflags(ios::left) << setw(5) << "| " << mhs[i].nama;
        cout << setiosflags(ios::left) << setw(8) << "| " << mhs[i].nim;
        cout << setiosflags(ios::left) << setw(9) << "| " << mhs[i].kehadiran;
        cout << setiosflags(ios::left) << setw(8) << "| " << mhs[i].tugas;
        cout << setiosflags(ios::left) << setw(8) << "| " << mhs[i].quiz;
        cout << setiosflags(ios::left) << setw(8) << "| " << mhs[i].uts;
        cout << setiosflags(ios::left) << setw(8) << "| " << mhs[i].uas;
        cout << setiosflags(ios::left) << setw(11) << "| " << mhs[i].nilai_akhir << "|" << endl;
    }
    cout << "+-------------------------------------------------------------------------------------------+" << endl;

    return 0;
}