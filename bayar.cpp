#include <iostream>

using namespace std;

void bayarDenganTunai();
void bayarDenganKartuKredit();
void bayarDenganTransferBank();

void bayar() {
    int pilihan;

    cout << "Menu Pembayaran\n" << endl;
    cout << "1. Tunai\n" << endl;
    cout << "2. Kartu Kredit\n" << endl;
    cout << "3. Transfer Bank\n" << endl;

    cout << "Masukkan pilihan pembayaran: ";
    cin >> pilihan;
    cout << "\n";

    void (*pilihanPembayaran)();

    switch (pilihan) {
        case 1:
            pilihanPembayaran = &bayarDenganTunai;
            break;
        case 2:
            pilihanPembayaran = &bayarDenganKartuKredit;
            break;
        case 3:
            pilihanPembayaran = &bayarDenganTransferBank;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return;
    }

    (*pilihanPembayaran)();
}

void bayarDenganTunai() {
    int *uang = new int;

    cout << "Anda memilih pembayaran dengan tunai.\n" << endl;
    cout << "Masukkan jumlah uang Rp: ";
    cin >> *uang;
    cout << "Pembayaran berhasil." << endl;

    delete uang;
}

void bayarDenganKartuKredit() {
    int *nokrtu = new int;
    int pinkrtu;

    cout << "Anda memilih pembayaran dengan kartu kredit.\n" << endl;
    cout << "Masukkan No Kartu: ";
    cin >> *nokrtu;
    cout << "Masukkan Pin: ";
    cin >> pinkrtu;
    cout << "Pembayaran berhasil." << endl;

    delete nokrtu;
}

void bayarDenganTransferBank() {
    int pil, pinkrtu;

    cout << "Anda memilih pembayaran dengan transfer bank.\n" << endl;
    cout << "Silahkan pilih bank" << endl;
    cout << "1. BRI 2. BNI 3. BCA 4. UOB 5. Lainnya" << endl;
    cout << "Pilihan Anda : ";
    cin >> pil;

    switch (pil) {
        case 1:
            cout << "Anda memilih Bank BRI" << endl;
            break;
        case 2:
            cout << "Anda memilih Bank BNI" << endl;
            break;
        case 3:
            cout << "Anda memilih Bank BCA" << endl;
            break;
        case 4:
            cout << "Anda memilih Bank UOB" << endl;
            break;
        case 5:
            cout << "Anda memilih Bank Lainnya" << endl;
            break;
        default:
            cout << "Kesalahan Input" << endl;
            return;
    }

    cout << "No Virtual Account : 7677542642526" << endl;
    cout << "Masukkan pin : ";
    cin >> pinkrtu;
    cout << "Pembayaran berhasil." << endl;
}

int main() {
    bayar();

    return 0;
}
