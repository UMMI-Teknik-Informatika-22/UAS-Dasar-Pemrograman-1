#include <iostream>
#include <vector>

using namespace std;

struct Menu{
  string title;
  bool isIndicator;
};


vector<Menu> menus{
  {
    "Peminjaman",
    false,
  },
  {
    "Pengembalian",
    true
  },
};

struct Book{
  string title;
  bool isBorrowed;
};

vector<Book> books{
  {"Dasar Pemrograman", true},
  {"Pendidikan Pancasila", true},
  {"Logika Informatika", true},
  {"Pengantar Teknologi Informasi", true},
  {"Literasi Digital & Etika Teknologi", true},
  {"Arsitektur & Organisasi Komputer", true},
  {"Bahasa Asing", true},
  {"Akidah Akhlak", true},
};

struct BorrowedBook{
  Book book;
  int borrowTime;
};


struct Borrower{
  string name;
  vector<BorrowedBook> borrowedBooks;
};

Borrower borrower;

// vector<Book> returnedBooks; //  false
// vector<Book> borrowedBooks; // true

void ReadBorrower() {
  cout << "======== Rincian Peminjaman ========";
  cout << "Nama peminjam : " << borrower.name;
  cout << "Daftar buku yang dipinjam : ";
  for (int i = 0; i < borrower.borrowedBooks.size(); i++) {
    cout << i + 1 << ". " << borrower.borrowedBooks[i] << "\n";
  }  
}

void ReadBooks(Menu menu) {
  int numberBook, borrowTime;

  if (!menu.isIndicator) {
    for (int i = 0; i < books.size(); i++) {
      cout << i + 1 << ". " << books[i].title << "\n";
    }

    cout << "\nPilih buku : ";
    cin >> numberBook;

    cout << "Masukkan lama peminjaman (jumlah hari) : ";
    cin >> borrowTime;

    if ((numberBook > 0 && numberBook <= books.size()) && borrowTime > 0) {
      books[numberBook - 1].isBorrowed = false;
      borrower.borrowedBooks.push_back({books[numberBook - 1].title, books[numberBook - 1].isBorrowed, borrowTime});
    }

    ReadBorrower();
  } else {
    cout << "false";
  }
}

void ReadMenu(Menu menu) {
  cout << "======== " << menu.title << " Buku ========\n\n";

  ReadBooks(menu);
}

int main() {
  int numberMenu;
  cout << "================ Perpustakaan ================\n\n";

  // for (int i = 0; i < books.size(); i++) {
  //   if (books[i].isBorrowed == true) {
  //     cout << i + 1 << ". " << books[i].title << "\n";
  //   }
  // }  
  
  for (int i = 0; i < menus.size(); i++) {
    cout << i + 1 << ". " << menus[i].title << " buku\n";
  }

  cout << "\nPilih menu : ";
  cin >> numberMenu;

  system("cls");

  ReadMenu(menus[numberMenu - 1]);

  cout << borrower.borrowedBooks.size();

  // cout << "Hapus buku : ";
  // cin >> hapusBuku;

  // daftarBuku.erase(daftarBuku.begin() + (hapusBuku - 1));

 
}