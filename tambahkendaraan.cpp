#include <iostream>
#include <cstdlib> // Include the <cstdlib> header for the system function

using namespace std;

struct databus {
    char nobus[20];
    char namabus[20];
    char hargabus[20];
    char waktubus[20];
    int kursibus;
};

struct datakereta {
    char nokereta[20];
    char namakereta[20];
    char hargakereta[20];
    char waktukereta[20];
    int kursikereta;
};

struct datapesawat {
    char nopesawat[20];
    char namapesawat[20];
    char hargapesawat[20];
    char waktupesawat[20];
    int kursipesawat;
};

databus nmbh_bus[1000]; // Array of databus
datakereta nmbh_kereta[1000]; // Array of datakereta
datapesawat nmbh_pesawat[1000]; // Array of datapesawat

void nmbhbus() {
    system("cls");

    cout << "Masukkan no bus: ";
    cin >> nmbh_bus[0].nobus;
    cout << "\nMasukkan nama bus: ";
    cin >> nmbh_bus[0].namabus;
    cout << "\nMasukkan Harga Tiket Rp ";
    cin >> nmbh_bus[0].hargabus;
    cout << "\nMasukkan Waktu Keberangkatan: ";
    cin >> nmbh_bus[0].waktubus;
    cout << "\nMasukkan jumlah kursi: ";
    cin >> nmbh_bus[0].kursibus;
}

void nmbhkereta() {
    system("cls");

    cout << "Masukkan no kereta : ";
    cin >> nmbh_kereta[0].nokereta;
    cout << "\nMasukkan nama kereta : ";
    cin >> nmbh_kereta[0].namakereta;
    cout << "\nMasukkan Harga Tiket Rp ";
    cin >> nmbh_kereta[0].hargakereta;
    cout << "\nMasukkan Waktu Keberangkatan: ";
    cin >> nmbh_kereta[0].waktukereta;
    cout << "\nMasukkan jumlah kursi : ";
    cin >> nmbh_kereta[0].kursikereta;
}

void nmbhpesawat() {
    system("cls");

    cout << "Masukkan no pesawat : ";
    cin >> nmbh_pesawat[0].nopesawat;
    cout << "\nMasukkan nama pesawat : ";
    cin >> nmbh_pesawat[0].namapesawat;
    cout << "\nMasukkan Harga Tiket Rp ";
    cin >> nmbh_pesawat[0].hargapesawat;
    cout << "\nMasukkan Waktu Keberangkatan: ";
    cin >> nmbh_pesawat[0].waktupesawat;
    cout << "\nMasukkan jumlah kursi: ";
    cin >> nmbh_pesawat[0].kursipesawat;
}

void lihatbus() {
    cout << "\nNama bus : " << nmbh_bus[0].namabus << endl;
    cout << "Harga tiket Rp " << nmbh_bus[0].hargabus << endl;
    cout << "Waktu Keberangkatan : " << nmbh_bus[0].waktubus << endl;
    cout << "Jumlah Kursi : " << nmbh_bus[0].kursibus << endl;
}

void lihatkereta() {
    cout << "\nNama kereta : " << nmbh_kereta[0].namakereta << endl;
    cout << "Harga tiket Rp " << nmbh_kereta[0].hargakereta << endl;
    cout << "Waktu Keberangkatan : " << nmbh_kereta[0].waktukereta << endl;
    cout << "Jumlah Kursi : " << nmbh_kereta[0].kursikereta << endl;
}

void lihatpesawat() {
    cout << "\nNama pesawat : " << nmbh_pesawat[0].namapesawat << endl;
    cout << "Harga tiket Rp " << nmbh_pesawat[0].hargapesawat << endl;
    cout << "Waktu Keberangkatan : " << nmbh_pesawat[0].waktupesawat << endl;
    cout << "Jumlah Kursi : " << nmbh_pesawat[0].kursipesawat << endl;
}

int main() {
    int pilih;

    cout << "Kendaraan Yang Tersedia" << endl;
    cout << "1. Kereta" << endl;
    cout << "2. Pesawat" << endl;
    cout << "3. Bus" << endl;
    cout << "Pilihan: ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            nmbhkereta();
            lihatkereta();
            break;
        case 2:
            nmbhpesawat();
            lihatpesawat();
            break;
        case 3:
            nmbhbus();
            lihatbus();
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
