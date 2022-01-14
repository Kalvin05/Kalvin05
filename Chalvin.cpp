#include<iostream>
using namespace std;

void jika(int pilih){
	
	if(pilih==1){
		
		cout<<"Transaksi Berhasil"<<endl;
	}else if(pilih == 2){
		cout<<"Transaksi Dibatalkan"<<endl;
	}else{
		cout<<"Eror"<<endl;
	}
}

void gopay(string nama,string id,int total){
	cout<<"Mohon konfirmasi username anda apakah sudah benar"<<endl;
	cout<<" "<<endl;
	cout<<"Username \t\t\t: "<<nama<<endl;
	cout<<"ID \t\t\t\t: "<<id<<endl;
	cout<<"Total yang harus di bayar \t: "<<total<<endl;
	cout<<"Bayar dengan Gopay "<<endl;
}
void ovo(string nama,string id,int total){
	cout<<"Mohon konfirmasi username anda apakah sudah benar"<<endl;
	cout<<" "<<endl;
	cout<<"Username \t\t\t: "<<nama<<endl;
	cout<<"ID \t\t\t\t: "<<id<<endl;
	cout<<"Total yang harus di bayar \t: "<<total<<endl;
	cout<<"Bayar dengan OVO "<<endl;
}
void dana(string nama,string id,int total){
	cout<<"Mohon konfirmasi username anda apakah sudah benar"<<endl;
	cout<<" "<<endl;
	cout<<"Username \t\t\t: "<<nama<<endl;
	cout<<"ID \t\t\t\t: "<<id<<endl;
	cout<<"Total yang harus di bayar \t: "<<total<<endl;
	cout<<"Bayar dengan Dana "<<endl;
}

int main(){
	int angka[3] = {500,100,700};
	string jenis[3] = {"Mobile Legend","Free Fire","Vain Glory"};
	int pilih,total,nominal;
	string id,nama;
	cout<<"-----------------Selamat Datang Di Toko Diamon NaCha-------------------"<<endl;
	awal:
	cout<<"Diamon tersedia :"<<endl;
	for(int a =0;a<3;a++){
		cout<<a+1<<"."<<jenis[a]<<"\t 1 Diamon = "<<angka[a]<<endl;
	}cout<<"4.Batalkan"<<endl;
	cout<<"Masukan pilihan anda :";
	cin>>pilih;
	system ("cls");
	switch(pilih){
		case 1:
			cout<<jenis[0]<<endl;
			cout<<" "<<endl;
			cout<<"Masukan ID anda \t:";
			cin>>id;
			cout<<"Masukan Username anda \t:";
			cin>>nama;
			cout<<"Masukan Nominal Top up \t:";
			cin>>nominal;
			system ("cls");
			cout<<"Pilih metode pembayaran"<<endl;
			cout<<"1.Gopay\n2.OVO\n3.Dana\n4.kembali"<<endl;
			cout<<"Masukan pilihan anda :";
			cin>>pilih;
			total = angka[0] * nominal;
			system ("cls");
			
			
			switch(pilih){
				case 1:
					gopay(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan Pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 2:
					ovo(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan Pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 3:
					dana(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan Pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 4:
					goto awal;
				default:
					cout<<"Eror"<<endl;
					break;
			}break;
		case 2:
			isi2:
			cout<<jenis[1]<<endl;
			cout<<" "<<endl;
			cout<<"Masukan ID anda \t:";
			cin>>id;
			cout<<"Masukan Username anda \t:";
			cin>>nama;
			cout<<"Masukan nominal top up \t:";
			cin>>nominal;
			system ("cls");
			cout<<"Pilih metode pembayaran"<<endl;
			
			cout<<"1.Gopay\n2.OVO\n3.Dana\n4.Kembali"<<endl;
			cout<<"Masukan pilihan anda :";
			cin>>pilih;
			total = angka[1] * nominal;
			
			system ("cls");
			switch(pilih){
				case 1:
					gopay(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
					
				case 2:
					ovo(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 3:
					dana(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"Masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 4:
					goto awal;
				default:
					cout<<"Eror"<<endl;
					break;
		}break;
		case 3:
			cout<<jenis[2]<<endl;
			cout<<" "<<endl;
			cout<<"Masukan ID anda \t:";
			cin>>id;
			cout<<"Masukan Username anda \t:";
			cin>>nama;
			cout<<"Masukan nominal top up \t:";
			cin>>nominal;
			system ("cls");
			cout<<"pilih metode pembayaran"<<endl;
			cout<<"1.Gopay\n2.OVO\n3.Dana\n4.Kembali"<<endl;
			cout<<"Masukan pilihan anda :";
			cin>>pilih;
			total = angka[2] * nominal;
			system ("cls");
			
			
			switch(pilih){
				case 1:
					gopay(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 2:
					ovo(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 3:
					dana(nama,id,total);
					cout<<"1.Bayar\n2.Batalkan pembelian"<<endl;
					cout<<"masukan pilihan anda : ";
					cin>>pilih;
					system("cls");
					jika(pilih);
					break;
				case 4:
					goto awal;
				default:
					cout<<"Eror"<<endl;
					break;
			}break;
			case 4:
				cout<<"Transaksi dibatalkan"<<endl;
				break;
			default:
				cout<<"Eror";
				
}
}

