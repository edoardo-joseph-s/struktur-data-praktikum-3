#include <iostream>
#include <vector>
using namespace std;

// struct lagu
struct lagu
{
    string judul, penyanyi;
    int tahun_produksi, nomor_track, kode_album;
};

// struct kode RBT
struct code_rbt
{
    char rbt[3];
};

int main() {
    // vector menetukan min dan max input
    vector<int> data;
    lagu lg[20];
    int jumlah_lagu = 0;

    // input lagu
    for (int i = 0; i < 20; i++)
    {
        int j_lagu;
        cout << "Catatan: Masukan minimal 10 lagu dan maximal 20 lagu." << endl;
        cout << "Masukan Jumlah Lagu: ";
        cin >> j_lagu;

        // minimal dan maximal input lagu
        if (j_lagu >=10 && j_lagu <=20)
        {
            data.push_back(j_lagu);
            jumlah_lagu++;
        } else if (j_lagu <= 10) {
            cout << "Jumlah lagu yang anda masukan kurang dari 10" << endl;
        } else if (j_lagu >= 20) {
            cout << "Jumlah lagu yang anda masukan lebih dari 20" << endl;
        } else {
            cout << "Data yang anda masukan salah" << endl;
        }

        // input data lagu
        for (int i = 0; i < jumlah_lagu; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":" << endl;
            cout << "Judul Lagu     : "; cin >> lg[i].judul;
            cout << "Penyanyi       : "; cin >> lg[i].penyanyi;
            cout << "Tahun Produksi : "; cin >> lg[i].tahun_produksi;
            cout << "Nomor Track    : "; cin >> lg[i].nomor_track;
            cout << "Kode Album     : "; cin >> lg[i].kode_album;
        }
        
    }

}