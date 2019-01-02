#include <iostream>
using namespace std;

int niltogrd (){
	
	int nilai,grade;
		
	cout <<"Masukan Nilai yang ingin di Conversi = ";
	cin >>nilai;
	cout <<endl;
	
	if (nilai >= 90)
		cout <<"\nGrade anda adalah = 'A'"<<endl;
	
	else if (nilai <= 89 && nilai >= 75)
		cout <<"\nGrade anda adalah = 'B'"<<endl;
	
	else if (nilai <= 74 && nilai >= 51)
		cout <<"\nGrade anda adalah = 'C'"<<endl;
		
	else if (nilai <= 50 && nilai >= 30)
		cout <<"\nGrade anda adalah = 'D'"<<endl;		
	
	else if (nilai <= 29)
		cout <<"\nGrade anda adalah = 'E'"<<endl;	
	return 0;
		
}

int grdtonil(){
	
	int nilai; 
	char grade;
		
	cout <<"Masukan Grade yang ingin di Conversi = ";
	cin >>grade;
	
	if (grade == 'A' || grade == 'a')
		cout <<"\nBobot Nilai anda adalah diantara = '90 - 100'"<<endl;
	
	else if (grade == 'B' || grade == 'b')
		cout <<"\nBobot Nilai anda adalah diantara = '75 - 89'"<<endl;
	
	else if (grade == 'C' || grade == 'c')
		cout <<"\nBobot Nilai anda adalah diantara = '51 - 74'"<<endl;
		
	else if (grade == 'D' || grade == 'd')
		cout <<"\nBobot Nilai anda adalah diantara = '30 - 50'"<<endl;
	
	else if (grade == 'E' || grade == 'e')
		cout <<"\nBobot Nilai anda adalah diantara = '0 - 29'"<<endl;
	
	cout <<endl;
	return 0;
}



int main (){
	int option;
	
	cout <<"	Program Konversi Nilai ke Grade atau Grade Ke Nilai by @ Zulfikar Hidayatullah \n";
	cout <<"	------------------------------------------------------------------------------"<<endl;
	
	cout <<" Pilih salah satu menu di bawah"<<endl;
	cout <<" ------------------------------"<<endl;
	
	cout <<"\n 1. Konversi Nilai ke Grade";
	cout <<"\n 2. Konversi Grade ke Nilai"<<endl;
	
	cout <<"\n Pilih Option di atas menggunakan angka (1 atau 2) = ";
	cin >>option;
	cout <<endl;
	if (option == 1){
		cout <<niltogrd();
	}
	else {
		cout <<grdtonil();
	}
	return 0;
}
