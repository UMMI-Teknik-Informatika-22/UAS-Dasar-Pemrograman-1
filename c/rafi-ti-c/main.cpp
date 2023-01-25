#include <iostream>
#include <vector>
using namespace std;

struct Peralatan {
  string nama;
  vector<string> ukuran;
  vector<long> harga;
  int stok;
};

vector<Peralatan> daftarPeralatan{
  {
    "Tenda",
    {"Kecil", "Sedang", "Besar"},
    {25000, 35000,45000},
    10,
  },
  {
    "Tas Cerier",
    {"Kecil", "Sedang", "Besar"},
    {15000,20000, 25000},
    16,
  },
  {
    "Flysheet",
    {"Kecil", "Sedang", "Besar"},
    {10000, 15000,20000},
    10,
  },
};

void tampilkanDetailPeralatan(Peralatan peralatan) {
  cout << "==== Detail Barang ==== \n";
  cout << "Nama barang \t:" << peralatan.nama << "\n";
  cout << "Stok  \t\t: " <<  peralatan.stok << "\n";

  cout << "Ukuran & harga : ";
  for (int i = 0; i < peralatan.ukuran.size(); ++i) {
    cout << (i == 0 ? "\t" : "\t\t\t") << i + 1 << "." << peralatan.ukuran[i] << " : " << peralatan.harga[i] <<"\n";
  }
};

int main() {
  int pilihNomorBarang;

  cout << "================ Sewa Peralatan Outdoor ================ \n";
  for (int i = 0; i < daftarPeralatan.size() ; ++i) {
    cout << i + 1 << "." << daftarPeralatan[i].nama << "\n";
  }

  cout << "\nPilih barang (1 - " << daftarPeralatan.size() << ") : ";
  cin >> pilihNomorBarang;

  if (pilihNomorBarang > 0  && pilihNomorBarang <= daftarPeralatan.size()) {
    tampilkanDetailPeralatan(daftarPeralatan[pilihNomorBarang - 1]);
  } else{
    cout << "Tidak ada pilihan barang!";
  }
}
