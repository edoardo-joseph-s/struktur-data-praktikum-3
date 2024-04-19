#include <iostream>
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
    int jumlah_lagu = 0;

    for (int i = 0; i < 20; i++)
    {
        int j_lagu;
        cout << "Catatan: Masukan minimal 10 lagu dan maximal 20 lagu." << endl;
        cout << "Masukan Jumlah Lagu: ";
        cin >> j_lagu;

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
        
    }
    
    
    cout << "\t\tData Album Lagu" << endl;


}