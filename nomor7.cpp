#include <iostream>
#include <vector>
using namespace std;

// struct lagu
struct lagu
{
    string judul, penyanyi;
    int tahun_produksi, nomor_track;
    char kode_album;
};

// struct kode RBT
struct musik
{
    lagu data_lagu, rbt;
};

int main() {
    // vector menetukan min dan max input
    vector<int> data;
    musik lg[20];
    int jumlah_lagu;

    // input lagu
    for (int i = 0; i < 20; i++)
    {
        int j_lagu;
        cout << "Catatan: Masukan minimal 10 lagu dan maximal 20 lagu." << endl;
        cout << "Masukan Jumlah Lagu: ";
        cin >> jumlah_lagu;

        // minimal dan maximal input lagu
        if (jumlah_lagu >=10 && jumlah_lagu <=20)
        {
            data.push_back(jumlah_lagu);
            jumlah_lagu++;
        } else if (jumlah_lagu <= 10) {
            cout << "Jumlah lagu yang anda masukan kurang dari 10" << endl;
        } else if (jumlah_lagu >= 20) {
            cout << "Jumlah lagu yang anda masukan lebih dari 20" << endl;
        } else {
            cout << "Data yang anda masukan salah" << endl;
        }

        // input data lagu
        for (int i = 0; i < jumlah_lagu; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, lg[i].data_lagu.judul);
            cout << "Penyanyi       : "; getline(cin, lg[i].data_lagu.penyanyi);
            cout << "Tahun Produksi : "; cin >> lg[i].data_lagu.tahun_produksi;
            cout << "Nomor Track    : "; cin >> lg[i].data_lagu.nomor_track;
            cout << "Kode Album     : "; cin >> lg[i].data_lagu.kode_album;
        }
    }

    for (int i = 0; i < jumlah_lagu; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << lg[i].data_lagu.penyanyi << endl;
        cout << "\tJudul Lagu   : " << lg[i].data_lagu.judul << endl;
        cout << "\tKode RBT     : " << lg[i].rbt.nomor_track << "-" << lg[i].data_lagu.kode_album << endl;
        cout << "\tTahun        : " << lg[i].data_lagu.tahun_produksi << endl;
    }
    

}