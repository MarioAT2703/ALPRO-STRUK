#include <stdio.h>
//Library
void KoboImaginaryChess(int i, int j, int size, int *ChesssBoard)
/*Mendeklarasikan fungsi "KoboImaginaryChess" yang memuat 4 parameter yaitu "i", "j", "size", "ChessBoard" bertipe data integer.*/
{
    int a, b, ac, bc;
    /*Mendeklaasikan variabel "a", "b", "ac", "bc".*/
    int jalan[8][2] = {{2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}, {1,-2}, {2,-1}};
    /*Kuda(Knight) dalam catur memiliki gerakan mirip huruf L yaitu memanjang 2 kotak dan melebar 1 kotak
    maka dari itu dideklarasikan array 2D guna membuat kemungkinan pergerakan kuda, dan setiap baris array
    tersebut mempresentasikan pergerakan kuda yang mirip huruf L di setiap pergerakannya.*/

    for (int gas = 0; gas < 8; gas++){
        ac = jalan[gas][0];
        bc = jalan[gas][1];
        a = i + ac;
        b = j + bc;
        /*variabel "gas" digunakan digunakan untuk melakukan perulangan sbanyak delapan kali dengan
        nilai variabel "ac" dan "bc" yang mengambil nilai dari array "jalan" yang mempresentasikan pergerakan
        kuda pada setiap perulangannya, kemudian variabel "a" dan "b" diisi dengan nilai "i" dan "j" ditambah 
        "ac" dan "bc" yang mempresentasikan koordinat kotak yang akan ditandai.*/

        if (a >= 0 && a < size && b >= 0 && b < size){
            *(ChesssBoard + a*size + b) = 1;
        /*Dilakukan pengecekan menggunakan "if" guna memastikan koordinat a dan b berada dalam batas
        papan catur, jika iya maka nilai pada "a*size + b" dalam array "ChessBoard" berubah menjadi 1,
        menandakan bahwa kotak tersebut dapat dijangkau oleh kuda dalam satu langkah.*/
        }
    }

    for (a = 0; a < size; a++){
        for (b = 0; b < size; b++){
            printf ("%i ", *(ChesssBoard + a*size + b));
        }
        printf ("\n");
        //Cetak "\n" digunakan untuk memberi space kebawah agar tidak gancet.
    }
    /*Perulangan "for" dilakukan guna menampilkan isi dari array "ChessBoard" dalam papan catur, pada
    setiap perulangan nilai yang diindeks oleh "a*size + b" diambil dan dicetak menggunakan "printf".*/

}

int main() 
{
    int i, j;
    //Mendeklarasikan variabel "i" dan "j" bertipedata integer.
    int ChessBoard[8][8] = {};
    /*Mendeklarasikan array "ChessBoard" berukuran 8x8 guna mempresentasikan papan catur yang diinisialisai 
    dengan nilai 0 menggunakan kurung kurawal kosong*/
    printf ("");
    scanf ("%i %i", &i, &j);
    /*Memberikan perintah kepada user untuk memberikan inputan yang akan ditampung pada variabel "i" dan "j".*/
    printf ("\n%i %i\n", i, j);
    //Mencetak Variabel "i" dan "j"
    KoboImaginaryChess(i, j, 8, &ChessBoard[0][0]);
    /*Pemanggilan fungsi "KoboImaginaryChess" yang akan memproses inputan user yang
    sebelumnya ditampung di variabel "i" dan "j" dengan batas papan catur.*/
    return 0;
    //Mengembalikan nilai 0, program berakhir.
}