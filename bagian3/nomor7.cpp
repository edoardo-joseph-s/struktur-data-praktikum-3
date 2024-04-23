#include <iostream>
#include <vector>
using namespace std;

struct msk
{
    string judul, penyanyi;
    int tahun, nt;
    char code_album[3];
};

struct rbt_code
{
    msk data_lagu, rbt;
};

int main() {
    rbt_code lagu[20];
    int jumlahLagu;

        cout << "Masukan Jumlah Lagu: ";
        cin >> jumlahLagu;

        if (jumlahLagu < 10) {
            cout << "Jumlah msk yang Anda masukan kurang dari 10." << endl;
            return 1; 
        } else if (jumlahLagu > 20) {
            cout << "Jumlah msk yang Anda masukan lebih dari 20." << endl;
            return 1; 
        }

        for (int i = 0; i < jumlahLagu; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, lagu[i].data_lagu.judul);
            cout << "Penyanyi       : "; getline(cin, lagu[i].data_lagu.penyanyi);
            cout << "Tahun Produksi : "; cin >> lagu[i].data_lagu.tahun;
            cout << "Nomor Track    : "; cin >> lagu[i].data_lagu.nt;
            cout << "Kode Album     : "; cin >> lagu[i].data_lagu.code_album;
        }
    
    for (int i = 0; i < jumlahLagu; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << lagu[i].data_lagu.penyanyi << endl;
        cout << "\tJudul Lagu   : " << lagu[i].data_lagu.judul << endl;
        cout << "\tKode RBT     : " << lagu[i].rbt.nt << "-" << lagu[i].data_lagu.code_album << endl;
        cout << "\tTahun        : " << lagu[i].data_lagu.tahun << endl;
    }
}