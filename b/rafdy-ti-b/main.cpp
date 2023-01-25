// #include <iostream>

// using namespace std;

// int tujuan_penerbangan,
//     kelas_penerbangan,
//     jenis_penerbangan;
// long total_pembayaran;
// char ulangi;

// void welcome(string nama) {
//   cout << nama << endl;
// }

// struct RutePenerbangan {
//   string tujuan;
//   long harga;
// };

// struct KelasPenerbangan {
//   string jenis;
//   float ppn;
// };

// string daftarPerjalanan[2] = {"Sekali Jalan", "Pulang Pergi"};

// KelasPenerbangan daftarKelas[4] = {
//   {
//     "Premium",
//     3,
//   },
//   {
//     "Bisnis",
//     2.5,
//   },
//   {
//     "Ekonomi",
//     2,
//   },
//   {
//     "Biasa",
//     1.5,
//   },
// };

// RutePenerbangan daftarRute[10] = {
//     {
//         "Makassar",
//         1850000,
//     },
//     {
//         "Medan",
//         1800000,
//     },
//     {
//         "Palembang",
//         850000,
//     },
//     {
//         "Semarang",
//         800000,
//     },
//     {
//         "Solo",
//         900000,
//     },
//     {
//         "Surabaya",
//         1160000,
//     },
//     {
//         "Yogyakarta",
//         850000,
//     },
//     {
//         "Lombok",
//         1400000,
//     },
//     {
//         "Denpasar",
//         1430000,
//     },
//     {
//         "Bali",
//         750000,
//     }};

// void tampilkanDaftarRute() {
//   cout << "DAFTAR HARGA TIKET PESAWAT (RUTE PENERBANGAN) :\n";

//   for (int i = 0; i < 10; i++) {
//     cout << i + 1 << ". Jakarta - " << daftarRute[i].tujuan << (i == 6 ? " " : "\t") << ": Rp " << daftarRute[i].harga << "\n";
//   }
// }

// void kelasPenerbangan(RutePenerbangan rute, KelasPenerbangan kelas) {
//   cout << "==== Pilih Jenis Penerbangan ====\n";
//   for (int i = 0; i < 2; i++) {
//     cout << i + 1 << ". " << daftarPerjalanan[i] << "\n";
//   }

//   cout << "Masukkan jenis penerbangan (1 - 2) : ";
//   cin >> jenis_penerbangan;

//   if (jenis_penerbangan > 0 && jenis_penerbangan <= 2) {
//     switch (jenis_penerbangan) {
//       case 1:
//         total_pembayaran = rute.harga + (rute.harga * kelas.ppn / 100);
//         cout << "Total : Rp " << total_pembayaran;
//         break;
//       case 2:
//         total_pembayaran = (rute.harga + (rute.harga * kelas.ppn / 100) * 2);
//         cout << "Total : Rp " << total_pembayaran;
//         break;
//     }
//   } else {
//     cout << "Tidak ada pilihan jenis penerbangan!";
//   }
// }

// void tujuanPenerbangan(RutePenerbangan rute, int tujuan_penerbangan) {
//   cout << "\nTujuan \t : " << rute.tujuan << "\n";
//   cout << "Harga \t : Rp " << rute.harga;

//   cout << "\n===== Pilih Kelas Penerbangan ===== \n";
//   for (int i = 0; i < 4; i++) {
//     cout << i + 1 << ". Kelas " << daftarKelas[i].jenis << "\n";
//   }

//   cout << "\nMasukkan kelas penerbangan (1 - 4) : ";
//   cin >> kelas_penerbangan;

//   kelasPenerbangan(daftarRute[tujuan_penerbangan - 1], daftarKelas[kelas_penerbangan - 1]);
// }

// int main() {
//   do {
//     welcome("=== WELCOME TO THE AIRPORT ===\n");

//     tampilkanDaftarRute();

//     cout << "\n===== Penerbangan dari Jakarta =====\n";
//     cout << "Masukkan tujuan penerbangan (1 - 10) : ";
//     cin >> tujuan_penerbangan;

//     if (tujuan_penerbangan > 0 && tujuan_penerbangan <= 10) {
//       tujuanPenerbangan(daftarRute[tujuan_penerbangan - 1], tujuan_penerbangan);
//     } else {
//       cout << "Maaf, rute tujuan penerbangan yang Anda pilih tidak ada! \n \n";

//       cout << "Apakah Anda ingin memilih rute tujuan penerbangan kembali? (y)es/(n)o : ";
//       cin >>  ulangi;

//       system("cls");
//     }
//   } while (ulangi == 'y');

//   cout << "Terima kasih telah menggunakan layanan kami, semoga datang kembali.";
// }

#include <iostream>
using namespace std;



int main() {
  cout << "tesss";
}