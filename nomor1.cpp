#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    // deklarasi variable
    struct Student {
        string nama;
        int nim, kehadiran, tugas, quiz, uts, uas;
        double nilai_akhir;
    };

    vector<Student> students(6);

    // input data mahasiswa
    for (int i = 0; i < 6; i++)
    {
        cout << "\nData Siswa Ke-" << i + 1;
        cout << "\nMasukan Nama    : ";
        cin >> students[i].nama;
        cout << "Masukan NIM     : ";
        cin >> students[i].nim;
        cout << "Nilai Kehadiran : ";
        cin >> students[i].kehadiran;
        cout << "Nilai Tugas     : ";
        cin >> students[i].tugas;
        cout << "Nilai Quiz      : ";
        cin >> students[i].quiz;
        cout << "Nilai UTS       : ";
        cin >> students[i].uts;
        cout << "Nilai UAS       : ";
        cin >> students[i].uas;

        // menghitung nilai akhir
        students[i].nilai_akhir = students[i].kehadiran*0.05 + students[i].quiz*0.10 + students[i].tugas*0.15 + students[i].uts*0.35 + students[i].uas*0.35;
    }

    // header tabel
    cout << "+------------------------------------------------------------------------------+" << endl;
    cout << left << setw(5) << "| No" << setw(15) << "| Nama" << setw(10) << "| NIM" << setw(10) << "| Kehadiran" << setw(10) << "| Tugas" << setw(10) << "| Quiz" << setw(10) << "| UTS" << setw(10) << "| UAS" << setw(10) << "| Nilai Akhir |" << endl;
    cout << "+------------------------------------------------------------------------------+" << endl;

    // menampilkan data mahasiswa
    for (int i = 0; i < 6; i++)
    {
        cout << left << setw(5) << "| " << i + 1
             << setw(15) << "| " << students[i].nama
             << setw(10) << "| " << students[i].nim
             << setw(10) << "| " << students[i].kehadiran
             << setw(10) << "| " << students[i].tugas
             << setw(10) << "| " << students[i].quiz
             << setw(10) << "| " << students[i].uts
             << setw(10) << "| " << students[i].uas
             << setw(12) << "| " << fixed << setprecision(2) << students[i].nilai_akhir << "|" << endl;
    }   
    cout << "+------------------------------------------------------------------------------+" << endl;
    
    return 0;
}
