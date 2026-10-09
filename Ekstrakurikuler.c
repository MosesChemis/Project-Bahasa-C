#include <stdio.h>

int main() {
    char nama[50];
    int nilai;
    int kehadiran;

    printf("==========================================\n");
    printf("      SELEKSI EKSTRAKURIKULER IT CLUB     \n");
    printf("==========================================\n");

    printf("\nMasukkan nama siswa : ");
    scanf(" %49[^\n]", nama);

    printf("Masukkan nilai tes (0-100) : ");
    scanf("%d", &nilai);

    printf("Masukkan kehadiran (0-100) : ");
    scanf("%d", &kehadiran);

    if (nilai < 0 || nilai > 100 || kehadiran < 0 || kehadiran > 100) {
        printf("\nData tidak valid!\n");
        printf("Nilai dan kehadiran harus 0 sampai 100.\n");
    }
    else if (nilai >= 75 && kehadiran >= 80) {
        printf("======================================\n");
        printf("             HASIL SELEKSI            \n");
        printf("======================================\n");

        printf("Nama Siswa  : %s\n", nama);
        printf("Nilai Tes   : %d\n", nilai);
        printf("Kehadiran   : %d%%\n", kehadiran);
        printf("Status      : LOLOS SELEKSI\n");
        printf("Selamat! Anda memenuhi syarat IT club.\n");
    }
    else {
        printf("======================================\n");
        printf("             HASIL SELEKSI            \n");
        printf("======================================\n");

        printf("Nama Siswa  : %s\n", nama);
        printf("Nilai Tes   : %d\n", nilai);
        printf("Kehadiran   : %d%%\n", kehadiran);
        printf("Status      : BELUM LOLOS SELEKSI\n");
        printf("Maaf, Anda dinyatakan tidak lolos.\n");

        if (nilai < 75 ) {
            printf("Alasan      : Nilai tes belum mencapai 75.\n");
        }

        if (kehadiran < 80 ) {
            printf("Alasan      : Kehadiran belum mencapai 80%%\n");
        }
    }

    printf("\n======================================\n");
    printf("         Program seleksi selesai        \n");
    printf("========================================\n");

    return 0;
}