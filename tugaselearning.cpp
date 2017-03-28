#include<iostream>
using namespace std;
main()
{
int x,produk1=5000,produk2=10000,jumlah1,jumlah2,total,bayar,tunai,sisa;
string barang1,barang2,barang3;

    cout<<"============================================"<<endl;
    cout<<"  Program Kasir"<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"Masukkan Nama Produk 1  : "; cin>>barang1;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah1=x*produk1;
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl; 

   cout<<"Masukkan Nama Produk 2  : "; cin>>barang2;
   cout<<"Jumlah Produk   : ";
   cin>>x;
   jumlah2=x*produk2;
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl; 

   bayar=jumlah1+jumlah2;
   cout<<endl; 
   cout<<"============================================"<<endl;
   cout<<"Sub Total   : Rp. "<<bayar<<endl;

 cout<<"============================================"<<endl;
 cout<<"Uang tunai   : Rp. ";
 cin>>tunai;
 sisa=tunai-bayar;
 cout<<"Kembalian   : Rp. "<<sisa<<endl;
 cout<<endl; 
}

