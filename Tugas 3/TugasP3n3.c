#include <stdio.h>
//Library

// Luas Trapesium = 1/2 x (a+b) x t
/* A = sisi sejajar pertama
   B = sisi sejajar kedua
   t = tinggi */

#include <stdio.h>
//Library

typedef struct coordinatTrapesium {
    int x;
    int y;
} Trapesium;
/*Mendeklarassikan typedef struct "Pecahan" yang memuat dua anggota("x" "y") dengan tipe
data integer yang merujuk ke struct "Trapesium"*/

int main() {
    Trapesium a, b, c, d, e, f;
    /*Mendeklarasikan strcut "Trapesium" dengan objek "a" "b" "c" "d" "e" "f"*/
    int A, B, t;
    /*Mendeklarasikan variabel "A" "B" "t" bertipedata integer guna membuat sisi sejajar dan
    tinggi pada trapesiuum*/
    float luas;
    /*Mendeklarasikan variabel "luas" bertipedata float*/

    printf("Masukkan koordinat titik A: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Masukkan koordinat titik B: ");
    scanf("%d %d", &b.x, &b.y);
    printf("Masukkan koordinat titik C: ");
    scanf("%d %d", &c.x, &c.y);
    printf("Masukkan koordinat titik D: ");
    scanf("%d %d", &d.x, &d.y);
    printf("Masukkan koordinat titik E: ");
    scanf("%d %d", &e.x, &e.y);
    printf("Masukkan koordinat titik F: ");
    scanf("%d %d", &f.x, &f.y);
    /*Mencetak "Masukkan koordinat titik A-F" guna memminta inputan pada user yang di personalisasikan
    pada sumbu x(horizontal) dan y(vertikal) untuk membangun bentuk trapesium*/
    A = b.x - a.x;
    B = f.x - e.x;
    t = a.y - c.y;
    /*Membentuk sisi sejajar dan tinggi trapesium menggunakan koordinat sesuai yang
    disimpan pada variabel "A" "B" "t"*/

    luas = (A + B) * t / 2.0;
    /*Menghitung luas trapesium*/

    printf("\nLuas trapesium : %.2f\n", luas);
    /*Mencetak outpuut hasil proses "luas" berupa angka dengan dua 0 di belakang koma(float)*/
    return 0;
    /*Mengembalikan nilai 0 (Program berakhir)*/
}
