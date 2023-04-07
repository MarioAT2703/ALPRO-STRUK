#include <stdio.h>
//Library

int main()
{
    int arr[70] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
     31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 65, 66, 67, 68, 69, 70};
    //Mendeklarasikan array "arr" satu dimensi berisi angka 1 - 70.
    printf("Array : ");
    //Menampilkan pesan array siap dicetak.
    for (int i = 0; i < 70; i++){
        printf(" %i ,", arr[i]);
    /*Perulangan "for" digunakan untuk mengakses elemen array "arr" kemudian
        mencetaknya(printf)*/
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    /*Menghitung jumlah elemen dlm array "arr" menggunakan sizeof, kemudian 
    menyimpannya ke variabel "n"*/
    int x = 0;
    //Menginisialisasi variabel "x" dengan nilai 0.
    for (int i = 0; i < n; i++) {
    /*Perulangan "for" akan mengulang sebanyak panjang array "arr", 
        yang dimulai dari indeks "i".*/
      x += arr[i];
      //Menjumlahkan variabel "x" dan semua array "arr".
    }

   float rata = (float)x / n;
   //Variabel "rata" bertipedata float yang menginisialisasikan pembagian guna mencari nilai rata-rata array "arr".
   printf("\n\nRata-rata dari elemen array diatas adalah %.2f", rata);
   //Mencetak/menampilkan pesan seeperti pada terminal(hasil rata-rata dari array "arr"), dan "%.2f" digunakan guna menampilkan 2 angka dibelakang koma.

   return 0;
   //Mengembalikan nilai 0 atau menandakan program berakhir.
}