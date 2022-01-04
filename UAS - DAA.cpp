#include<iostream>
#include<string>

using namespace std;

void KONVERSI_2(long angka);
void KONVERSI_DnC(long angka, string hasil);

int main(){
	long angka; // digunakan untuk menyimpan angka dalam tipe data long
	
	cout << "=================================\n";
	cout << "KONVERSI BILANG DECIMAL KE BINER\n";
	cout << "=================================\n\n";
	cout << "Masukan Angka : "; // Menampilkan tulisan Masukan Angka
	cin >> angka; // digunkan untuk menyimpan inputan ke dalam variabel angka
	cout << "\n";
	cout << "==================\n";
	cout << "Hasil : \n";
	cout << "==================\n";
	KONVERSI_2(angka);
}

void KONVERSI_2(long angka){
	string hasil; // digunakan untuk menyimpan hasil dalm tipe data string
	
	hasil = "";
	
	KONVERSI_DnC(angka, hasil); // digunakan untuk mengambil nilai parameter dari angka + hasil
}

void KONVERSI_DnC(long angka, string hasil) 
	{
	long temp1, temp2; // digunakan untuk menyimpan nilai temp1 dan temp2 dalam tipe data long
	
	if (angka <= 8){ // jika angka kurang dari atau sama dengan 8
		switch (angka){
			case 0:
				hasil = hasil + "000";
				cout << hasil;
				break;
			
			case 1:
				hasil = hasil + "001";
				cout << hasil;
				break;
			
			case 2:
				hasil = hasil + "010";
				cout << hasil;
				break;		
				
			case 3:
				hasil = hasil + "011";
				cout << hasil;
				break;
			
			case 4:
				hasil = hasil + "100";
				cout << hasil;
				break;	
				
			case 5:
				hasil = hasil + "101";
				cout << hasil;
				break;
				
			case 6:
				hasil = hasil + "110";
				cout << hasil;
				break;
				
			case 7:
				hasil = hasil + "111";
				cout << hasil;
				break;				
		}
	}
	
	else {
		temp1 = angka/8; //digunakan untuk membagi angka dengan 8
			KONVERSI_DnC(temp1, hasil); // digunakan untuk mengambil nilai parameter dari temp1+hasil
		temp2 = angka%8; //digunakan untuk mendapatkan sisa hasil bagi angka dengan 8
			KONVERSI_DnC(temp2, hasil); // digunakan untuk mengambil nilai parameter dari temp2+hasil
	}
}


