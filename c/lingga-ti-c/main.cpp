#include <iostream>
#include <vector>

using namespace std;

struct Mobil{
  string merek,
  model,
    platNomor;
  int tahun;
  bool disewa;
};

vector<Mobil> daftarMobil{
  {
    "Toyota",
    "Zenix",
    "123 ABC",
    2022,
    false,
  },
  {
    "Hyundai",
    "Stargazer",
    "456 ABC",
    2022,
    false,
  },
};

void prosesPenyewaan(Mobil mobil, int waktuSewa, int nomorMobil) {
  cout << "======== Rincian Sewa ========\n\n";
  cout << "Merek : " << mobil.merek << "\n";
  cout << "Model : " << mobil.model << "\n";
  cout << "Tahun : " << mobil.tahun << "\n";
  cout << "Plat nomor : " << mobil.platNomor << "\n";
  cout << "Waktu sewa : " << waktuSewa << " jam" << "\n";
  cout << "Harga sewa : Rp " << (waktuSewa / 12) * 500000 << "\n";

  daftarMobil[nomorMobil - 1].disewa = !mobil.disewa;
}

int main() {
  int nomorMobil, waktuSewa;
  char ulang;

  do {
    cout << "================ Sistem Penyewaan Mobil | Rp 500.000 / 12 jam ================\n\n";
    for (int i = 0; i < daftarMobil.size(); i++) {
      cout << i + 1 << ". " << daftarMobil[i].model << " (" << daftarMobil[i].tahun << ") - " << daftarMobil[i].merek << " | " << daftarMobil[i].platNomor << " : " << (!daftarMobil[i].disewa ? "Tersedia" : "Telah disewa") << "\n";
    }

    cout << "\nPilih mobil (1 - " << daftarMobil.size() << ") : ";
    cin >> nomorMobil;

    if (nomorMobil > 0 && nomorMobil <= daftarMobil.size()) {
      cout << "Masukkan berapa lama waktu sewa? ";
      cin >> waktuSewa;

      if (waktuSewa % 12 == 0) {
        system("cls");

        prosesPenyewaan(daftarMobil[nomorMobil - 1], waktuSewa, nomorMobil);
      } else {
        cout << "Masukkan waktu sewa harus kelipatan 12 (jam)!";
      }
    } else {
      cout << "Tidak ada pilihan mobil!";
    }

    cout << "\n\nKembali ke menu utama? (y/t) : ";
    cin >> ulang;
    
    system("cls");
  } while (ulang == 'y');

  cout << "================ Terima kasih telah menggunakan jasa sewa Kami ================";
}