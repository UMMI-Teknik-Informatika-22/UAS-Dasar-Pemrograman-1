#ifndef PEMBELIAN_BARANG_H // deklarasi awal berkas fungsi
#define PEMBELIAN_BARANG_H // agar nilai deklarasi fungsi nya tetap 

// memasukkan daftar data dari folder data
#include "../data/daftarPotonganHarga.cpp" // data daftar potongan harga


// membuat fungsi pembelianBarang menggunakan void karena langsung menampilkan isinya
// void = tipe data
// pembelianBarang = nama fungsi
// (Barang barang) = data yang di butuhkan pada fungsi
// Barang = tipe data dari struct Barang
// barang = nama variabel
void pembelianBarang(Barang barang) {
    int jumlahBarang; // deklarasi pilih jumlah barang
    long subTotalHarga, // deklarasi pilih sub total untuk di proses pada harga di kali jumlah barang
     potonganHarga; // deklarasi pilih potongan harga dari sub total

    cout << "\n==== Rincian Barang ==== \n"; //  menampilkan kalimat
    cout << "Barang : " << barang.nama << "\n"; // menampilkan label barang & nilai nama barang 
    cout << "Jumlah : "; // menampilkan label jumlah
    cin >> jumlahBarang; // memasukkan nilai ke variabel jumlahBarang

    cout << "Harga per barang : Rp " << barang.harga << "\n"; // menampilkan label harga per barang & nilai harga barang

    subTotalHarga = barang.harga * jumlahBarang; // proses menghitung sub total dari harga per barang di kali jumlah barang
    cout << "Sub total : Rp " << subTotalHarga << "\n"; // menampilkan sub total & nilai sub total harga barang


     // proses mendapatkan potongan harga
   if (subTotalHarga >= daftarPotonganHarga[0].minimalSubTotal) { // potongan harga jika sub total lebih sama dengan dari Rp 300.000
        potonganHarga = subTotalHarga * daftarPotonganHarga[0].persen / 100; // proses mendapatkan potongan harga 10%
        cout << "Potongan harga " << daftarPotonganHarga[0].persen << "% : Rp " << potonganHarga << "\n"; // menampilkan label & nilai potongan harga
        cout << "Total harga : Rp " << subTotalHarga - potonganHarga; // menampilkan label & nilai total harga

   } else if (subTotalHarga >= daftarPotonganHarga[1].minimalSubTotal) { // potongan harga jika sub total lebih sama dengan dari Rp 150.000
        potonganHarga = subTotalHarga * daftarPotonganHarga[1].persen / 100; // proses mendapatkan potongan harga 5%
        cout << "Potongan harga " << daftarPotonganHarga[1].persen << "% : Rp " << potonganHarga << "\n";  // menampilkan label & nilai potongan harga
        cout << "Total harga : Rp " << subTotalHarga - potonganHarga; // menampilkan label & nilai total harga

   } else { // tidak ada potongan harga, karena tidak memenuhi syarat minimal belanja
     cout << "Total harga : Rp " << subTotalHarga;
   }
}

#endif // deklarasi akhir berkas fungsi