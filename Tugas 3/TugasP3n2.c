#include <stdio.h>
//Library

typedef struct Pecahan
/*Mendeklarassikan typedef struck "Pecahan" yang memuat dua anggota dengan tipe
data integer*/
{
    int pembilang;
    /*Mendeklarasikan variabel "pembilang" bertipedata integer*/
    int penyebut;
    /*Mendeklarsikan variabel "penyebut" beripedata integer*/
} pecahan;
/*merujuk ke strcut "pecahan"*/

int Bgi(int a, int b)
    {
    if (b == 0){
        return a;
    }
    return Bgi(b, a % b);
    }
    /*Menggunakan fungsi rekursif "Bgi" guna membagi habis bilangan pecahan dengan dirinya sendiri*/

void bulat (struct Pecahan *x)
/*Mendeklarasikan Fungsi "Pecahan" guna menyimpan argumen dari strcut "pecahan"
pada x (pointer x).*/
{
    int bagi = Bgi(x->pembilang, x->penyebut);
    /*Mendeklarsikan variabel "bagi" guna membagi habis inputan user menggunaakan rekursif "Bgi" */
    x->pembilang /= bagi;
    /*Membagi hbis pembilang dengan variabel "bagi" yang telah berisi alur seperti di atas*/
    x->penyebut /= bagi;
    /*Membagi hbis penyebut dengan variabel "bagi" yang telah berisi alur seperti di atas*/
}


int main () 
{
    pecahan pecahan1, pecahan2, pecahan3;
    /*Mendeklarasikan strcut "pecahan" dengan objek "pecahan1" "pecahan2" "pecahan3"*/
    
    printf ("(pembilang, penyebut) : ");
    /*Mencetak "(pembilang, penyebut) : ")" guna meminta user untuk menginputkan pembilang dan penyebut*/
    scanf ("%d %d", &pecahan1.pembilang, &pecahan1.penyebut);
    /*Menangkap inputan user dan di tampung pada objek "pecahan1" bagian pembilang, kemudian sebelahnya
    pada bagian penyebut(untuk yg di bawah sama hanya beda objeknya)*/
    fflush(stdin);
    /*Untuk menghapus memori/cache biar tidak error dan gancet(yang di bawah sama juga)*/
    printf ("(pembilang, penyebut) : ");
    scanf ("%d %d", &pecahan2.pembilang, &pecahan2.penyebut);
    fflush(stdin);
    printf ("(pembilang, penyebut) : ");
    scanf ("%d %d", &pecahan3.pembilang, &pecahan3.penyebut);

    bulat (&pecahan1);
    printf ("\n%d/%d\n", pecahan1.pembilang, pecahan1.penyebut);
    /*Memanggil fungsi "bulat" guna memproses inputan user yang terdapat pada objek "pecahan1"
    sesuai dengan alur fungsi "bulat" di atas, kemudian mencetak hasil proses(output) berupa angka*/

    bulat (&pecahan2);
    printf ("%d/%d\n", pecahan2.pembilang, pecahan2.penyebut);
    /*Memanggil fungsi "bulat" guna memproses inputan user yang terdapat pada objek "pecahan2"
    sesuai dengan alur fungsi "bulat" di atas, kemudian mencetak hasil proses(output) berupa angka*/

    bulat (&pecahan3);
    printf ("%d/%d", pecahan3.pembilang, pecahan3.penyebut);
    /*Memanggil fungsi "bulat" guna memproses inputan user yang terdapat pada objek "pecahan3"
    sesuai dengan alur fungsi "bulat" di atas, kemudian mencetak hasil proses(output) berupa angka*/

    
    return 0;
    //mengembalikan nilai 0 (program berakhir)

}