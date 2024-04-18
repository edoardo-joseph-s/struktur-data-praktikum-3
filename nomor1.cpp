#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // deklarasi variable
    string nama;
    int nim, kehadiran, tugas, quiz, uts, uas, nilai_akhir;

    // input data mahasiswa
    for (int i = 1; i <= 1; i++)
    {
        cout << "\nData Siswa Ke-" << i;
        cout << "\nMasukan Nama    : ";
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

    // header rabel
    cout << "+------------------------------------------------------------------------------+" << endl;
    cout << left << setw(5) << "| No" << setw(13) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quis" << setw(10) << "| UTS" << setw(10) << "| UAS" << "|" << endl;
    cout << "+------------------------------------------------------------------------------+" << endl;

    // menampikan data mahasiswa
    for (int b = 1; b <= 1; b++)
    {
    cout << left << setw(4) << "| " << b << setw(10) << "| " << nama << setw(8) << "| " << nim << setw(9) << "| " << kehadiran << setw(8) << "| " << tugas << setw(8) << "| " << quiz << setw(8) << "| " << uts << setw(8) << "| " << uas << "|" << endl;
    }
    cout << "+------------------------------------------------------------------------------+" << endl;
    
    
    
}