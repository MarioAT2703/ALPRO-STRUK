#include <stdio.h>
//library

struct Barang 
/*Mendeklarasikan struct "Barang" yang berisi beberapa anggota dengan tipe data 
integer dan char*/
{
    int modal;
    //Mendeklarasikan variabel "modal" bertipedata integer
    int jual;
    //Mendeklarsikan variabel "jual" bertipeedata integer
    char namaBarang[30];
    /*Mendeklarasikan variabel "namaBarang" bertipedata character dengan panjang
    maksimal 30*/
};

void untung (struct Barang *a);
/*Mendeklarasikan Fungsi "untung" guna menyimpan argumen dari strcut "barang"
pada a (pointer a).*/

int main()
{
    struct Barang barang;
    /*Mendeklarasikan struct "Barang" dengan objek "barang" yang menerima input
    melalui "scanf"*/
    printf ("Nama : ");
    /*Mencetak "Nama : " guna meminta inputan nama barang*/
    scanf ("%s", barang.namaBarang);
    /*Melalui "scanf" user dapat memberikan inputan nama barang karena sudah dideklarasikan 
    yaiu objek(barang).namaBarang dan masuk ke Struct Barang + pointer a*/
    printf ("Modal : ");
    /*Mencetak "Modal : " guna meminta inputan harga modal barang*/
    scanf ("%d", &barang.modal);
    /*Melalui "scanf" user dapat memberikan inputan harga modal barang karena sudah dideklarasikan
    yaiu objek(barang).modal dan masuk ke Struct Barang + pointer a*/
    printf ("Jual : ");
    /*Mencetak "Jual : " guna meminta inputan harga jual barang*/
    scanf ("%d", &barang.jual);
    /*Melalui "scanf" user dapat memberikan inputan harga jual barang karena sudah dideklarasikan
    yaiu objek(barang).modal dan masuk ke Struct Barang + pointer a*/

    untung (&barang);
    /*Memanggil fungsi untung untuk mengakses objek barang dan memprosesnya*/
    return 0;
    //Mengembalikan nilai 0 (program berakhir)
}

void untung (struct Barang *a)
{
    printf ("\nMargin : %d", a->jual - a->modal);
}
/*Definisi daari fungsi "untung" yang sudah di deklarasikan diatas, yang mengakses struct "Barang" untuk
menghasilkan outputan keuntungan (Margin) dan mencetak keuntungan tersebut di Margin*/