#include <stdio.h>
//Library

int main()
{
    int lantai[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //Mendeklarasikan array "lantai" dengan nilai elemen yang tertera.
    printf("lantai :");
    //Menampilkan pesan array "lantai" siap dicetak.
        for (int i = 0; i < 10; i++){
    printf(" %i ,", lantai[i]);
    /*Perulangan "for" digunakan untuk mengakses elemen array "lantai" kemudian
        mencetaknya(printf)*/
    }

    int pilih;
    //Mendeklarasikan variabel "pilih" bertipedata integer.
    printf("\n\nPilih lantai : ");
    //Menampilkan pesan guna meminta user untuk memilih lantai.
    scanf("%i", &pilih);
    //MMyimpan sementara inputan user pada variabel "pilih".

    int j = 0;
    //Mendeklarasikan variabel "j" dengan nilai 0.
    for (int i = 0; i < 10; i++){
     /*Perulangan "for" akan mengulang sebanyak panjang array "lantai", 
        yang dimulai dari indeks "i".*/
        if (lantai[i] == pilih){
        //Membuat suatu kondisi true jika array "lantai" sama dengan variabel "pilih".
            j = i;
            //Mengset nilai variabel "j" dengan indeks "i".
            break;
            //Pernyataan "break;" untuk berhenti dan keluar perulangan lalu berpindah ke program berikutnya.
        }
    }

    printf("Urutan lantai : {");
    //Menampilkan pesan urutan lantai.
    if (j < 2){
        for (int i = 0; i < 5; i++){
            printf("%i ,", lantai[i]);
    /*membuat suatu kondisi jika nilai variabel "j"
     kurang dari 2, maka akan melakukan perulangan "for dengan indeks "i" dan 
     batas kurang dari 5, lalu menampilkannya melalu "printf", */
        }
    } else if (j > 7){
        for (int i = 5; i < 10; i++){
            printf("%i ,", lantai[i]);
    /*membuat suatu kondisi jika nilai variabel "j"
     kurang dari 7, maka akan melakukan perulangan "for dengan indeks "i" yang bernilai 5 dan 
     batas kurang dari 10, lalu menampilkannya melalu "printf", */
        }
    } else {
        for (int i = j-2; i <= j+2; i++ ){
        printf("%i ,", lantai[i]);
    /*membuat suatu kondisi jika nilai variabel "j"
     diantara 2 sampai 7, maka akan melakukan perulangan "for dengan indeks "i" dan 
     batas kurang dari sama dengan variabel j tambah 2, lalu menampilkannya melalui "printf", */
        }
    }
    printf("\b}\n");
    //Menampilan pesan tutup kurawal dan maju 1 karakter(backspace) guna menghapus ",".

    return(0);
    //Mengembalikan nilai 0 atau menandakan program berakhir.
}