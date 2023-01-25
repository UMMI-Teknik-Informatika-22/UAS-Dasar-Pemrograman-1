#ifndef HEADER_H // deklarasi awal berkas fungsi
#define HEADER_H // agar nilai deklarasi fungsi nya tetap 

// membuat fungsi header menggunakan void karena langsung menampilkan isinya
// void = tipe data
// header = nama fungsi
void header() {
    // membuat variabel tanggal dengan tipe data string
    string tanggal; 

    // melakukan perulangan jarak
    for (int a = 1; a <= 6; a++){
        cout << "\t";
    }

    // menampilkan kalimat
    cout << "\tTOKO SERBA 35.000\n";

    // melakukan perulangan jarak
    for (int a = 1; a <= 6; a++){
        cout << "\t";
    }
    
    // menampilkan baris
    cout << "================================\n";

    // melakukan perulangan jarak
    for (int a = 1; a <= 7; a++){
        cout << "\t";
    }

    // menampilkan kalimat
    cout << "Jln. Syamsudin sh" << endl;

    // melakukan perulangan jarak
    for (int a = 1; a <= 5; a++){
        cout << "\t";
    }
    // menampilkan kalimat
    cout << "\t\tTlp. (0000)214 012" << endl;

    // melakukan perulangan jarak
    for (int a = 1; a <= 7; a++){
        cout << "\t";
    }

    // menampilkan kalimat
    cout << "     SUKABUMI" << endl;

    // memberikan jarak atas bawah
    cout << endl;

// menampilkan baris
    cout << "      ============================================================================================================\n";

    // menampilkan label tanggal
    cout << "\tTanggal      : ";

    // memasukkan data ke variabel tanggal
    // getline = agar terbaca/termasukkan datanya jika lebih dari 1 kata/di pisahkan dengan spasi
    getline(cin, tanggal);
    
    // menampilkan baris
    cout << "      ============================================================================================================\n";
}

#endif // deklarasi akhir berkas fungsi