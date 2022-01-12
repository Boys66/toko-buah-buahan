/*
Mata Kuliah : Dasar Pemrograman
tugas       :UAS
Nama        : Salman alfarisi
Kelas       :1B
Tanggal     :04 Januari 2022
*/

#include<iostream>
#include<stdlib.h>
using namespace std ;

void dh(){
	kembali:
		system ("cls");
	cout << "======================================\n";
	cout << "=============DAFTAR HARGA=============\n";
	string nm [9]={"mangga     \t:", "melon    \t:", "rambutan     \t:", "durian   \t:", "apel    \t:", "buah naga     \t:", "manggis     \t:","semangka     \t:","nanas    \t:"};
	string nama [9]={"mangga     \t:", "melon     \t:", "rambutan   \t:", "durian     \t:", "apel       \t:", "buah naga   \t:", "manggis      \t:","semangka     \t:","nanas     \t:"};
	int harga [9]={25000,30000,35000,50000,75000,100000,150000,200000,250000}; 
	int pilih;
	string ktgr[9]={" kg "," kg "," kg "," kg "," kg "," KG "," kg "," kg "," kg "};
	
		for (int a = 0 ; a < 9; a++){
		cout << nm [a]  ;
		cout << harga [a];
		
		cout << "/";
		cout << ktgr [a];
		cout << endl;	
}
		
		cout << "===================================\n";
		cout << "===================================\n";
		
	int byr[9];
	
	int jmlh [9];
	int tot;
	
	
	
		for (int a = 0 ; a < 9; a++){
		cout <<"berapa"<< ktgr [a] << nama [a] ;
	
		cin >> jmlh [a];		
			
}
system ("cls");
for (int i = 0 ; i < 9; i++){
	byr[i] = harga [i]*jmlh[i];
	cout << nm[i] <<byr [i] << endl ;
	
}

tot = byr [0]+byr[1]+byr[2]+byr[3]+byr[4]+byr[5]+byr[6]+byr[7]+byr[8];

	
		cout << "harga yang harus anda bayar:"<< tot << endl <<endl << endl;
		cout << "===================================\n";
		cout << "===================================\n";
	
	
		cout << "ketik 5 untuk kembali kepembelian \n";
		cout << "masukan angka :";
		cin >> pilih ;
		if (pilih == 5){
			goto kembali;
		}

		

		
}


int main()
{
	
	cout << "===========================================\n";
	cout << "=============TOKO BUAH SEGAR=============\n";
	cout << "===========================================\n";
	
int b =1;
cout << "ketik 1 untuk melanjutkan \nketik apa saja untuk berhenti \nmasukan angka : ";
cin >> b;



if (b==1){

	dh();
	
		
		
		

}
else {
	cout << "program telah berhenti";
}

	


	
	return 0;
}

