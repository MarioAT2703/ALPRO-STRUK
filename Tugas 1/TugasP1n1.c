#include <stdio.h>
//Library

int main()
{
    int x[3][2] = {{3,6},{9,8}, {15,10}};
    //Mendeklarasikan sebuah array "x", dua dimensi yang memiliki 3 baris dan 2 kolom 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            x[i][j];
        //prl 1
        }
    //Perulangan "for" di atas digunakan untuk mengakses elemen dalam array "x".
    //Pada baris pertama "prl 1" int i berawal dari 0 dan akan mengulang(increment) hingga mencapai batas 3, karena array x memiliki 3 baris.
    //pada baris kedua "prl 1" int j berawal dari 0 dan akan mengulang(increment) hingga mencapai batas 2, karena array x memiliki 2 kolom.
    //Pada baris ketiga variabel i dan j mengakses dan mengembalikan nlai elemen array "x", tapi nilai yang dikembalikan tidak digunakan apa".
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Nilai array x[%i][%i] adalah : %i \n", i, j, x[i][j]);
        //prl 2
        }
    //Perulangan "for" di atas digunakan untuk mengakses elemen dalam array "x" lagi.
    /*Perulangan "prl 2" berjalan seperti "prl 1", namun terdapat fungsi "printf" yang diikuti oleh argumen "Nilai array x[%i][%i] adalah : %i \n" dan variabel i,j,
    x[i][j] yang nilainya di tunjuk oleh variabel i,j, dimana setiap kali perulangan dilakukan akan mentriger(mencetak) argumen beserta indeks(i) dan kolom(j) 
    yang sedang diakses pada saat itu, sehingga akan menampilkan output seperti pada layar(terminal) di bawah. */
    }
    
    return(0);
    //Mengembalikan nilai 0 atau menandakan program berakhir.
}