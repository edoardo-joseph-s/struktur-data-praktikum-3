#include <iostream>
using namespace std;

int main() {
    // deklarasi variable
    string nama;
    int nim, kehadiran, tugas, quiz, uts, uas, nilai_akhir;

    // input data mahasiswa
    for (int i = 1; i <= 6; i++)
    {
        cout << "\nData Siswa Ke-" << i;
        cout << "Masukan Nama    : ";
        cin >> nama;
        cout << "Masukan NIM     : ";
        cin >> nim;
        cout << "Nilai Kehadiran : ";
        cin >> kehadiran;
        cout << "Nilai Tugas     : ";
        cin >> tugas;
        cout << "Nilai Quiz      : ";
        cin >> quiz;
        cout << "Nilai UTS       : ";
        cin >> uts;
        cout << "Nilai UAS       : ";
        cin >> uas;
    }

    // menghitung nilai akhir
    nilai_akhir = kehadiran*0.05 + quiz*0.10 + tugas*0.15 + uts*0.35 + uas*0.35;

    cout << left << setw(3) << "No" << setw(10) << "Nama" << setw(10) << "NIM" << setw(10) << "Kehadiran" << setw(10) << "Tugas" << setw(10) << "Quis" << setw << "UTS" << setw(10) << "UAS" << endl;

    for (int b = 1; b <= 6; b++)
    {
        /* code */
    }
    
    
}