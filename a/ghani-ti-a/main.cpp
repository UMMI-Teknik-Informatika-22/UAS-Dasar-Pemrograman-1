#include <iostream>
using namespace std;

void film() {
    cout << "---------------------------------------------------" << endl;
    cout << "                     List Film                     " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "| Nama Film  | No.Teater | Jenis Teater    | Kode |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "| Last Of Us |  Teater 3 | Reguler/Premium |   1  |" << endl;
    cout << "|   Nemato   |  Teater 1 | Reguler/Premium |   2  |" << endl;
    cout << "| GameChanger|  Teater 2 | Reguler/Premium |   3  |" << endl;
    cout << "---------------------------------------------------" << endl;
}
void popcorn() {
    cout << "---------------------------------------------------" << endl;
    cout << "                     List PopCorn                  " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << " Regular Pop Corn: Rp.24.000" << endl;
    cout << " Caramel Pop Corn: Rp.34.000" << endl;
    cout << "---------------------------------------------------" << endl;
}

int main() {
    int pilihPopcorn, pilihFilm;
    char ulang, makanan;
    do {
        char kategori, cetak;
        int jumltkt, total, harga, jmlh_pop, total_pop,totalmakanan, uang,totuang;
        int a;

        cout << "\t\tWelcome To Cinema XXe";
        cout << endl;

        cout << "Apakah anda ingin membeli popcorn? (Y=ya||T=tidak):";
        cin >> pilihPopcorn;
        if (pilihPopcorn == 'y') {
            popcorn();
            cout << "Silahkan pilih menu popcorn: ";
            cin >> makanan;
            cout << "Jumlah yang dipesan: ";
            cin >> jmlh_pop;
            totalmakanan = makanan * jmlh_pop;
            cout << endl;
            cout << "Total: " << totalmakanan << endl;
            cout << "masukan uang anda:";
            cin >> uang;
            totuang = uang - totalmakanan;
            cout << "terimakasih" << endl;
            cout << endl;
        }
        
    film();

    cout << "Input Film: ";
    cin >> pilihFilm;
    system("cls");
    switch (pilihFilm) {
    case 1:
        cout << "             Anda Memilih Last Of Us          " << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        cout << "Pilih Kategori (Regular = r || Premium = p): ";
        cin >> kategori;
        cout << "----------------------------------------------" << endl;

        if (kategori == 'r') {
            cout << "          Anda Memilih Regular            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.25.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 25000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;

            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|               Tiket Masuk                |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      LAST OF US              |" << endl;
                    cout << "|KATEGORI   :      REGULAR                 |" << endl;
                    cout << "|TEATER     :      3                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else if (kategori == 'p') {
            cout << "          Anda Memilih Premium            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.35.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 35000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;
            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            system("cls");
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|               Tiket Masuk                |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      LAST OF US              |" << endl;
                    cout << "|KATEGORI   :      PREMIUM                 |" << endl;
                    cout << "|TEATER     :      3                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else {
            cout << "Salah Input Kategori, Mohon Dicoba Kembali " << endl;
        }break;
    case 2:
        cout << "             Anda Memilih Nemato             " << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        cout << "Pilih Kategori (Regular = r || Premium = p): ";
        cin >> kategori;
        cout << "----------------------------------------------" << endl;

        if (kategori == 'r') {
            cout << "          Anda Memilih Regular            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.25.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 25000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;

            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|               Tiket Masuk                |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      NEMATO                  |" << endl;
                    cout << "|KATEGORI   :      REGULAR                 |" << endl;
                    cout << "|TEATER     :      1                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else if (kategori == 'p') {
            cout << "          Anda Memilih Premium            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.35.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 35000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;
            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            system("cls");
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|               Tiket Masuk                |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      NEMATO                  |" << endl;
                    cout << "|KATEGORI   :      PREMIUM                 |" << endl;
                    cout << "|TEATER     :      1                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else {
            cout << "Salah Input Kategori, Mohon Dicoba Kembali " << endl;
        }break;
    case 3:
        cout << "             Anda Memilih GameChanger         " << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        cout << "Pilih Kategori (Regular = r || Premium = p): ";
        cin >> kategori;
        cout << "----------------------------------------------" << endl;

        if (kategori == 'r') {
            cout << "          Anda Memilih Regular            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.25.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 25000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;

            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|               Tiket Masuk                |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      GAMECHANGER             |" << endl;
                    cout << "|KATEGORI   :      REGULAR                 |" << endl;
                    cout << "|TEATER     :      1                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else if (kategori == 'p') {
            cout << "          Anda Memilih Premium            " << endl;
            cout << "------------------------------------------" << endl;
            cout << "        Harga tiket : Rp.35.000           " << endl;
            cout << "        Jumlah Tiket Yang Dibeli: "; cin >> jumltkt;
            harga = 35000;
            total = harga * jumltkt;
            cout << endl;
            cout << "        Total: Rp." << total << endl;
            cout << "------------------------------------------" << endl;
            cout << "Cetak Tiket? (Ketik(y))";
            cin >> cetak;
            system("cls");
            if (cetak) {
                for (a = 0; a < jumltkt; a++) {
                    cout << "============================================" << endl;
                    cout << "|                Tiket Masuk               |" << endl;
                    cout << "===========================================|" << endl;
                    cout << "|JUDUL FILM :      GAMECHANGER             |" << endl;
                    cout << "|KATEGORI   :      PREMIUM                 |" << endl;
                    cout << "|TEATER     :      1                       |" << endl;
                    cout << "============================================" << endl;
                    cout << endl;
                }
            }break;
        }
        else {
            cout << "Salah Input Kategori, Mohon Dicoba Kembali " << endl;
        }break;
    default:
        cout << "Film ini tidak tersedia, coba kembali" << endl;
        break;
    }

    cout << endl;
    cout << "Apakah Anda Ingin Melakukan Transaksi Lainnya? (Ya=y||Tidak==t)" << endl;
    cin >> ulang;
    cout << endl;
    system("cls");
}
while (ulang != 't');
cout << "                   TERIMAKASIH TELAH MEMESAN TIKET           " << endl;
}


        


