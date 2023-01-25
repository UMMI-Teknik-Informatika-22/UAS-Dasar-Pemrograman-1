#include <iostream>
#include <vector>

using namespace std;

struct Produk {
  string nama;
  long harga;
};

vector<Produk> daftarProduk{
  {"Rengginang terasi", 13000},
  {"Rengginang hitam", 13000},
  {"Rengginang putih", 13000},
  {"Rengginang manis", 14000},
  {"Rengginang", 10000},
  {"Dapros", 8000},
  {"Enye original", 10000},
  {"Enye pedas", 10000},
  {"Enye udang", 12000},
  {"Enye keju", 14000},
};

struct PotonganHarga {
  int minimal;
  float persen;
};

vector<PotonganHarga> daftarPotonganHarga{
  {1000000, .15},
  {750000, .10},
  {500000, .07},
  {250000, .05},
};

void prosesPembelian(string nama, string alamat, Produk produk) {
  int jumlahProduk, subTotal, potonganHarga;

  cout << "======== Rincian Pembelian ========\n\n";
  cout << "Nama : " << nama << "\n";
  cout << "Alamat : " << alamat << "\n";
  cout << "Produk : " << produk.nama << " ~ Rp " << produk.harga << "\n";
  cout << "Masukkan jumlah : "; cin >> jumlahProduk;

  subTotal = produk.harga * jumlahProduk;
  cout << "Sub total : Rp " << produk.harga * jumlahProduk << "\n";

  for (int i = 0; i < daftarPotonganHarga.size(); i++) {
    if (subTotal >= daftarPotonganHarga[i].minimal) {
      potonganHarga = subTotal * daftarPotonganHarga[i].persen;
      cout << "Potongan harga : Rp " << potonganHarga << "\n";
      break;
    }
  }

  cout << "Total : Rp " << subTotal - potonganHarga;
}

int main() {
  string nama, alamat;
  int nomorProduk;

  cout << "================ Toko Rupa Rasa  ================\n\n";
  cout << "Masukkan nama : "; getline(cin, nama);
  cout << "Masukkan alamat : "; getline(cin, alamat);

  cout << "\nDaftar Produk : ";
  for (int i = 0; i < daftarProduk.size(); i++) {
    cout << (i == 0 ? "" : "\t\t")  << i + 1 << ". " << daftarProduk[i].nama << " : Rp " << daftarProduk[i].harga << "\n";
  }

  cout << "\nPilih produk (1 - " << daftarProduk.size() << ") : "; 
  cin >> nomorProduk;

  system("cls");

  if (nomorProduk > 0 && nomorProduk <= daftarProduk.size()) {
    prosesPembelian(nama, alamat, daftarProduk[nomorProduk - 1]);
  } else {
    cout << "Tidak ada pilihan produk!";
  }
}