#include <iostream>
using namespace std;

struct lagu
{
    string judul, penyanyi;
    int tahun_produksi, nomor_track;
    char code_album[3];
};

struct codeRBT
{
    lagu data_lagu, rbt;
};

int main() {
    codeRBT lg[20];
    int Jlagu;

        cout << "Masukan Jumlah Lagu: ";
        cin >> Jlagu;

        if (Jlagu < 10) {
            cout << "Jumlah lagu yang Anda masukan kurang dari 10." << endl;
            return 1; 
        } else if (Jlagu > 20) {
            cout << "Jumlah lagu yang Anda masukan lebih dari 20." << endl;
            return 1; 
        }

        for (int i = 0; i < Jlagu; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, lg[i].data_lagu.judul);
            cout << "Penyanyi       : "; getline(cin, lg[i].data_lagu.penyanyi);
            cout << "Tahun Produksi : "; cin >> lg[i].data_lagu.tahun_produksi;
            cout << "Nomor Track    : "; cin >> lg[i].data_lagu.nomor_track;
            cout << "Kode Album     : "; cin >> lg[i].data_lagu.code_album;
        }
    
    for (int i = 0; i < Jlagu; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << lg[i].data_lagu.penyanyi << endl;
        cout << "\tJudul Lagu   : " << lg[i].data_lagu.judul << endl;
        cout << "\tKode RBT     : " << lg[i].rbt.nomor_track << "-" << lg[i].data_lagu.code_album << endl;
        cout << "\tTahun        : " << lg[i].data_lagu.tahun_produksi << endl;
    }
}