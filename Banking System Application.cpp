//PROJECT AKHIR ALGORITMA DAN PEMROGRAMAN 1
#include <iostream>
#include <windows.h>
using namespace std;
//DEKLARASI
bool sama,cek;
unsigned long int no_pendaftaran[100];
string nama[100],alamat[100],j_kel[100],nama_petugas,no_telp[100];
int pilih,bulan[100],tahun[100],tgl[100],saldo[100],saldo_masuk[100],
transfer[100],no_pin[100],penarikan[100];
int no_nasabah,x,a,i,z,total_saldo,input_saldo,no_tujuan,pilih_bantuan,
kode_data,pin;
int main();
void pendaftaran();
void menu_isi_saldo();
void menu_transfer();
void cek_saldo();
void data_nasabah();
void menu_penarikan();
void pengecekan_no_pendaftaran();
void bantuan();
void bantuan_pendaftaran();
void bantuan_isi_saldo();
void bantuan_transfer();
void bantuan_penarikan();
void bantuan_cek_saldo();
void bantuan_lainnya();
void exit();

void pendaftaran(){
do{
do{
    sama=true;
    cout<<"             PENDAFTARAN AKUN\n\n";
    cout<<"No.Pendaftar            : ";
 cin>>no_pendaftaran[x];
 cout<<endl;
    if(no_pendaftaran[x]==124180026||no_pendaftaran[x]==124180020){
        sama=false;
        cout<<"       No Pendaftaran Tidak Valid\n\n";
        system("PAUSE");
        system("CLS");
    }
    else if(no_pendaftaran[x]==0||no_pendaftaran[x] < 10000000){
        sama=false;
        cout<<"       No Pendaftaran Minimal 8 Digit\n\n";
        system("PAUSE");
        system("CLS");
    }
    else if(x>0){
        for(int i=0;i<x;i++){
        if(no_pendaftaran[x]==no_pendaftaran[i]){
        sama=false;
        cout<<"        No Telah Terdaftar\n\n";
        system("PAUSE");
        system("CLS");
            }
        }
    }

else if(no_pendaftaran[x]>9999999999){
        sama=false;
        cout<<endl;
        cout<<"         No Pendaftar Maksimal 10 Digit\n";
        cout<<"     Silahkan Massukan Ulang No Pendaftaran\n\n";
        system("PAUSE");
        system("CLS");
    }
}while(sama==false);
    	cout<<"Massukan PIN            : ";
    	cin>>no_pin[x];
 	cout<<endl;
    	if(no_pin[x]>=100000){
    	cin.ignore();
    	cout<<"Nama                    : ";
    	getline(cin, nama[x]);
 	cout<<endl;
    	cout<<"Tgl_Lahir(DD MM YYYY)   : ";
    	cin>>tgl[x];cin>>bulan[x];cin>>tahun[x];
      cout<<endl;
    	cin.ignore();
    	cout<<"Alamat                  : ";
    	getline(cin, alamat[x]);
    	cout<<endl;
    	cout<<"No Telephon             : (+62) ";
    	cin>>no_telp[x];
    	cout<<endl;
    	cout<<"Jenis_kel(L/P)          : ";
    	cin>>j_kel[x];
    	cout<<endl<<endl;
    	cout<<"Loading";
    for(int i=0 ; i<13 ; i++){
        	cout<<".";
        	Sleep(100);
    }
     for(int i=13 ; i<18 ; i++){
        	cout<<".";
        	Sleep(1000);
    }
    	cout<<"\n\n";
    if(bulan[x]<=12 && bulan[x]>0 && tgl[x]<=31 && tgl[x]>0 && tahun[x]>=1943 && tahun[x]<= 2001 &&(j_kel[x]=="L"||j_kel[x]=="P")){
        	cek=true;
        	cout<<"       Selamat Akun Anda Berhasil Terdaftar\n";
        	cout<<"      Bonus Rp 10.000,00 Bagi Pendaftar Baru\n\n";
      saldo[x]=10000;
        }
    else if((bulan[x]>12 || bulan[x]<=0 || tgl[x]>31 || tgl[x]<=0 && tahun[x] < 2001 && tahun[x]> 1943) && (j_kel[x] == "L" || j_kel[x]=="P")){
        cek=false;
        cout<<"                    Pendaftaran Akun Gagal\n";
        cout<<"     Terdapat Kesalahan Dalam Memassukan Data Tanggal Lahir\n\n";
        }
    else if((bulan[x]>12 || bulan[x]<=0 || tgl[x]>31 || tgl[x]<=0 && tahun[x] < 2001 && tahun[x]> 1943) && (j_kel[x] != "L" && j_kel[x]!= "P")){
        cek=false;
        cout<<"                    Pendaftaran Akun Gagal\n";

     cout<<"     Terdapat Kesalahan Dalam Memassukan Data Tanggal Lahir\n";
        cout<<"     Terdapat Kesalahan Dalam Memassukan Data Jenis Kelamin\n\n";
        }
    else if(tahun[x]>2001){
        cek=false;
        cout<<"                 Pendaftaran Akun Gagal\n";
        cout<<"        Umur Minimal Pendaftaran Akun 17 Tahun\n\n";
        }
    else if(tahun[x]<1943){
        cek=false;
        cout<<"                 Pendaftaran Akun Gagal\n";
        cout<<"        Umur Maksimal Pendaftaran Akun 75 Tahun\n\n";
        }
    else if(j_kel[x] != "L"||j_kel[x]!= "P"){
        cek=false;
        cout<<"                 Pendaftaran Akun Gagal\n";
        cout<<"  Terdapat Kesalahan Dalam Memassukan Data Jenis Kelamin\n";
        cout<<"    Data Jenis Kelamin Harus Menggunakan Huruf Kapital\n\n";
        }
    }
    else {
        cout<<"          PIN minimal 6 Digit\n\n";
    }
    system("PAUSE");
    system("CLS");
    }while(cek==false);
x++;
}

void menu_isi_saldo(){
    do{
        cout<<"             ISI SALDO\n\n";
        pengecekan_no_pendaftaran();
    if(sama==true){
        cout<<"Nama                    : "<<nama[a]<<endl<<endl;
        cout<<"Tgl_Lahir(DD MM YYYY)   : "<<tgl[a]<<" "<<bulan[a]<<
        " "<<tahun[a]<<endl<<endl;
        cout<<"Alamat                  : "<<alamat[a]<<endl<<endl;
        cout<<"Jenis_kel               : "<<j_kel[a]<<endl<<endl;
        cout<<"Massukan Saldo          : Rp. ";
     cin>>input_saldo;
        cout<<endl<<endl;
        cout<<"Loading";
    for(int i=0 ; i<18 ; i++){
        cout<<".";
        Sleep(150);
    }
        cout<<endl<<endl;
    if(input_saldo>=50000&&input_saldo<=10000000){
        cout<<"             Pengisian Saldo Berhasil\n\n\n";
        saldo[a]=saldo[a]+input_saldo;
    }
    else if(input_saldo>10000000){
        cout<<"             Pengisian Saldo Gagal!!!\n";
        cout<<"    Pengisian Saldo Maksimal Rp 10.000.000,00\n\n\n";
        }
    else if(input_saldo<50000){
        cout<<"             Pengisian Saldo Gagal!!!\n";
        cout<<"       Pengisian Saldo Minimal Rp 50.000,00\n\n\n";
        }
    }
    system("PAUSE");
    system("CLS");
    }while(x>0&&(sama==false));
}

void menu_transfer(){
    do{
        cout<<"             TRANSFER\n\n";
        pengecekan_no_pendaftaran();
    if(sama==true){
        cout<<"Nama                    : "<<nama[a]<<endl<<endl;
        cout<<"Jumlah Saldo            : Rp. "<<saldo[a]<<endl;
        cout<<"\n================================================================================\n\n";
        cout<<"Massukan No Tujuan      : ";
        cin>>no_tujuan;
    for(int i=0;i<x;i++){
        cek=false;
    if(sama==true){
        cek=true;
        cout<<"\nNama                    : "<<nama[i]<<endl<<endl;
        cout<<"Jumlah Transfer         : Rp. ";
        cin>>transfer[a];
        cout<<endl<<endl;
        cout<<"Loading";
    for(int i=0 ; i<18 ; i++){
        cout<<".";
        Sleep(150);
    }
        cout<<endl<<endl;
    if(transfer[a]>=10000){
        if(transfer[a]<=saldo[a]){
            cout<<endl;
            cout<<"                 Transfer Berhasil\n\n";
            saldo[a] = saldo[a]-transfer[a];
            saldo[i] = saldo[i]+transfer[a];
            system("PAUSE");
            system("CLS");
            main();
    }
    else if(transfer[a]>saldo[a]){
         cout<<"         Saldo Anda Tidak Mencukupi\n\n";
         system("PAUSE");
         system("CLS");
         main();
    }
    }
    else if(transfer[a]<10000){
        cout<<"                 Transfer Gagal!!!\n";
        cout<<"        Jumlah Transfer Minimal Rp 10.000,00\n\n";
        system("PAUSE");
        system("CLS");
        main();
            }
        }
    }
    }

}while(x>0 && (no_nasabah!=no_pendaftaran[i])||cek == false);
}

void cek_saldo(){
    do{
        cout<<"             CEK SALDO\n\n";
        pengecekan_no_pendaftaran();
    if(sama==true){
        cout<<"Nama Nasabah             : "<<nama[a]<<endl<<endl;
        cout<<"Jumlah Saldo             : Rp. "<<saldo[a]<<endl<<endl;
        }
    system("PAUSE");
    system("CLS");
    }while(sama==false);
}

void data_nasabah(){
        cout<<"             DATA NASABAH\n\n";
    if(x==0){
        cout<<"         TIDAK TERDAPAT DATA\n\n";
    }
    else if(x>=0){
        cout<<"Massukan Kode        : ";cin>>kode_data;cout<<endl;
    if(kode_data==124180026){
        nama_petugas="CATUR RAHMAT";
        cout<<"Nama Petugas         : "<<nama_petugas<<endl;
        cout<<"Loading";
    for(int i=0 ; i<15 ; i++){
        cout<<".";
        Sleep(150);
        }
    for(int i=0 ; i < x ;i++){
        cout<<"\n+=============================================================+\n";
        cout<<"No Pendaftaran       : "<<no_pendaftaran[i]<<endl<<endl;
        cout<<"Nama                 : "<<nama[i]<<endl<<endl;
        cout<<"Tgl_Lahir(DD MM YYYY): "<<tgl[i]<<" "<<bulan[i]<<" "<<tahun[i]<<endl<<endl;
        cout<<"Alamat               : "<<alamat[i]<<endl<<endl;
        cout<<"No Telephon          : (+62)"<<no_telp[i]<<endl<<endl;
        cout<<"Jenis_kel            : "<<j_kel[i]<<endl<<endl;
     cout<<"Jumlah Saldo         : "<<saldo[i]<<endl;
cout<<"+=============================================================+\n";
    }
    }
    else if(kode_data==124180020){
        nama_petugas="DEBI EFRITA";
        cout<<"Nama Petugas         : "<<nama_petugas<<endl;
        cout<<"Loading";
   for(int i=0 ; i<15 ; i++){
        cout<<".";
   Sleep(150);
        }
    for(int i=0 ; i < x ;i++){
        cout<<"\n\n+=============================================================+\n";
        cout<<"No Pendaftaran       : "<<no_pendaftaran[i]<<endl<<endl;
        cout<<"Nama                 : "<<nama[i]<<endl<<endl;
        cout<<"Tgl_Lahir(DD MM YYYY): "<<tgl[i]<<" "<<bulan[i]<<
        " "<<tahun[i]<<endl<<endl;
        cout<<"Alamat               : "<<alamat[i]<<endl<<endl;
        cout<<"No Telephon          : (+62)"<<no_telp[i]<<endl<<endl;
        cout<<"Jenis_kel            : "<<j_kel[i]<<endl<<endl;
        cout<<"Jumlah Saldo         : "<<saldo[i]<<endl;
        cout<<"+=============================================================+\n";
        }
    }
    else{
        cout<<"\n                       Kode Salah\n";
        cout<<"Menu Ini Hanya Dapat Diakses Oleh Petugas Dengan Kode Terverifikasi\n\n";
        }
    }
    system("PAUSE");
    system ("CLS");
}

void menu_penarikan(){
    do{
        cout<<"             PENARIKAN\n\n";
        pengecekan_no_pendaftaran();
    if(sama==true){
        cout<<"Nama                    : "<<nama[a]<<endl<<endl;
        cout<<"Jumlah Saldo            : Rp. "<<saldo[a]<<endl<<endl;
        cout<<"Jumlah Penarikan        : Rp. ";cin>>penarikan[a];cout<<endl<<endl;
        cout<<"Loading";
    for(int i=0 ; i<18 ; i++){
        cout<<".";
        Sleep(150);
    }
    if(penarikan[a]>saldo[a]){
         cout<<endl<<endl;
        cout<<"     Saldo Anda Tidak Mencukupi\n\n";
    }
    else if(penarikan[a]<10000&&penarikan[a]<=saldo[a]){
        cout<<endl<<endl<<"    Jumlah Penarikan Minimal Rp 10.000,00\n\n";
    }
    else if(penarikan[a]>10000 && penarikan[a]<=saldo[a]){
        cout<<endl<<endl<<"         Transaksi Anda Berhasil\n";
        saldo[a] = saldo[a]-penarikan[a];
        cout<<"              Terima Kasih\n\n";
            }
         }
    system("PAUSE");
    system("CLS");
    }while(sama==false);
}

void pengecekan_no_pendaftaran(){
    if(x==0){
        cout<<"  Tidak Ditemukan Data!!!\n\n\n";
    system("PAUSE");
    system("CLS");
    main();
    }
    else{
        sama=false;
        cout<<"Massukan No Pendaftaran : ";
        cin>>no_nasabah;
        cout<<endl;
        cout<<"Massukan PIN            : ";
        cin>>pin;cout<<endl;
    for(int i=0;i<x;i++){
        if(no_nasabah== no_pendaftaran[i]|| no_tujuan == no_pendaftaran[i] && pin == no_pin[i]){
            sama=true;
            a = i;
            }
        }
    if((no_pendaftaran[i] != no_nasabah) && (no_pendaftaran[i] =! no_tujuan) && (pin == no_pin[i])) {
        cout<<"         No Pendaftaran Belum Terdaftar\n\n\n";
        system("PAUSE");
        system("CLS");
    }
    else if(no_pendaftaran[i] == no_nasabah && pin != no_pin[i]) {
        sama=false;
        cout<<"          PIN Yang Anda Massukan Salah\n\n\n";
        }
    }
}
void setpin(){
    cout<<"Massukan No Nasabah : ";
    cin>>no_nasabah;
    cout<<"Massukan PIN : ";
    cin>>pin;
    for(int i=0;i<x;i++){
        if(no_nasabah== no_pendaftaran[i]|| no_tujuan == no_pendaftaran[i] && pin == no_pin[i]){
            sama=true;
            a = i;
            }
        }
    if(sama==true){
            cout<<"Massukan PIN baru : ";
        cin>>no_pin[i];
        no_pin[i--];
    }



}

void bantuan(){
    do{
        cout<<"+=====================================================+\n";
        cout<<"|                       BANTUAN                       |\n";
        cout<<"+=====================================================+\n";
        cout<<"| 1. Pendaftaran                                      |\n";
        cout<<"|                                                     |\n";
        cout<<"| 2. Isi Saldo                                        |\n";
        cout<<"|                                                     |\n";
        cout<<"| 3. Transfer                                         |\n";
        cout<<"|                                                     |\n";
        cout<<"| 4. Penarikan                                        |\n";
        cout<<"|                                                     |\n";
        cout<<"| 5. Cek Saldo                                        |\n";
        cout<<"|                                                     |\n";
        cout<<"| 6. Lainnya                                          |\n";
        cout<<"|                                                     |\n";
        cout<<"| 7. Kembali                                          |\n";
        cout<<"+=====================================================+\n";
        cout<<"                           ";cin>>pilih_bantuan;
    system("CLS");
    switch(pilih_bantuan){
        case 1:
            bantuan_pendaftaran();
            break;
        case 2:
            bantuan_isi_saldo();
            break;
        case 3:
            bantuan_transfer();
            break;
        case 4:
            bantuan_penarikan();
            break;
        case 5:
            bantuan_cek_saldo();
            break;
        case 6:
            bantuan_lainnya();
            break;
        case 7:
            main();
        default:
            cout<<"Maaf Kode Yang Anda Massukan Salah\n\n";
        }
        system("PAUSE");
        system("CLS");
    }while(pilih_bantuan==1|| pilih_bantuan==2|| pilih_bantuan==3|| pilih_bantuan==4|| pilih_bantuan==5|| pilih_bantuan==6);
}

    void bantuan_pendaftaran(){
        cout<<"                BANTUAN PENDAFTARAN";
        cout<<endl<<endl<<"Jika pendaftaran akun gagal maka :\n\n";
        cout<<"1. Pastikan pengisian tanggal lahir benar\n\n";
        cout<<"2. Pastikan pengisian jenis kelamin dengan HURUF KAPITAL\n\n";
        cout<<"3. Pastikan umur anda lebih dari 17 tahun\n\n";
        cout<<"->Jika Pendaftaran akun berhasil Anda akan mendapatkan bonus Rp 10.000,00\n\n";
        cout<<"->Bonus tersebut secara otomatis akan masuk dalam saldo Anda\n";
        cout<<endl;
        cout<<"->Jika nasabah lupa kode pendaftarannya maka dapat ditanyakan langsung kepada Petugas\n\n";
        cout<<"->No Petugas tidak bisa digunakan untuk pendaftaran\n\n";
        }
    void bantuan_isi_saldo(){
        cout<<"                         BANTUAN ISI SALDO";
        cout<<endl<<endl<<"Pengisian saldo hanya dapat dilakukan jika no pendaftar telah terdaftar\n\n";
        cout<<"->Jika no pendaftar belum terdaftar maka akan kembali ke menu utama\n\n";
        cout<<"->Pengisian saldo minimal adalah Rp 50.000,00\n\n";
        cout<<"->Jika pengisian saldo kurang dari jumlah minimal maka pengisian saldo gagal\n\n";
        }
    void bantuan_transfer(){
         cout<<"                   BANTUAN TRANSFER";
        cout<<endl<<endl<<"Transfer hanya dapat dilakukan jika nomor pendaftar telah terdaftar\n";
        cout<<"dan no tujuan yang akan ditransfer telah terdaftar\n\n";
        cout<<"->Jumlah minimal untuk transfer adalah Rp 10.000,00\n\n";
        cout<<"->Transfer gagal jika jumlah transfer melebihi saldo yang ada\n\n";
        cout<<"->Jika transfer berhasil maka uang akan secara otomatis masuk\n";
        cout<<"  ke no tujuan yang ditransfer dan saldo kita akan berkurang\n\n";
        cout<<"->Jika no tujuan tidak terdaftar maka akan kembali ke menu utama\n\n";
        }
    void bantuan_penarikan(){
        cout<<"                            BANTUAN PENARIKAN";
        cout<<endl<<endl<<"Penarikan hanyan dapat dilakukan oleh nasabah dengan no yang telah terdaftar\n\n";
        cout<<"->Jumlah penarikan minimal adalah Rp 10.000,00\n\n";
        cout<<"->Penarikan gagal jika no belum terdaftar atau jumlah penarikan kurang jumlah minimum\n\n";
        cout<<"->Jika penarikan berhasil maka saldo akan berkurang secara otomatis\n\n";
        }
    void bantuan_cek_saldo(){
         cout<<"                                  BANTUAN CEK SALDO";
        cout<<endl<<endl<<"Pengecekan saldo hanya dapat dilakukan oleh nasabah jika no pendaftaran telah terdafatr\n\n";
        cout<<"->Saldo Nasabah akan berkurang jika melakukan transfer atau penarikan\n\n";
        cout<<"->Saldo yang akan ditampilkan merupakan saldo akhir\n\n";
        }
    void bantuan_lainnya(){
        cout<<"                INFO LEBIH LANJUT\n\n";
        cout<<"              Silahkan menghubungi : \n";
        cout<<"          Call Center : (027)-1500-128\n\n";
        }
    void exit(){
        cout<<endl<<"            Terima Kasih Telah Menggunakan Aplikasi Ini\n";
        cout<<"       Jika Anda Menemukan Error Silahkan Laporkan ke Petugas\n\n";
        cout<<"                   Call Center : (027)-1500-128\n\n";
        exit(0);
    }
//MENU UTAMA
int main(){
    do{
        system("COLOR 19");
cout<<"                    B";Sleep(100);cout<<"A";Sleep(100);cout<<"N";Sleep(100);cout<<"K ";Sleep(100);cout<<"M";Sleep(150);cout<<"A";Sleep(100);cout<<"H";Sleep(100);cout<<"A";Sleep(100);cout<<"S";Sleep(100);cout<<"I";Sleep(100);cout<<"S";Sleep(100);cout<<"W";Sleep(100);cout<<"A";Sleep(200);cout<<endl;
cout<<"                    C";Sleep(100);cout<<"A";Sleep(100);cout<<"B ";Sleep(100);cout<<"Y";Sleep(100);cout<<"O";Sleep(100);cout<<"G";Sleep(100);cout<<"Y";Sleep(100);cout<<"A";Sleep(100);cout<<"K";Sleep(100);cout<<"A";Sleep(100);cout<<"R";Sleep(100);cout<<"T";Sleep(100);cout<<"A\n";
        system("COLOR 1F");
        cout<<"+=====================================================+\n";
        cout<<"|                     MENU UTAMA                      |\n";
        cout<<"+=====================================================+\n";
        cout<<"|1. Pendaftaran                                       |\n";
        cout<<"|                                                     |\n";
        cout<<"|2. Isi Saldo                                         |\n";
        cout<<"|                                                     |\n";
        cout<<"|3. Transfer                                          |\n";
        cout<<"|                                                     |\n";
        cout<<"|4. Penarikan                                         |\n";
        cout<<"|                                                     |\n";
        cout<<"|5. Cek Saldo                                         |\n";
        cout<<"|                                                     |\n";
        cout<<"|6. Set PIN                                           |\n";
        cout<<"|                                                     |\n";
        cout<<"|7. Data Nasabah                                      |\n";
        cout<<"|                                                     |\n";
        cout<<"|8. Bantuan                                           |\n";
        cout<<"|                                                     |\n";
        cout<<"|9. Keluar                                            |\n";
        cout<<"+=====================================================+\n";
        cout<<"                          ";cin>>pilih;
    system("CLS");
    system("COLOR 1E");
switch(pilih){
    case 1:
        pendaftaran();
        break;
    case 2:
        menu_isi_saldo();
        break;
    case 3:
        menu_transfer();
        break;
    case 4:
        menu_penarikan();
        break;
    case 5:
        cek_saldo();
        break;
    case 6:
        setpin();
        break;
    case 7:
        data_nasabah();
        break;
    case 8:
        bantuan();
        break;
    case 9:
        exit();
    default:
        cout<<endl<<"        Maaf Kode Yang Anda Massukan Salah\n\n";
    system("PAUSE");
    system("CLS");
    }
    }while(pilih==1|| pilih==2|| pilih==3|| pilih==4|| pilih==5||
           pilih==6||pilih==7||pilih==8);
}

