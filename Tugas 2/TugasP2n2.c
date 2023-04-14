#include <stdio.h>
//Library
float arrayMean(int arr[], int j)
/*Mendeklarasikan fungsi "arrayMean" berrtipe data float
yang memuat 2 parameter yaitu "arr" dan "N" bertipedata integer*/
{
    int z = 0;
    /*Mendeklarasikan variabel "z" bertipe data integer yang bernilai 0.*/
        for (int i = 0; i < j; i++){
            z += arr[i];
        }/*Membuat suatu kondisi menggunakan perulangan "for" guna
        mengukur array, kemudian menambahkannya dengan dengan variabel "z"
        (di sini variabel "z" akan mendapat nilai dari hasil jumlah data array[i])*/
    
    return (float) z / j;
    /*Mengembalikan hasil variabel "z"(jumlah data) dibagi
    variabel "j"(ukuran panjang array) dengan hasil nilai bertipedata 
    float */
}

int main ()
{
    int N;
    //Mendeklarasikan variabel N bertipedata integer
    scanf ("%i", &N);
    /*Menggunakan fungsi "scanf" untuk mendapati inputan dari user yang
    di tampung pada variabel N*/
    int arr[N];
    /*Mendeklarasikan variabel "arr(array)" bertipedata integer dengan
    ukuran sepanjang N (N = inpputan user)*/
        for (int i = 0; i < N; i++){
            scanf ("%i", &arr[i]);
        }/*Membuat suatu kondisi menggunakan perulangan "for" guna memberi inputan
        data pada "arr[N]", inputan data di tampung pada variabel i dengan batas
        inputan sepanjang N, kemudian memasukan data pada array(arr[i]).*/

    printf ("%i\n", N);
    //Mencetak variabel "N"
        for (int i = 0; i < N; i++){
        printf ("%i ", arr[i]);
        }/*Mencetak array yang telah di beri inputan data dan menggunakan perulangan "for"
        untuk menampilkan semua inputan yang terdapat pada "arr[i]"*/

    float Hasil = arrayMean(arr, N);
    /*Mendeklarasikan variabel Hasil yang memanggil fungsi arrayMean
    guna mencari nilai rata" dari array(arr[i]) dengan membagi jumlah data array dengan
    panjang/ukuran array*/
    printf ("\n%.2f", Hasil);
    /*Mencetak hasil dari variabel "Hasil" dengan output bertipedata float*/
    return 0;
    //MMengembalikan nilai 0, program berakhir.
}