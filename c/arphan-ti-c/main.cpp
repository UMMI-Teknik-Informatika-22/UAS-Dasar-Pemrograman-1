#include <iostream>
#include <vector>

using namespace std;

struct Barang{
  string nama;
  int harga;
};

vector<Barang> daftarBarang{
    {
        "Fotokopi",
        300,
    },
    {
        "Print",
        1000,
    },
    {
        "Pulpen",
        2000,
    },
};

struct Keranjang{
  Barang barang;
  int jumlah;
};

vector<Keranjang> keranjang;

void keranjangBarang(Barang barang, int jumlahBarang);
void checkOut();

int main() {
  int NomorBarang, jumlahBarang, subTotal;
  char ulang;
  
  do {
     cout << "================ Photo Copy ================\n";
     cout << "Keranjang : " << keranjang.size() << "\n\n";

    for (int i = 0; i < daftarBarang.size(); i++) {
      cout << i + 1 << ". " << daftarBarang[i].nama << "\n";
    }

    cout << "\n\nPilih nomor barang (1 - " << daftarBarang.size() << ") : ";
    cin >> NomorBarang;

    if (NomorBarang > 0 && NomorBarang <= daftarBarang.size()) {
      cout << "Masukkan jumlah barang : ";
      cin >> jumlahBarang;

      if (jumlahBarang > 0) {
        keranjangBarang(daftarBarang[NomorBarang - 1], jumlahBarang);    
      } else {
        cout << "Masukkan jumlah barang dengan benar!";
      }
    } else {
      cout << "Tidak ada pilihan barang!";
    }

    cout << "\n\nPilih barang kembali? (y/t) : ";
    cin >> ulang;

    system("cls");
  } while (ulang == 'y');

  cout << "======== Rincian Barang ========\n\n";

  for (int i = 0; i < keranjang.size(); i++) {
    cout << i + 1 << ". " << keranjang[i].barang.nama << " : " << keranjang[i].jumlah << " (" << keranjang[i].barang.harga << ")" << "\n";
  }

  cout << "\nTotal harga : Rp ";

  for (int i = 0; i < keranjang.size(); i++) {
    subTotal = (keranjang[i].jumlah * keranjang[i].barang.harga) + subTotal;
  }

  cout << subTotal;
}

void keranjangBarang(Barang barang, int jumlahBarang) {
  keranjang.push_back({barang.nama, barang.harga, jumlahBarang});
};