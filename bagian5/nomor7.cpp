#include <iostream>
#include <vector>
using namespace std;

struct msk
{
    string judl, penyanyi;
    int tahun_rilis, c_track;
    char album[3];
};

struct rbt_code
{
    msk data_album, rbt;
};

int main() {
    rbt_code data_lagu[20];
    int jumlah_musik;

        cout << "Masukan Jumlah Lagu: ";
        cin >> jumlah_musik;

        if (jumlah_musik < 10) {
            cout << "Jumlah msk yang Anda masukan kurang dari 10." << endl;
            return 1; 
        } else if (jumlah_musik > 20) {
            cout << "Jumlah msk yang Anda masukan lebih dari 20." << endl;
            return 1; 
        }

        for (int i = 0; i < jumlah_musik; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, data_lagu[i].data_album.judl);
            cout << "Penyanyi       : "; getline(cin, data_lagu[i].data_album.penyanyi);
            cout << "Tahun Produksi : "; cin >> data_lagu[i].data_album.tahun_rilis;
            cout << "Nomor Track    : "; cin >> data_lagu[i].data_album.c_track;
            cout << "Kode Album     : "; cin >> data_lagu[i].data_album.album;
        }
    
    for (int i = 0; i < jumlah_musik; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << data_lagu[i].data_album.penyanyi << endl;
        cout << "\tJudul Lagu   : " << data_lagu[i].data_album.judl << endl;
        cout << "\tKode RBT     : " << data_lagu[i].rbt.c_track << "-" << data_lagu[i].data_album.album << endl;
        cout << "\tTahun        : " << data_lagu[i].data_album.tahun_rilis << endl;
    }
}