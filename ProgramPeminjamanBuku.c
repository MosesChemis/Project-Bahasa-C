#include <stdio.h>
// Memanggil library stdio.h.
// Library ini digunakan untuk fungsi input dan output
// seperti printf() dan scanf().
// printf() = Menampilkan informasi ke layar/output
// scanf() = Menerima/membaca input dari pengguna



int main() {
    // Fungsi utama program.
    // Program C akan mulai dijalankan dari fungsi main().

    // ====================================================
    // 1. DEKLARASI VARIABEL
    // ====================================================

    char nama[50];
    // Membuat variabel nama bertipe char. /Tipe data untuk menyimpan satu karakter.
    // [50] berarti dapat menyimpan maksimal 49 karakter
    // ditambah 1 karakter khusus untuk menandai akhir teks.

    char buku[100];
    // Membuat variabel buku bertipe char.
    // Variabel ini digunakan untuk menyimpan judul buku.
    // [100] berarti dapat menyimpan teks hingga 99 karakter.

    int jumlahBuku;
    // Membuat variabel jumlahBuku bertipe int.
    // Variabel ini digunakan untuk menyimpan jumlah buku
    // yang dipinjam.

    int lamaPeminjaman;
    // Membuat variabel lamaPeminjaman bertipe int.
    // Variabel ini digunakan untuk menyimpan lama peminjaman
    // dalam satuan hari.

    // ========================================================
    // 2. MENAMPILKAN JUDUL PROGRAM
    // ========================================================

    printf("===========================================\n");
    // Menampilkan garis pembatas pada layar.
    // \n digunakan untuk berpindah kebaris berikutnya.

    printf("       PEMINJAMAN BUKU PERPUSTAKAAN        \n");
    //  Menampilkan judul program.

    printf("===========================================\n");
    // Menampilkan garis pembatas bagian bawah


    // =======================================================
    // 3. INPUT NAMA PEMINJAM
    // =======================================================

    printf("Masukkan nama peminjam : ");
    // Menampilkan pesan agar pengguna memasukkan nama.

    scanf(" %[^\n]", nama);
    // Membaca nama yang dimasukkan pengguna
    // %[^\n] digunakan agar input yang memiliki spasi

    // =======================================================
    // 4. INPUT JUDUL BUKU
    // =======================================================

    printf("Masukkan judul buku : ");
    // Menampilkan pesan agar pengguna memasukkan judul buku

    scanf(" %[^\n]", buku);
    // Membaca judul buku yang dimasukkan pengguna.
    // %[^\n] memungkinkan judul buku memiliki spasi.

    // =======================================================
    // 5. INPUT JUMLAH BUKU
    // =======================================================

    printf("Masukkan jumlah buku : ");
    // Menampilkan pesan agar pengguna memasukkan 
    // jumlah buku yang dipinjam

    scanf("%d", &jumlahBuku);
    // Membaca angka yang dimasukkan pengguna.
    // %d digunakan untuk membaca data bertipe int.

    // =======================================================
    // 6. INPUT LAMA PEMINJAMAN
    // =======================================================

    printf("Lama peminjaman (hari) : ");
    // Menampilkan pesan agar pengguna memasukkan
    // lama peminjaman dalam satuan hari.

    scanf("%d", &lamaPeminjaman);

    // 7. MENAMPILKAN HASIL PEMINJAMAN
    printf("\n");
    printf("=============================================\n");
    printf("                DATA PEMINJAMAN              \n");
    printf("=============================================\n");

    // 8. MENAMPILKAN NAMA PEMINJAM
    printf("Nama peminjam   : %s\n", nama);

    // 9. MENAMPILKAN JUDUL BUKU
    printf("Judul Buku      : %s\n", buku);

    // 10.MENAMPILKAN JUMLAH BUKU
    printf("Jumlah Buku     : %d\n", jumlahBuku);

    // 11.MENAMPILKAN LAMA PEMINJAMAN
    printf("Lama Peminjaman : %d hari\n", lamaPeminjaman);
    // Menampilkan lama peminjaman.
    // %d digunakan karena lamaPeminjaman bertipe int.

    // 12.PESAN AKHIR
    printf("===========================================\n");
    printf("           DATA BERHASIL DISIMPAN          \n");
    printf("===========================================\n");

    // 13.MENGAKHIRI PROGRAM
    return 0;
    // Mengakhiri program.
    // Nilai 0 menunjukkan bahwa program selesai
    // tanpa mengalami kesalahan.
}