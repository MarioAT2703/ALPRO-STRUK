#include <stdio.h>
//Library

int main()
{
    int x[5] = {15, 21, 4, 6, 2};
    //Mendeklarasikan array "x" 1 dimensi dengan 5 elemen dan nlai yang tertera. 
    printf("Array awal : \n");
    //Mencetak/menapilkan pesan bahwa array awal(diatas) akan dicetak.
        for (int i = 0; i < 5; i++){
        printf(" %i, ", x[i]);
        /*Perulangan "for" digunakan untuk mengakses elemen array "x" kemudian
        mencetaknya(printf)*/
    }
    
    //Selection sort digunakan untuk mengurutkan array.
    int ukur = sizeof(x) / sizeof(x[0]);
    /*Menghitung jumlah elemen dlm array "x" menggunakan sizeof, kemudian 
    menyimpannya ke variabel "ukur"*/
    int dkt , tmp;
    //Mendeklarasikan variabel dkt dan tmp bertipe data integer.
    for (int i = 0; i < ukur; i++){
    //Perulangan "for" akan mengulang sebanyak panjang array "x" yang dimulai dari indeks "i".
        dkt = i;
        //Mengset nilai awal variabel "dkt" dengan indeks "i".
        for (int j = i; j < ukur; j++){
        /*Perulangan "for" akan mengulang sebanyak panjang array "x", 
        yang dimulai dari indeks "i"(karena tertera j = i)*/ 
            if(x[j] < x[dkt]){
                dkt = j;
        /*Membuat suatu keadaan jika nilai elemen indeks "j" lebih kecil dari nilai
        elemen indeks "dkt", maka mengset nilai "dkt" dengan "j".*/
            }
        }
        tmp = x[i];
        //tmp(temporary) digunakan untuk menyimpan nilai smentara.
        x[i] = x[dkt];
        x[dkt] = tmp;
        /*Menukan/mengswab nilai elemen di indeks "i" dengan elemen di indeks "dkt".*/
    }
    printf("\nArray yang telah diurutkan : \n");
    /*Mencetak/menapilkan pesan bahwa array yang telah diurutkan akan dicetak.*/
    for (int i = 0; i < ukur; i++){
        printf(" %i, ", x[i]);
        /*Perulangan "for" lagi, untuk mencetak setiap elemen array yang 
        telah urut ke "printf" dibawah*/ 
    }
    return(0);
    //Mengembalikan nilai 0 atau menandakan program berakhir.
}
    
