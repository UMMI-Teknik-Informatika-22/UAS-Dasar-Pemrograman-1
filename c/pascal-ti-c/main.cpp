#include <iostream>
#include <vector>

using namespace std;

struct Wahana{
  string nama;
  long harga;
};

vector<Wahana> daftarWahana{
  {"Komedi putar", 5000},
  {"Bianglala", 10000},
  {"Ombak Banyu", 10000},
  {"Rumah hantu", 5000},
  {"Kereta api mini", 5000},
  {"Mandi bola", 5000}
};

void pembelianTiket(int nomorWahana, int jumlahTiket) {
  if (nomorWahana > 0 && nomorWahana <= daftarWahana.size()) {
    cout << "Masukkan jumlah tiket : "; cin >> jumlahTiket;

    if (jumlahTiket > 0) cout << "Total harga : Rp " << jumlahTiket * daftarWahana[nomorWahana - 1].harga;
    else cout << "Masukkan jumlah tiket dengan benar!";
  } else cout << "Tidak ada pilihan wahana!";
}

int main() {
  int nomorWahana, jumlahTiket;

  cout << "================ Wahana Malam ================\n\n";
  for (int i = 0; i < daftarWahana.size(); i++) cout << i + 1 << ". " << daftarWahana[i].nama << " : Rp " << daftarWahana[i].harga << "\n";
  cout << "\n\nPilih wahana (1 - " << daftarWahana.size() << ") : "; cin >> nomorWahana;

  pembelianTiket(nomorWahana, jumlahTiket);
}