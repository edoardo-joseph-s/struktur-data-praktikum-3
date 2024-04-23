#include <iostream>
#include <vector>
using namespace std;

struct msk
{
    string judul_lagi, penyanyi_lagu;
    int rilis_lagu, track_lagu;
    char album[3];
};

struct rbt_code
{
    msk data_album, rbt;
};

int main() {
    rbt_code data_lagu[20];
    int total_lagu;

        cout << "Masukan Jumlah Lagu: ";
        cin >> total_lagu;

        if (total_lagu < 10) {
            cout << "Jumlah msk yang Anda masukan kurang dari 10." << endl;
            return 1; 
        } else if (total_lagu > 20) {
            cout << "Jumlah msk yang Anda masukan lebih dari 20." << endl;
            return 1; 
        }

        for (int i = 0; i < total_lagu; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, data_lagu[i].data_album.judul_lagi);
            cout << "Penyanyi       : "; getline(cin, data_lagu[i].data_album.penyanyi_lagu);
            cout << "Tahun Produksi : "; cin >> data_lagu[i].data_album.rilis_lagu;
            cout << "Nomor Track    : "; cin >> data_lagu[i].data_album.track_lagu;
            cout << "Kode Album     : "; cin >> data_lagu[i].data_album.album;
        }
    
    for (int i = 0; i < total_lagu; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << data_lagu[i].data_album.penyanyi_lagu << endl;
        cout << "\tJudul Lagu   : " << data_lagu[i].data_album.judul_lagi << endl;
        cout << "\tKode RBT     : " << data_lagu[i].rbt.track_lagu << "-" << data_lagu[i].data_album.album << endl;
        cout << "\tTahun        : " << data_lagu[i].data_album.rilis_lagu << endl;
    }
}