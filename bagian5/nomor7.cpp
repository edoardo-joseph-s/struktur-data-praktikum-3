#include <iostream>
#include <vector>
using namespace std;

struct msk
{
    string jdl, penyanyi;
    int rilis, track;
    char c_album[3];
};

struct rbt_code
{
    msk albu_date, rbt;
};

int main() {
    rbt_code lagu[20];
    int jmlh;

        cout << "Masukan Jumlah Lagu: ";
        cin >> jmlh;

        if (jmlh < 10) {
            cout << "Jumlah msk yang Anda masukan kurang dari 10." << endl;
            return 1; 
        } else if (jmlh > 20) {
            cout << "Jumlah msk yang Anda masukan lebih dari 20." << endl;
            return 1; 
        }

        for (int i = 0; i < jmlh; i++)
        {
            cout << "\nDate ke-" << i + 1 << ":\n";
            cout << "Judul Lagu     : "; cin.ignore(); getline(cin, lagu[i].albu_date.jdl);
            cout << "Penyanyi       : "; getline(cin, lagu[i].albu_date.penyanyi);
            cout << "Tahun Produksi : "; cin >> lagu[i].albu_date.rilis;
            cout << "Nomor Track    : "; cin >> lagu[i].albu_date.track;
            cout << "Kode Album     : "; cin >> lagu[i].albu_date.c_album;
        }
    
    for (int i = 0; i < jmlh; i++)
    {
        cout << "Data ke-" << i + 1 << "\n";
        cout << "--------------------------------" << endl;
        cout << "\tPenyanyi     : " << lagu[i].albu_date.penyanyi << endl;
        cout << "\tJudul Lagu   : " << lagu[i].albu_date.jdl << endl;
        cout << "\tKode RBT     : " << lagu[i].rbt.track << "-" << lagu[i].albu_date.c_album << endl;
        cout << "\tTahun        : " << lagu[i].albu_date.rilis << endl;
    }
}