#include <iostream>
#include <string>

using namespace std;

void asal() {
    int pilihan;
    string asal[] = {"Jakarta", "Surabaya", "Bandung", "Yogyakarta", "Semarang"};

    int jumlahKota = sizeof(asal) / sizeof(asal[0]);

    cout << "Pilih kota asal:" << endl;
    for (int i = 0; i < jumlahKota; ++i) {
        cout << i + 1 << ". " << asal[i] << endl;
    }
    cout << "\nMasukkan Asal Kota : ";
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= jumlahKota) {
        string asalKota;
        switch (pilihan) {
            case 1:
                asalKota = "Jakarta";
                break;
            case 2:
                asalKota = "Surabaya";
                break;
            case 3:
                asalKota = "Bandung";
                break;
            case 4:
                asalKota = "Yogyakarta";
                break;
            case 5:
                asalKota = "Semarang";
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                return;
        }
        cout << "Anda memilih kota " << asalKota << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
        return;
    }
}

void tujuan() {
    int pilihan2;
    string tujuan[] = {"Jakarta", "Surabaya", "Bandung", "Yogyakarta", "Semarang"};

    int jumlahKota = sizeof(tujuan) / sizeof(tujuan[0]);
    cout << "Pilih kota tujuan:" << endl;
    for (int i = 0; i < jumlahKota; ++i) {
        cout << i + 1 << ". " << tujuan[i] << endl;
    }
    cout << "\nMasukkan Tujuan Kota : ";
    cin >> pilihan2;

    if (pilihan2 >= 1 && pilihan2 <= jumlahKota) {
        string tujuanKota;
        switch (pilihan2) {
            case 1:
                tujuanKota = "Jakarta";
                break;
            case 2:
                tujuanKota = "Surabaya";
                break;
            case 3:
                tujuanKota = "Bandung";
                break;
            case 4:
                tujuanKota = "Yogyakarta";
                break;
            case 5:
                tujuanKota = "Semarang";
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                return;
        }
        cout << "Anda memilih kota " << tujuanKota << "\n" << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
        return;
    }
}

int main() {
    asal();
    tujuan();

    return 0;
}