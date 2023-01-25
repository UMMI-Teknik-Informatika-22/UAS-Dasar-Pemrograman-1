#ifndef FOOTER_H // deklarasi awal berkas fungsi
#define FOOTER_H // agar nilai deklarasi fungsi nya tetap 

// membuat fungsi footer menggunakan void karena langsung menampilkan isinya
// void = tipe data
// footer = nama fungsi
void footer() {
    // menampilkan baris
    cout << "      ============================================================================================================\n\n";
    
    // melakukan perulangan jarak
    for (int a = 0; a<= 4; a++){
        cout << "\t";
    }

    // menampilkan kalimat
    cout << "TERIMAKASIH SUDAH BERBELANJA DITOKO KAMI" << "\n\n";
    
    // melakukan perulangan jarak
    for (int a = 0; a<= 5; a++){
        cout << "\t";
    }

    // menampilkan kalimat
    cout << "     HAPPY SHOPPING" << endl;
    
    // memberikan jarak atas bawah
    cout << endl;

    // menampilkan baris
    cout << "      ============================================================================================================\n";
}

#endif // deklarasi akhir berkas fungsi