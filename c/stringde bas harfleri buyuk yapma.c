#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i=0,j=0;
    char dizi[20];
    char buyukler[20];
    puts("Lutfen diziyi giriniz: ");
    gets(dizi);

    dizi[i]=toupper(dizi[i]);
    buyukler[j]=dizi[i];
    i++; j++;

    while (dizi[i]!='\0')
    {
        if(dizi[i]==' '){
            i++;
            dizi[i]=toupper(dizi[i]);
            buyukler[j]=dizi[i];
            j++;
        }
        i++;
    }

    puts(dizi);
    puts(buyukler);

    return 0;
}
    