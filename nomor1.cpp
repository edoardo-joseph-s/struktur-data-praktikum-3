#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // deklarasi variable
    string nama;
    int nim, kehadiran, tugas, quiz, uts, uas, nilai_akhir;

    // input data mahasiswa
    for (int i = 1; i <= 2; i++)
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
    cout << "+--------------------------------------------------+-------------------+" << endl;
    cout << left << setw(5) << "| No" << setw(10) << "| Nama" << setw(5) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quis" << setw(10) << "| UTS" << setw(10) << "| UAS" << "|" << endl;
    cout << "+----------------------------------------------------------------------+" << endl;

    // menampikan data mahasiswa
    for (int b = 1; b <= 2; b++)
    {
        cout << left << setw(5) << "| " << b << setw(10) << "| " << nama << setw(10) << "| " << kehadiran << setw(10) << "| " << tugas << setw(10) << "| " << quiz << "| " << uts << "| " << uas << "|" << endl;
    }
    cout << "+----------------------------------------------------------------------+" << endl;
    
    
    
}