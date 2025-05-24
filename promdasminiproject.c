#include <stdio.h>

int main() {
    FILE *file;
    int Input;
    char aktivitas[256];

    do {
        printf("SILAHKAN DI PILIH KANG\n");
        printf("1. Tambah catatan\n");
        printf("2. Lihat catatan\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &Input);
        getchar(); // bersihkan enter

        if (Input == 1) {
            file = fopen("catatanAkang.txt", "a");
            if (file == NULL) {
                printf("Gagal membuka file.\n");
                continue;
            }

            printf("Ketik catatan kang: ");
            fgets(aktivitas, sizeof(aktivitas), stdin);

            fprintf(file, "- %s", aktivitas); // format: - Aktivitas
            fclose(file);

            printf("Catatan udah disimpan.\n");

        } else if (Input == 2) {
            file = fopen("catatanAkang.txt", "r");
            if (file == NULL) {
                printf("Belum ada catatan.\n");
                continue;
            }

            printf("catatanAkangFarel");
            char ch;
            while ((ch = fgetc(file)) != EOF) {
                putchar(ch);
            }
            fclose(file);

        } else if (Input == 0) {
            printf("Keluar dari program.\n");
        } else {
            printf("Pilihan tidak valid.\n");
        }

    } while (Input != 0);

    return 0;
}

