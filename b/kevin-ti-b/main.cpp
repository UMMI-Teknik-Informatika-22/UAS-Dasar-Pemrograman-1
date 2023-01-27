#include <iostream>
#include <vector>

using namespace std;

struct Berlian{
  int jumlah,
   harga;
};


struct Permainan{
  string nama;
  vector<Berlian> daftarBerlian;
};

vector<Permainan> daftarPermainan{
  {
    "Mobile legend",
    {
      {200, 50000},
      {499, 100000},
      {899, 200000},
      {1569, 400000},
      {3400, 1000000},
    },
  },
   {
    "Clash of clans",
    {
      {320, 70000},
      {800, 100000},
      {1899, 700000},
      {5569, 1400000},
      {8400, 2000000},
    },
  },
};

void rincianPermainan(Permainan permainan, string idPlay) {
  int nomorBerlian;

  cout << "======== Rincian Permainan ========\n\n";
  cout << "Nama\t\t:\t" << permainan.nama << "\n";
  cout << "Daftar berlian\t: ";
  for (int i = 0; i < permainan.daftarBerlian.size(); i++) {
    cout << (i == 0 ? "\t" : "\t\t\t") << i + 1 << ". " << permainan.daftarBerlian[i].jumlah << " berlian ~ Rp " << permainan.daftarBerlian[i].harga << "\n";
  }
  
  cout << "Pilih berlian : ";
  cin >> nomorBerlian;

  system("cls");

  if (nomorBerlian > 0 && nomorBerlian <= permainan.daftarBerlian.size()) {
    cout << "Selamat anda telah Berhasil top up\n" << "\n";
    cout << "Dengan akun : " << idPlay << "\n";
    cout << "Jumlah top up : " << permainan.daftarBerlian[nomorBerlian - 1].jumlah << " berlian ~ Rp " << permainan.daftarBerlian[nomorBerlian - 1].harga << "\n";
  } else {
    cout << "Tidak ada pilihan berlian!";
  }  
}

int main() {
  int nomorPermainan;
  string idPlay;

  cout << "================ Top Up ================\n\n";
  for (int i = 0; i < daftarPermainan.size(); i++) {
    cout << i + 1 << ". " << daftarPermainan[i].nama << "\n";
  }

  cout << "\nPilih game : ";
  cin >> nomorPermainan;

  if (nomorPermainan > 0 && nomorPermainan <= daftarPermainan.size()) {
    cout << "Masukkan id play : ";
    cin >> idPlay;

    system("cls");

    if (!idPlay.empty()) {
      rincianPermainan(daftarPermainan[nomorPermainan - 1], idPlay);
    } else {
      cout << "Masukkan id play dengan benar!";
    }
  } else {
    cout << "Tidak ada pilihan permainan!";
  } 
}