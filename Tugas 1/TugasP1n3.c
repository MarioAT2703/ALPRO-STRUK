#include <stdio.h>
//Library

int main()
{
    int arr[3][2] = {{3,6},{9,8},{15,10}};
//Mendeklarasikan array "arr" dua dimensi 3x2 dengan nilai yang telah tertera.
    printf("\narray : ");
    //Mencetak/menapilkan pesan bahwa array akan dicetak.
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 2; j++){
            printf(" %i ,", arr[i][j]);
        /*Perulangan "for" digunakan untuk mengakses elemen array "arr" dengan variabel "i" dan "j" kemudian
        mencetaknya(printf) dengan nilai elemen array "arr" yang sudah terinisialisasi oleh variabel "i" dan "j".*/
            }
        }
    int cari;
    //Mendeklarasikan variabel "cari" dengan tipe data integer yang nantinya digunakan untuk menyimpan inputan user
    int brs, klm;
    /*Mendeklarasikan vaiabel "brs"(baris),"klm"(kolom) dengan tipe data integer yang digunakan untuk menyimpan indeks baris dan kolom dri
    elemen yang sama dengan nilai yang dicari.*/
    int tmu = 0;
    /*Menginisialisasi variabel "tmu" dengan nilai 0 */
    printf("\nMasukkan elemen yang ingin dicari indeksnya : ");
    //Menampilkan pesan kepada user yang ingin mencari nilai pada array.
    scanf("%i", &cari);
    /*Fungsi "scanf" digunakan untuk menyimpan inputan user pada variabel "cari".*/
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 2; j++){
                if (arr[i][j] == cari){
                 /*Perulangan "for" digunakan untuk mengakses elemen array "arr" dengan variabel "i" dan "j" kemudian
        mengset variabel "cari" menjadi true dengan nilai elemen array "arr".*/
                    brs = i;
                    //Variabel brs(baris) digunakan untuk menyimpan indeks "i" dengan catatan kondisi true pada variabel "cari".
                    klm = j;
                    //Variabel klm(kolom) digunakan untuk menyimpan indeks "j" dengan catatan kondisi true pada variabel "cari".
                    tmu = 1;
                    //Variabel "tmu" dideklarasikan dengan kondisi true/false(1/0) untuk mengcek dan jika true akan melanjutkan program.
                break;
                //Jika elemen yg di cari ditemukan maka keluar perulangan melalui pernyataan "break;" untuk lanjut ke program berikutnya.
                }
            }
        }
        if (tmu){
        //Jika Variabel "tmu" dalam kondisi true makan akan mencetak pesan melalui "printf" seperti hasi output pada terminal dibawah.
        printf("\nElemen %i berada di indeks[%i]{%i}", cari, brs, klm);
    }
    return(0);
    //Mengembalikan nilai 0 atau menandakan program berakhir.
}