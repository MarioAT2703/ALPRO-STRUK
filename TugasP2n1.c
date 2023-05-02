#include <stdio.h>
//Library
int greatestOf(int a, int b, int c, int d)
/*Mendeklarasikan sebuah fungsi "greatestOf" yang 
menampung 4 parameter bertipe data integer*/
{
int max = a;
/*Mendeklarasikan variabel max bertipe data integer dimulai dari "a" yang 
berguna untuk membuat suatu kondisi agar di temukan nilai
maksimal dari 4 parameter*/
if (b > max){
    max = b;
//Ketika "b" lebih dari "max", maka swap "max" menjadi "b"
}
if (c > max){
    max = c;
//Ketika "c" lebih dari "max", maka swap "max" menjadi "c"
}
if (d > max){
    max = d;
////Ketika "d" lebih dari "max", maka swap "max" menjadi "d"
}  
    return max;
    //Mengembalikan nilai ke variabel max dengan nilai max yang terbaru setelah melakukan pengecekan.
}

int main ()

{
    int a, b, c, d;
    //Mendeklarasikan 4 variabel bertipedata integer, yaitu variabel a, b, c, d.
    scanf ("%i %i %i %i", &a, &b, &c, &d);
    /*menggunakan fungsi scanf guna memberikan inputan sesuai yang
    diinginkan*/
        if (a == b || a == c || a == d || b == c || b == d || c == d){
            printf ("Error (Angkanya tidak boleh sama ya).");
            return 1;
        /*Dilakukan sebuah pengecekan dengan pernyataan "if" guna tidak ada angka yang sama
        pada inputan atau tidak dapat menginputkan angka yang sama, kemudian mengembalikan nilai 1
        jika inputan benar dan melanjutkan program.*/
        }
    printf ("%i %i %i %i\n", a, b, c, d);
    //Mencetak hasil dari inputan user sesuai dengan variabelnya. 
    int hasil = greatestOf(a, b, c, d);
    /*Mendeklarasikan variabel "hasil" yang yang memanggil fungsi "greatestOf"
    guna memproses inputan user yang terdapat pada variabel a, b, c, d. */
    printf ("%i", hasil);
    //Mencetak hasil proses dari variabel "hasil".

    return 0;
    //MMengembalikan nilai 0, program berakhir.
}