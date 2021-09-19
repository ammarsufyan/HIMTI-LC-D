#include<stdio.h>
#include<conio.h>

int main(){

    // contoh program satu kasus
    // program membaca tinggi badan
    // jika tinggi badan lebih dari sama dengan 150 maka boleh naik wahana
    int tinggiBadan;
    printf("Masukkan tinggi badan: ");
    scanf("%d", &tinggiBadan);

    if(tinggiBadan >= 150){ // jika nilai tinggiBadan lebih besar sama dengan 150 maka akan mengeksekui block di bawah
        printf("Boleh naik wahana");
    }
    printf("\n\n");

    // contoh program dua kasus
    // program menentukan apakah tahun kabisat atau bukan
    int tahun;
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    // tahun kabisat adalah tahun yang habis dibagi dengan 4
    if(tahun % 4 == 0){ // jika nilai tahun habis dibagi dengan 4 maka akan mengeksekusi block di bawah
        printf("Tahun Kabisat");
    }
    else{ // jika kondisi if salah, maka akan mengeksekusi block di bawah
        printf("Bukan Tahun Kabisat");
    }
    printf("\n\n");

    // contoh program tiga kasus atau lebih
    // program menentukan wujud benda berdasarkan tinggi suhunya
    // catatan: besaran suhu adalah Celcius
    int suhu;

    printf("Masukkan Suhu: ");
    scanf("%d", &suhu);

    // jika suhu di bawah atau sama dengan 0 maka wujudnya padat
    // jika suhu berada di antara 0 sampai 100 maka wujudnya cair
    // jika suhu di atas 100 maka wujudnya gas
    if(suhu <= 0){ // jika nilai suhu lebih kecil sama dengan 0 maka akan mengeksekusi block di bawah
        printf("Padat");
    }
    else if(suhu > 0 && suhu < 100){ // jika nilai suhu berada di antara 0 dan 100 maka akan mengeksekusi block di bawah
        printf("Cair");
    }
    else{ // jika kedua kondisi di atas salah, maka akan mengeksekusi block di bawah
        printf("Gas atau Uap");
    }
    printf("\n\n");

    // contoh program switch case
    // program akan membaca bulan dan tahun dalam angka
    // lalu program akan memberikan jumlah harinya berdasarkan data bulan dan tahun yang ada
    int bulan, tahunSwitch, jumlahHari = 0;

    printf("Masukkan Bulan (1-12)= ");
    scanf("%d", &bulan);
    printf("Masukkan Tahun= ");
    scanf("%d", &tahunSwitch);

    switch(bulan){ // parameter bulan akan dicek disetiap casenya
    case 1:
        jumlahHari = 31;
        break; // break untuk keluar dari block case
    case 2:
        if(tahunSwitch % 4 == 0){
            jumlahHari = 29;
        }
        else{
            jumlahHari = 28;
        }
        break;
    case 3:
        jumlahHari = 31;
        break;
    case 4:
        jumlahHari = 30;
        break;
    case 5:
        jumlahHari = 31;
        break;
    case 6:
        jumlahHari = 30;
        break;
    case 7:
        jumlahHari = 31;
        break;
    case 8:
        jumlahHari = 31;
        break;
    case 9:
        jumlahHari = 30;
        break;
    case 10:
        jumlahHari = 31;
        break;
    case 11:
        jumlahHari = 30;
        break;
    case 12:
        jumlahHari = 31;
        break;
    }

    printf("Jumlah Hari dalam Bulan %d adalah %d", bulan, jumlahHari);
    return 0;
}
