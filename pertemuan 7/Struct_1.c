#include <stdio.h>
#include <time.h>

typedef struct {
    int hari;
    int bulan;
    int tahun;
} Tanggal;

// struct Tanggal {
//     int hari;
//     int bulan;
//     int tahun;
// };

int main() {

    // struct Tanggal sekarang;
    Tanggal sekarang;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    sekarang.hari = tm.tm_mday;
    sekarang.bulan = tm.tm_mon;
    sekarang.tahun = tm.tm_year;

    printf("Sekarang hari = %d\n", sekarang.hari);
    printf("Sekarang bulan = %d\n", sekarang.bulan + 1);
    printf("Sekarang tahun = %d\n", sekarang.tahun + 1900);

    return 0;
}