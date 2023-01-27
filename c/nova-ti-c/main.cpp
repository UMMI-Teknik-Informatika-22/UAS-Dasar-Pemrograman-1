#include <iostream>
using namespace std;

struct KA{
	string ka;
	string relasi;
	string ka1;
	string relasi1;
};
void KA_Antar_kota (string KA){
	cout << KA << endl;}
void KA_Lokal (string KA1){	
	cout << KA1 << endl;}
void detailpenumpang (string pnp){
	cout << pnp << endl;}

int main (){ 
	KA  kai[7];
	    kai[0].ka = "KA ARGO PARAHYANGAN";
	    kai[0].relasi ="Bandung-Gambir(PP) " ;
	    kai[1].ka = "KA MALABAR";
	    kai[1].relasi ="Malang Kota Lama-Bandung (PP)";
	    kai[2].ka = "KA HARINA";
	    kai[2].relasi = "Surabaya Pasarturi-Bandung (PP)";
	    kai[3].ka = "KA PANGRANGO";
	    kai[3].relasi = "Sukabumi-Bogor (PP)" ;
	    kai[4].ka = "KA LODAYA";
	    kai[4].relasi = "Solo Balapan-Bandung (PP)" ;
	    kai[5].ka = "KA MATARAM";
	    kai[5].relasi = "Purwokerto-Pasarsenen (PP)";
	    kai[6].ka = "KA MUTIARA SELATAN";
	    kai[6].relasi = "Bandung-Yogyakarta (PP)" ;
	KA  kai1[7];
		kai1[0].ka1 = "KA SILIWANGI";
	    kai1[0].relasi1 ="Sukabumi - Cipatat (PP)    ";
	    kai1[1].ka1= "KA LOKAL BANDUNG RAYA";
	    kai1[1].relasi1 ="Cicalengka-Padalarang-Purwakarta (PP)";
	    kai1[2].ka1 = "KA LOKAL GARUT CIBATUAN";
	    kai1[2].relasi1 = "Garut-Cibatu-Purwakarta-Padalarang (PP)" ;
	    kai1[3].ka1 = "KA WALAHAR";
	    kai1[3].relasi1 = "Purwakarta-Cikarang (PP)";
	    kai1[4].ka1 = "KA LOKAL MERAK";
	    kai1[4].relasi1 = "Merak-Rangkasbitung (PP)";
	    kai1[5].ka1 = "KA JATILUHUR";
	    kai1[5].relasi1 = "Cikampek-Cikarang (PP)";
	    kai1[6].ka1 = "KA KEDUNG SEPUR";
	    kai1[6].relasi1 = "Ngrombo-Semarang Poncol (PP)";
	  
	char back,tidak,ok;
	int pilihkereta,pilih1,pilih2,a=0,b=0,c=0,kls,jml,byr,harga_tiket,jml_tiket,tiket,
	    harga_KA_Antarkota [21]={200000,0,150000,630000,0,325000,620000,415000,
		360000,80000,0,45000,445000,0,245000,535000,0,345000,420000,0,350000},
		harga_KA_Lokal[7]={5000,7000,13000,4000,3000,3000,10000};	
	string nama[10],ID[10],tgl,bayar[2]={"Qris","OVO"},kelas[3]={"Eksekutif","Bisnis","Ekonomi"};

	
	do{
		system ("CLS");
		cout << "......................... WELCOME TO Ticket.KAI .........................\n";
		cout << "........................  ....  .....   ......  .........................\n";
		cout << "........................  ...  .....  .  .....  .........................\n";
		cout << "........................  .  ......  . .  ....  .........................\n";
		cout << "........................  ...  ...  .....  ...  .........................\n";
		cout << "........................  ....  .  .     .  .. Ticket....................\n";
		cout << ".........................................................................\n";
		cout << "____________________PT.Kereta Api Indonesia(Persero)_____________________\n";
		cout << "                                    ___ th                               \n";
		cout << "                                 ___  / BANGKIT                          \n";
		cout << "                                   / / LEBIH CEPAT                       \n";
		cout << "                                  / / MELAYANI                           \n";
		cout << "                                 /   LEBIH BAIK                          \n";
		cout << "------------------------Pemesanan Tiket Kereta Api-----------------------\n";
		cout << endl;
		KA_Antar_kota ("1.KA Antar kota");
		KA_Lokal ("2.KA Lokal");
		cout << "Silahkan pilih kereta  :" <<endl;
		cin  >> pilihkereta;
		
			switch (pilihkereta) {
				case 1 :
					cout << "                               KA Antar Kota                               " <<endl;
					cout << "  ======================================================================= \n";
					cout << " |  |             |                    |             HARGA               |\n";
					cout << " |No| NAMA KERETA |       RELASI       |   KELAS  |  KELAS  |    KELAS   |\n";
					cout << " |  |     API     |                    | EKSEKUTIF|  BISNIS |   EKONOMI  |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " | 1| Argo        |                    |          |         |            |\n";
					cout << " |  | Parahyangan |Bandung-Gambir(PP)  | Rp.200000|    -    |  Rp.150000 |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " |  |             |Malang Kota Lama-   |          |         |            |\n";
					cout << " | 2| Malabar     |Bandung (PP)        | Rp.630000|    -    |  Rp.325000 |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " | 3| Harina      |Surabaya Pasarturi- |          |         |            |\n";
					cout << " |  |             |Bandung (PP)        | Rp.620000|Rp.415000|  Rp.360000 |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " | 4| Pangrango   |Sukabumi -Bogor (PP)| Rp.80000 |    -    |  Rp.45000  |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " |  |             |Solo Balapan-       |          |         |            |\n";
					cout << " | 5| Lodaya      |Bandung (PP)        | Rp.445000|    -    |  Rp.245000 |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " |  |             |Purwokerto-         |          |         |            |\n";
					cout << " | 6| Mataram     |Pasarsenen (PP)     | Rp.535000|    -    |  Rp.345000 |\n";
					cout << " |__|_____________|____________________|__________|_________|____________|\n";
					cout << " | 7| Mutiara     |Bandung-            |          |         |            |\n";
					cout << " |  | Selatan     |Yogyakarta (PP)     | Rp.420000|    -    |  Rp.350000 |\n";
					cout << " |=======================================================================|\n";
					cout << "                             (Masukkan Nama Kereta Api berdasarkan Nomor)\n";
					cout << endl;
					cout << " ---------------PILIH KERETA API--------------\n";
					cout << endl;
					cout << " Silahkan Pilih Kereta Api tujuan Anda :"; 
					cin  >> pilih1;
					 switch(pilih1){
						case 1:
							cout << " Anda Memilih :"<< kai[0].ka << endl;
							cout << " Relasi       :"<< kai[0].relasi << endl;
							break;
						case 2:
							cout << " Anda Memilih :"<< kai[1].ka << endl;
							cout << " Relasi       :"<< kai[1].relasi << endl;
							a=1;
							break;
						case 3:
							cout << " Anda Memilih :"<< kai[2].ka << endl;
							cout << " Relasi       :"<< kai[2].relasi << endl;
							a=2;
							break;	
						case 4:
							cout << " Anda Memilih :"<< kai[3].ka << endl;
							cout << " Relasi       :"<< kai[3].relasi << endl;
							a=3;
							break;
						case 5:
							cout << " Anda Memilih :"<< kai[4].ka << endl;
							cout << " Relasi       :"<< kai[4].relasi << endl;
							a=4;
							break;
						case 6:
							cout << " Anda Memilih :"<< kai[5].ka << endl;
							cout << " Relasi       :"<< kai[5].relasi << endl;
							a=5;
							break;
						case 7:
							cout << " Anda Memilih :"<< kai[6].ka << endl;
							cout << " Relasi       :"<< kai[6].relasi << endl;
							a=6;
							break;
					
						default:
							cout << "Maaf Kereta yang anda pilih Tidak Tersedia..." << endl;
							goto ulang;	
					}
					
			cout << endl;
			cout << " Tanggal berangkat(dd/mm/yy) :" ;
			cin  >> tgl;
			cout << endl;
			cout << " --------------PILIH KELAS KERETA-------------" << endl; 
			cout << " 1.Eksekutif 2.Bisnis 3.Ekonomi "<< endl;
			cout << " Silahkan pilih Kelas Kereta Api (1/2/3) :";
			cin  >>  kls;
			switch (kls){
				case 1 :
					cout << " Anda Memilih kelas : " << kelas[0];
					c=0;
					break;
				case 2:
					cout << " Anda Memilih kelas : " << kelas[1];
					c=1;
					break;
				case 3: 
					cout << " Anda Memilih kelas : " << kelas[2];
					c=2;
					break;
					
				default:
					cout << "Kelas Kereta yang anda pilih Tidak Tersedia..." << endl;
				goto ulang;
			}
		 
		 	cout << endl;
		 	cout << endl;
		 	cout << " Jumlah Tiket yang Akan Dibeli :";
		 	cin  >> jml_tiket;
			cout << endl;
			cout << " =============================================\n";
			cout << " Jumlah Penumpang :" << jml_tiket;
			cout << endl;
			cout << endl;
			
			for (int i=1;i<=jml_tiket;i++){
				detailpenumpang (" ---------------DETAIL PENUMPANG--------------");
				cout << "                        " <<  i   << "                 \n" ;   
				cout << " Nama Lengkap          :";
				cin >> (std :: cin,nama [i]);
				getline(cin,nama [i]); 
				cout << " Masukkan No Identitas : ";
				cin  >> ID [i];
		     	cout << " Tipe Penumpang        :";
				cout << " DEWASA (UMUM)" ;
				cout << endl;
				cout << " Kereta (Sesuai nomor kereta yang dipilih):";
				cin  >> harga_tiket ;
			
				switch (harga_tiket){
					case 1:
						cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[0] << endl << endl;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[1] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=1;
							goto ulang;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[2] << endl << endl;
							b=2;
							break;
					}			
					break;
				    case 2:
					cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[3] << endl << endl;
							b=3;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[4] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=4;
							goto ulang;
							
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[5] << endl << endl;
							b=5;
							break;
					}			
					break;
				    case 3:
					cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket; 
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[6] << endl << endl;
							b=6;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[7] << endl << endl;
							b=7;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[8] << endl << endl;
							b=8;
							break;
					}			
				    break;
				    case 4:
				    	cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[9]  << endl << endl;
							b=9;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[10] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=10;
							goto ulang;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[11] << endl << endl;
							b=11;
							break;
					}			
				    break;
				    case 5:
				    	cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[12] << endl << endl;
							b=12;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[13] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=13;
							goto ulang;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[14] << endl << endl;
							b=14;
							break;
					}			
				    break;
				    case 6:
				    	cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :" << endl; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[15] << endl << endl;
							b=15;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[16] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=16;
							goto ulang;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[17] << endl << endl;
							b=17;
							break;
					}			
				    break;
				    case 7:
				    	cout << " Harga (Sesuai kelas yang dipilih 1/2/3)  :"; 
						cin >> harga_tiket;
					switch (harga_tiket){
						case 1:
							cout << " Rp." << harga_KA_Antarkota[18] << endl << endl;
							b=18;
						break;
						case 2:
							cout << " Rp." << harga_KA_Antarkota[19] << endl << endl;
							cout << " Maaf kelas ini tidak tersedia";
							b=19;
							goto ulang;
						break;
						case 3:
							cout << " Rp." << harga_KA_Antarkota[20] << endl << endl;
							b=20;
							break;
					}
								
				    break;
				    
				}
			}
				cout << endl;
				cout << endl;
				for (int i=1;i<=jml_tiket;i++){
				cout << " ============================================="<< endl;
				cout << "           PEMBAYARAN TIKET KERETA API        "<< endl;
				cout << endl;
				cout << " NAMA        : " << nama[i] << endl;
				cout << " NO ID       : " << ID[i] << endl;
				cout << " KERETA API  : " << kai[a].ka << endl;
				cout << " RELASI      : " << kai[a].relasi << endl ;
				cout << " KELAS       : " << kelas[c] << endl;
				cout << " TANGGAL     : " << tgl << endl;
				cout << " JUMLAH TIKET: " << jml_tiket << endl;
				cout << " HARGA       : " << harga_KA_Antarkota [b] <<endl;
				cout << endl;
				cout << endl;
		}
				cout << " --------------------------------------------\n";
				cout << " --------------------------------------------\n";
				cout << "                          TOTAL BAYAR :" << harga_KA_Antarkota[b]*jml_tiket << endl;
				cout << "                          -------------------\n";
				cout << endl;
				cout << "(Tekan 1 untuk menampilkan tiket)";
				cin  >> tiket;
		
				for (int i=1;i<=jml_tiket;i++){
				cout << " \t ________________________________________________\n";
				cout << " \t KAI                                BOARDING PASS\n";
				cout << " \t ------------------------------------------------\n";
				cout << " \t nama/name                              =========\n";
			    cout << " \t " << nama[i]  << "\t\t\t        =*====*=="<< endl;
			    cout << endl;
				cout << " \t no identitas/id number \n";    
				cout << " \t " << ID [i] << endl;
				cout << endl;
				cout << " \t kereta api/train              kelas /seat number\n";
				cout << " \t " << kai[a].ka << "\t\t"     << kelas[c]<< ";-";
				cout << endl;
				cout << " \t berangkat                     tanggal/date\n";
				cout << " \t "<< kai[a].relasi  << "\t\t"     << tgl << endl;
				cout << " \t ____________________________________ticket.KAI__\n";
				cout << " \t ------------------------------------------------\n";
		}
			break;		
	
            	case 2 :
					cout << "                        KA Lokal                           " <<endl;
					cout << "  ___________________________________________________________ \n";
					cout << " |No| NAMA KERETA API |               RELASI                 |\n";
					cout << " |____________________|______________________________________|\n";
					cout << " | 1| Siliwangi       |Sukabumi - Cipatat (PP)               |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 2| Lokal Bandung   |Cicalengka-Padalarang-Purwakarta (PP) |\n";
					cout << " |  | Raya            |                                      |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 3| Lokal Garut     |Garut-Cibatu-Purwakarta-Padalarang(PP)|\n";
					cout << " |  | Cibatuan        |                                      |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 4| Walahar         |Purwakarta-Cikarang (PP)              |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 5| Lokal Merak     |Merak-Rangkasbitung (PP)              |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 6| Jatiluhur       |Cikampek-Cikarang (PP)                |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << " | 7| Kedung Sepur    |Ngrombo-Semarang Poncol (PP)          |\n";
					cout << " |__|_________________|______________________________________|\n";
					cout << "                 (Masukkan Nama Kereta Api berdasarkan Nomor)\n";
					cout << endl;
					cout << " ---------------PILIH KERETA API--------------\n";
					cout << endl;
					cout << " Silahkan Pilih Kereta Api tujuan Anda :"; 
					cin  >> pilih2;
					switch(pilih2){
						case 1:
							cout << " Anda Memilih :"<< kai1[0].ka1 << endl;
							cout << " Relasi       :"<< kai1[0].relasi1 << endl;
							a=0;
							break;
						case 2:
							cout << " Anda Memilih :"<< kai1[1].ka1 << endl;
							cout << " Relasi       :"<< kai1[1].relasi1 << endl;
							a=1;
							break;
						case 3:
							cout << " Anda Memilih :"<< kai1[2].ka1 << endl;
							cout << " Relasi       :"<< kai1[2].relasi1 << endl;
							a=2;
							break;	
						case 4:
							cout << " Anda Memilih :"<< kai1[3].ka1 << endl;
							cout << " Relasi       :"<< kai1[3].relasi1 << endl;
							a=3;
							break;
						case 5:
							cout << " Anda Memilih :"<< kai1[4].ka1 << endl;
							cout << " Relasi       :"<< kai1[4].relasi1 << endl;
							a=4;
							break;
						case 6:
							cout << " Anda Memilih :"<< kai1[5].ka1 << endl;
							cout << " Relasi       :"<< kai1[5].relasi1 << endl;
							a=5;
							break;
						case 7:
							cout << " Anda Memilih :"<< kai1[6].ka1 << endl;
							cout << " Relasi       :"<< kai1[6].relasi1 << endl;
							a=6;
							break;
						default:
							cout << " Maaf Kereta yang anda pilih Tidak Tersedia" << endl;
							goto ulang;
			
			}
	 		
			cout << endl;
			cout << " Tanggal berangkat(dd/mm/yy) :" ;
			cin >>  tgl;
			cout << endl;
			cout << " -----------------KELAS KERETA----------------" << endl;
			cout << " Kelas Kereta  : " <<  kelas[2] << endl;;
			
			cout << endl;
		 	cout << endl;
		 	cout << " Jumlah Tiket yang Akan Dibeli :";
		 	cin  >> jml_tiket;
			cout << endl;
			cout << " =============================================\n";
			cout << " Jumlah Penumpang :" << jml_tiket;
			cout << endl;
			cout << endl;
			
			for (int i=1;i<=jml_tiket;i++){
				detailpenumpang (" ---------------DETAIL PENUMPANG--------------");
				cout << "                        " <<  i   << "                 \n" ;                  
				cout << " Nama Lengkap          :";
				cin >> (std :: cin,nama [i]);
				getline(cin,nama [i]); 
				cout << " Masukkan No Identitas :";
				cin  >> ID [i];
		      	cout << " Tipe Penumpang        :";
				cout << " DEWASA (UMUM)" ;
				cout << endl;
				cout << endl;
		}
				cout << endl;
				for (int i=1;i<=jml_tiket;i++){
				cout << " ============================================="<< endl;
				cout << "           PEMBAYARAN TIKET KERETA API        "<< endl;
				cout << endl;
				cout << " NAMA        : " << nama[i] << endl;
				cout << " NO ID       : " << ID[i] << endl;
				cout << " KERETA API  : " << kai1[a].ka1 << endl;
		 		cout << " RELASI      : " << kai1[a].relasi1 << endl ;
				cout << " KELAS       : " << kelas[2] << endl;
				cout << " TANGGAL     : " << tgl << endl;
				cout << " JUMLAH TIKET: " << jml_tiket << endl;
				cout << " HARGA       : " << harga_KA_Lokal[b] <<endl;
				cout << endl;
				cout << endl;
		}
				cout << " --------------------------------------------\n";
				cout << " --------------------------------------------\n";
				cout << "                          TOTAL BAYAR :" << harga_KA_Lokal[b]*jml_tiket << endl;
				cout << "                          -------------------\n";
				cout << endl;
				cout << "(Tekan 1 untuk menampilkan tiket)";
				cin  >> tiket;
		
		
			for (int i=1;i<=jml_tiket;i++){
			cout << "\n\t ____________________________________\n";
			cout << " \t          "  << kai1[a].ka1 <<"       \n"; 
			cout << " \t                                      \n"; 
			cout << " \t                                      \n";
			cout << " \t  NAMA           :" << nama [i] <<   "\n";
			cout << " \t  NO ID          : " << ID [i]<< "\t\t\n";  
			cout << " \t  TANGGAL        : " << tgl << "\t\t  \n"; 
			cout << " \t  REASI          : " << kai1[a].relasi1 << endl;
			cout << " \t  KELAS          : " << kelas [2] << "\n";
			cout << " \t                                      \n"; 
			cout << " \t \t       Rp."<< harga_KA_Lokal [b]<< endl;
			cout << " \t \t      ==========                   \n";
			cout << " \t \t      ==========                   \n";
			cout << endl; 
			cout << "\n\t _________________________ticket.KAI_\n";
			cout << "  \t ------------------------------------\n";
	}
		
		
			

}
ulang:
	cout << endl;
	cout << "y = ya/ t = tidak "<< endl;
	cout << "Apakah ingin memesan Tiket Kereta lagi? [y/t] = ";
	cin >> back;
}while(back== 'y'||tidak =='t');
	cout << endl;
	cout << "     Terima Kasih telah memesan tiket di ticket.KAI" << endl;
	cout << "           Selamat Menikmati Perjalanan Anda       "<< endl;
	

	}