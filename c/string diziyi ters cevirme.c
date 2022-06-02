#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int karaktersayisi,i;
    char gecici;
    char dizi[20];
    puts("Lutfen diziyi giriniz: ");
    gets(dizi);
    karaktersayisi = strlen(dizi);


    for(i=0;i<karaktersayisi/2;i++){
        gecici=dizi[i];
        dizi[i]=dizi[karaktersayisi-1-i];
        dizi[karaktersayisi-1-i]=gecici;
    }

    puts(dizi);
    return 0;
}