#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int saat;
    int dakika;
    float saniye;
}saatbilgileri;

saatbilgileri saatcevirme(double kullanicigirisi);
int main(){
    float kullanicigirisi;
    printf("Cevirmek istediginiz saati, saniye cinsinden giriniz:");
    scanf("%f", &kullanicigirisi);
    saatbilgileri cevirilmis;
    cevirilmis = saatcevirme(kullanicigirisi);
    printf("%d:%d:%.2f", cevirilmis.saat, cevirilmis.dakika, cevirilmis.saniye);
}

saatbilgileri saatcevirme(double kullanicigirisi){
    saatbilgileri donusturulen;
    int tamkisim = (int)kullanicigirisi;
    double salise = kullanicigirisi-tamkisim;

    donusturulen.saat = tamkisim/3600;
    donusturulen.dakika = (tamkisim%3600)/60;
    donusturulen.saniye = (tamkisim%3600)%60 + salise;

    return donusturulen;
}