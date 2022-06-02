#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct ogrenci{
    char isim[50];
    char soyisim[50];
    int numara;
};

void bilgilerioku (struct ogrenci *ptr);
void bilgileriyazdir (struct ogrenci *ptr);

int main(){
    struct ogrenci ogr;
    struct ogrenci ogr2;
    bilgilerioku(&ogr);
    bilgileriyazdir(&ogr);
    bilgilerioku(&ogr2);
    bilgileriyazdir(&ogr2);
}

void bilgilerioku (struct ogrenci *ptr){

    puts("Lutfen adi giriniz:");
    scanf("%s", (*ptr).isim);
    puts("Lutfen soyadi giriniz:");
    scanf("%s", (*ptr).soyisim);
    puts("Lutfen numarayi giriniz:");
    scanf("%d", &ptr->numara);

}

void bilgileriyazdir (struct ogrenci *ptr){

    printf("Ogrencinin adi: %s\n", (*ptr).isim);
    printf("Ogrencinin soyadi: %s\n", (*ptr).soyisim);
    printf("Ogrencinin numarasi: %d\n\n", (*ptr).numara);

}