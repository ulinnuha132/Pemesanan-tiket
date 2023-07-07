#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>


// rapiiin cokkk
using namespace std;

void bayarDenganTunai();
void bayarDenganKartuKredit();
void bayarDenganTransferBank();

const string kota[] = {"Jakarta", "pacitan", "Bandung", "Djogjaa", "Semarng"};
const int jumlahKota = sizeof(kota) / sizeof(kota[0]);

struct koota {
    string asalkota;
    string tujuankota;
};
koota nmbh_kota[1000];

void asaltujuan() {
    system("cls");

    cout << "=============================================================" << endl;
    cout << "|\t\tPilih Asal dan Tujuan Kota\t\t|" << endl;
    cout << "=============================================================" << endl;

    cout << "No\t" << "Kota Asal" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlahKota; i++) {
        cout << i + 1 << "\t" << kota[i] << endl;
    }

    int pilihanAsal, pilihanTujuan;
    cout << "\nPilih Kota Asal: ";
    cin >> pilihanAsal;

    if (pilihanAsal < 1 || pilihanAsal > jumlahKota) {
        cout << "Pilihan Kota Asal tidak valid." << endl;
        return;
    }

    cout << "\nPilih Kota Tujuan: ";
    cin >> pilihanTujuan;

    if (pilihanTujuan < 1 || pilihanTujuan > jumlahKota) {
        cout << "Pilihan Kota Tujuan tidak valid." << endl;
        return;
    }

    nmbh_kota[0].asalkota = kota[pilihanAsal - 1];
    nmbh_kota[0].tujuankota = kota[pilihanTujuan - 1];

    cout << "\nKota Asal: " << nmbh_kota[0].asalkota << endl;
    cout << "Kota Tujuan: " << nmbh_kota[0].tujuankota << endl;
}
struct biaya{
    string harga;
    string kembbalian;
};
biaya hi_biayaa[1000];

void bayar() {
    int pilihan;
    system("cls");
    cout << "=================================" << endl;
    cout << "|\tMENU PEMBAYARAN\t\t|" << endl;
    cout << "=================================" << endl;

    if (nmbh_kota[0].asalkota == kota[0] && nmbh_kota[0].tujuankota == kota[1]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[0] && nmbh_kota[0].tujuankota == kota[2]) {
        cout << "Harga tiket Rp 250.000" << endl;
        hi_biayaa[0].harga = "250000";
    } else if (nmbh_kota[0].asalkota == kota[0] && nmbh_kota[0].tujuankota == kota[3]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[0] && nmbh_kota[0].tujuankota == kota[4]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[1] && nmbh_kota[0].tujuankota == kota[0]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[1] && nmbh_kota[0].tujuankota == kota[2]) {
        cout << "Harga tiket Rp 250.000" << endl;
        hi_biayaa[0].harga = "250000";
    } else if (nmbh_kota[0].asalkota == kota[1] && nmbh_kota[0].tujuankota == kota[3]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[1] && nmbh_kota[0].tujuankota == kota[4]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[2] && nmbh_kota[0].tujuankota == kota[0]) {
        cout << "Harga tiket Rp 250.000" << endl;
        hi_biayaa[0].harga = "250000";
    } else if (nmbh_kota[0].asalkota == kota[2] && nmbh_kota[0].tujuankota == kota[1]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[2] && nmbh_kota[0].tujuankota == kota[3]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[2] && nmbh_kota[0].tujuankota == kota[4]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[3] && nmbh_kota[0].tujuankota == kota[0]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[3] && nmbh_kota[0].tujuankota == kota[1]) {
        cout << "Harga tiket Rp 250.000" << endl;
        hi_biayaa[0].harga = "250000";
    } else if (nmbh_kota[0].asalkota == kota[3] && nmbh_kota[0].tujuankota == kota[2]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[3] && nmbh_kota[0].tujuankota == kota[4]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[4] && nmbh_kota[0].tujuankota == kota[0]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else if (nmbh_kota[0].asalkota == kota[4] && nmbh_kota[0].tujuankota == kota[1]) {
        cout << "Harga tiket Rp 250.000" << endl;
        hi_biayaa[0].harga = "250000";
    } else if (nmbh_kota[0].asalkota == kota[4] && nmbh_kota[0].tujuankota == kota[2]) {
        cout << "Harga tiket Rp 550.000" << endl;
        hi_biayaa[0].harga = "550000";
    } else if (nmbh_kota[0].asalkota == kota[4] && nmbh_kota[0].tujuankota == kota[3]) {
        cout << "Harga tiket Rp 750.000" << endl;
        hi_biayaa[0].harga = "750000";
    } else {
        cout << "Pilihan tidak valid." << endl;
        return;
    }

    cout << "Jumlah yang harus anda bayar adalah Rp " << hi_biayaa[0].harga << endl;
    cout << "\n1. Tunai" << endl;

    cout << "2. Kartu Kredit" << endl;
    cout << "3. Transfer Bank" << endl;

    cout << "\nMasukkan pilihan pembayaran: ";
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
    cout << "\nMasukkan jumlah uang Rp: ";
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


struct waktu {
    string waktuu;
};

waktu nmbh_wktu;
const string jam[] = {"04:35", "07:10", "09:40", "10:35", "12:15", "14:55", "18:35", "21:55", "00:35"};
const int jumlahjam = sizeof(jam) / sizeof(jam[0]);

void pilihwaktu(){
    cout << "=============================================================" << endl;
    cout << "|\t\tPilih Waktu Keberangkatan\t\t|" << endl;
    cout << "=============================================================" << endl;

    cout << "No\t" << "Jam" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlahjam; i++) {
        cout << i + 1 << "\t" << jam[i] << endl;
    }

    int choice;
    cout << "\nPilih Nomor Jam Keberangkatan : ";
    cin >> choice;

    if (choice >= 1 && choice <= jumlahjam) {
        nmbh_wktu.waktuu = jam[choice - 1];
        cout << "\n\nJam Keberangkatan: " << nmbh_wktu.waktuu << endl;
    } else {
        cout << "\nInvalid choice. Please select a valid number.\n";
    }
}


struct Tiket
{
    string namaPenumpang;
    string kotaAsal;
    string kotaTujuan;
};

void pesanTiketKereta(stack<Tiket> &tiketStack, queue<Tiket> &tiketQueue)
{
    Tiket tiket;
    cout << "NB.Masukkan 8 digit character nama. contoh : wahyutri / ulinnuha "<< endl;
    cout << "Masukkan Nama Penumpang: ";
    cin.ignore();
    getline(cin, tiket.namaPenumpang);
    asaltujuan();
    pilihwaktu();
    bayar();

    tiketStack.push(tiket);
    tiketQueue.push(tiket);

    cout << "Tiket berhasil dipesan!" << endl;
}

void tampilkanTiketStack(stack<Tiket> &tiketStack) {
    if (tiketStack.empty()) {
        cout << "Belum ada tiket yang dipesan." << endl;
        return;
    }

    cout << "Daftar Tiket Kereta (dalam urutan pemesanan terbalik):" << endl;
    cout << "=========================================================================================" << endl;
    cout << "|NO|\tNAMAA\t\t|\tDARI\t\t\t|\tTUJUAN\t\t| WAKTU" << endl;
    cout << "=========================================================================================" << endl;

    stack<Tiket> tempStack = tiketStack;
    int nomor = 1;

    while (!tempStack.empty()) {
        Tiket tiket = tempStack.top();
        cout << "|" << nomor << "|\t" << tiket.namaPenumpang << "\t|\t"<< nmbh_kota[0].asalkota << "\t\t\t|\t" << nmbh_kota[0].tujuankota << "\t\t| " << nmbh_wktu.waktuu << " |" << endl;
        tempStack.pop();
        nomor++;
    }
    system("pause");
}

void tampilkanTiketQueue(queue<Tiket> &tiketQueue)
{
    if (tiketQueue.empty())
    {
        cout << "Belum ada tiket yang dipesan." << endl;
        return;
    }

    cout << "Daftar Tiket Kereta (dalam urutan pemesanan):" << endl;
    cout << "=========================================================================================" << endl;
    cout << "|\tNAMAA\t\t\t|\tDARI\t\t|\tTUJUAN\t\t| WAKTU |" << endl;
    cout << "=========================================================================================" << endl;
    queue<Tiket> tempQueue = tiketQueue;
    while (!tempQueue.empty())
    {
        Tiket tiket = tempQueue.front();
        cout << "|\t" << tiket.namaPenumpang << "\t\t|\t"<< nmbh_kota[0].asalkota << "\t\t|\t" << nmbh_kota[0].tujuankota << "\t\t| " << nmbh_wktu.waktuu << " |" << endl;
        tempQueue.pop();
    }
    system("pause");
}
/*
void sortingTiketStack(stack<Tiket> &tiketStack)
{
    vector<Tiket> tiketVector;
    while (!tiketStack.empty())
    {
        tiketVector.push_back(tiketStack.top());
        tiketStack.pop();
    }

    sort(tiketVector.begin(), tiketVector.end(), [](const Tiket &tiket1, const Tiket &tiket2)
         { return tiket1.namaPenumpang < tiket2.namaPenumpang; });

    for (const Tiket &tiket : tiketVector)
    {
        tiketStack.push(tiket);
    }

    cout << "Tiket berhasil diurutkan berdasarkan nama penumpang secara ascending pada stack." << endl;
}
*/
void pesanTiketPesawat(queue<Tiket> &tiketQueue)
{
    Tiket tiket;

    cout << "Masukkan Nama Penumpang: ";
    cin.ignore();
    getline(cin, tiket.namaPenumpang);
    asaltujuan();
    pilihwaktu();
    bayar();

    
    tiketQueue.push(tiket);

    cout << "Tiket berhasil dipesan!" << endl;
}

void tampilkanDaftarTiketPesawat(queue<Tiket> &tiketQueue)
{
    system ("cls");
    if (tiketQueue.empty())
    {
        cout << "Belum ada tiket yang dipesan." << endl;
        return;
    }

    cout << "Daftar Tiket Pesawat:" << endl;
    int i = 1;
    queue<Tiket> tempQueue = tiketQueue;
    while (!tempQueue.empty())
    {
        Tiket tiket = tempQueue.front();
        cout << "=========================================================================================" << endl;
        cout << "|NO|\tNAMAA\t\t|\tDARI\t\t\t|\tTUJUAN\t\t| WAKTU" << endl;
        cout << "=========================================================================================" << endl;

        cout << "|" << i << "|\t" << tiket.namaPenumpang << "\t|\t"<< nmbh_kota[0].asalkota << "\t\t\t|\t" << nmbh_kota[0].tujuankota << "\t\t| " << nmbh_wktu.waktuu << " |" << endl;

        tempQueue.pop();
        i++;
    }
system("pause");
}

void batalkanTiketPesawat(queue<Tiket> &tiketQueue)
{
    system ("cls");
    if (tiketQueue.empty())
    {
        cout << "Belum ada tiket yang dipesan." << endl;
        return;
    }

    tampilkanDaftarTiketPesawat(tiketQueue);

    int nomorTiket;
    cout << "Masukkan nomor tiket yang ingin dibatalkan: ";
    cin >> nomorTiket;

    int jumlahTiket = tiketQueue.size();

    if (nomorTiket < 1 || nomorTiket > jumlahTiket)
    {
        cout << "Nomor tiket tidak valid." << endl;
        return;
    }

    queue<Tiket> tempQueue;
    for (int i = 1; i <= jumlahTiket; i++)
    {
        Tiket tiket = tiketQueue.front();
        tiketQueue.pop();

        if (i != nomorTiket)
        {
            tempQueue.push(tiket);
        }
    }

    tiketQueue = tempQueue;

    cout << "Tiket berhasil dibatalkan!" << endl;
}

void cariTiket(stack<Tiket> &tiketStack, const string &namaPenumpang)
{
    system ("cls");
    stack<Tiket> tempStack;
    bool found = false;

    while (!tiketStack.empty())
    {
        Tiket tiket = tiketStack.top();
        tiketStack.pop();

        if (tiket.namaPenumpang == namaPenumpang)
        {
            cout << "=========================================================================================" << endl;
            cout << "|\tNAMAA\t\t\t|\tDARI\t\t|\tTUJUAN\t\t| WAKTU |" << endl;
            cout << "=========================================================================================" << endl;

            cout << "|\t" << tiket.namaPenumpang << "\t\t|\t"<< nmbh_kota[0].asalkota << "\t\t|\t" << nmbh_kota[0].tujuankota << "\t\t| " << nmbh_wktu.waktuu << " |" << endl;
            found = true;
            break;
        }

        tempStack.push(tiket);
    }

    while (!tempStack.empty())
    {
        tiketStack.push(tempStack.top());
        tempStack.pop();
    }

    if (!found)
    {
        cout << "Tiket tidak ditemukan." << endl;
    }
system("pause");
}

void menuPencarian(stack<Tiket> &tiketStack)
{
    system ("cls");
    string namaPenumpang;
    cout << "Masukkan nama penumpang yang ingin dicari: ";
    cin.ignore();
    getline(cin, namaPenumpang);

    cariTiket(tiketStack, namaPenumpang);
    system("pause");
}

void pesanTiketBis(stack<Tiket> &tiketBisStack)
{
    system ("cls");
    Tiket tiket;
    cin.ignore();

    cout << "Masukkan Nama Penumpang: ";
    getline(cin, tiket.namaPenumpang);
    asaltujuan();
    pilihwaktu();
    bayar();

    tiketBisStack.push(tiket);

    cout << "Tiket bis berhasil dipesan!" << endl;
}

void tampilkanTiketBis(stack<Tiket> &tiketBisStack)
{
    system ("cls");
    if (tiketBisStack.empty())
    {
        cout << "Belum ada tiket bis yang dipesan." << endl;
        return;
    }

    cout << "Daftar Tiket Bis:" << endl;
    int i = 1;
    stack<Tiket> tempStack = tiketBisStack;
    while (!tempStack.empty())
    {
        Tiket tiket = tempStack.top();
        cout << "=========================================================================================" << endl;
        cout << "|NO|\tNAMAA\t\t|\tDARI\t\t\t|\tTUJUAN\t\t| WAKTU" << endl;
        cout << "=========================================================================================" << endl;

        cout << "|" << i << "|\t" << tiket.namaPenumpang << "\t|\t"<< nmbh_kota[0].asalkota << "\t\t\t|\t" << nmbh_kota[0].tujuankota << "\t\t| " << nmbh_wktu.waktuu << " |" << endl;


        tempStack.pop();
        i++;
    }
system("pause");
}

void menuKereta(stack<Tiket> &tiketStack, queue<Tiket> &tiketQueue)
{
    int pilihan;

    do
    {
        system("cls");
        cout << "=================================================================================" << endl;
        cout << "|\t\tSelamat datang di aplikasi pemesanan tiket kereta! \t\t|" << endl;
        cout << "=================================================================================" << endl;
        cout << "Menu:" << endl << endl;
        cout << "1. Pesan Tiket" << endl;
        cout << "2. Tampilkan Daftar Tiket (Stack)" << endl;
        cout << "3. Tampilkan Daftar Tiket (Queue)" << endl;
        cout << "4. Urutkan Tiket (Stack)" << endl;
        cout << "5. Pencarian nama" << endl;
        cout << "0. Kembali" << endl << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            pesanTiketKereta(tiketStack, tiketQueue);
            break;
        case 2:
            tampilkanTiketStack(tiketStack);
            break;
        case 3:
            tampilkanTiketQueue(tiketQueue);
            break;
        case 4:/*
            sortingTiketStack(tiketStack); */
            break;
        case 5:
            menuPencarian(tiketStack);
            break;
        case 0:
            cout << "Terima kasih telah menggunakan aplikasi pemesanan tiket kereta. Sampai jumpa lagi!" << endl;
            cout << "Kembali ke menu utama." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }

        cout << endl;
    } while (pilihan != 0);
}

void menuPesawat(queue<Tiket> &tiketQueue)
{
    int pilihan;

    do
    {
        system("cls");
        cout << "=================================================================================" << endl;
        cout << "|\t\tSelamat datang di aplikasi pemesanan tiket pesawat! \t\t|" << endl;
        cout << "=================================================================================" << endl;
        cout << "Menu:" << endl << endl;
        cout << "1. Pesan Tiket" << endl;
        cout << "2. Tampilkan Daftar Tiket" << endl;
        cout << "3. Batalkan Tiket" << endl;
        cout << "0. Keluar" << endl << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            pesanTiketPesawat(tiketQueue);
            break;
        case 2:
            tampilkanDaftarTiketPesawat(tiketQueue);
            break;
        case 3:
            batalkanTiketPesawat(tiketQueue);
            break;
        case 0:
            cout << "Terima kasih telah menggunakan aplikasi pemesanan tiket Pesawat. Sampai jumpa lagi!" << endl;
            cout << "Kembali ke menu utama." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }

        cout << endl;
    } while (pilihan != 0);
}

void menuBis(stack<Tiket> &tiketBisStack)
{
    int pilihan;

    do
    {
        system("cls");
        cout << "=================================================================================" << endl;
        cout << "|\t\tSelamat datang di aplikasi pemesanan tiket bis! \t\t|" << endl;
        cout << "=================================================================================" << endl;
        cout << "Menu Pemesanan Tiket Bis:" << endl << endl;
        cout << "1. Pesan Tiket Bis" << endl;
        cout << "2. Tampilkan Daftar Tiket Bis" << endl;
        cout << "0. Kembali ke Menu Utama" << endl << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            pesanTiketBis(tiketBisStack);
            break;
        case 2:
            tampilkanTiketBis(tiketBisStack);
            break;
        case 0:
            cout << "Terima kasih telah menggunakan aplikasi pemesanan tiket Bis. Sampai jumpa lagi!" << endl;
            cout << "Kembali ke Menu Utama." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }

        cout << endl;
    } while (pilihan != 0);
}

void login(){
	system ("cls");

	string pass;
	string email;
	
    cout << "\t===================================="<<endl;
	cout << "\t\tMASUKKAN EMAIL    : ";
	cin >> email;
	cout << "\t\tMASUKKAN PASSWORD : ";
	cin >> pass;
    cout << "\t===================================="<<endl;
}
void sign_up(){
	system ("cls");
	string nama;
	string email;
	string pass;
	cout << "\t===================================="<<endl;
	cout << "\t\tMasukkan Nama     : ";
	cin >> nama;
	cout << "\t\tMasukkan email    : ";
	cin >> email;
	cout << "\t\tMasukkan password : ";
	cin >> pass;
    cout << "\t===================================="<<endl;
}

int main(){
    stack<Tiket> tiketStack;
    queue<Tiket> tiketQueue;

    int pilihan,choice;
	
	program:
	system("cls");

	cout << "=========================================================================" << endl;
    cout << "|\t\tSELAMAT DATANG, DI APLIKASI TRAVELING YULIN \t\t|" << endl;
    cout << "=========================================================================\n" << endl;
	cout << "1. LOG-IN" << endl;
	cout << "2. SIGN-IN\n" << endl;
	cout << "Silahkan pilih : ";
	cin >> choice;
	cout << endl;
	
	switch (choice){
		case 1:
			login();
			break;
		case 2:
			sign_up();
			goto program;
			return 0;
			break;
	}
    do
    {
    system("cls");
    cout << "=========================================================================" << endl;
    cout << "|\t\tSelamat datang di aplikasi pemesanan tiket! \t\t|" << endl;
    cout << "=========================================================================\n" << endl;
    cout << "Silakan pilih jenis tiket yang ingin Anda pesan:" << endl;
    cout << "1. Tiket Kereta" << endl;
    cout << "2. Tiket Pesawat" << endl;
    cout << "3. Tiket Bus" << endl;
    cout << "4. Kembali Menu Login" << endl;
    cout << "5. Keluar"<< endl;
    cout << "\nMasukkan pilihan Anda (1-5): ";
    cin >> pilihan;
    system("cls");
    switch (pilihan)
    {
    case 1:
        menuKereta(tiketStack, tiketQueue);
        break;
    case 2:
        menuPesawat(tiketQueue);
        break;
    case 3:
        menuBis(tiketStack);
        break;
    case 4:
        goto program;
        break;
    case 5:
        cout << "\t\t\tTerima Kasih telah menggunakan jasa ticketing kami !!!\n\n"<<endl;
        return 0;
        break;
    default:
        cout << "Pilihan tidak valid." << endl;
        goto program;
        break;
    }

     }while (pilihan != 0);
      return 0;
}
