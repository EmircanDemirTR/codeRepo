#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi, gecicisayi,i=0;
    char bitarray[32];

    printf("bite donusturulecek sayiyi giriniz: "); scanf("%d", &sayi);
    gecicisayi=sayi;

    while(gecicisayi!=0){
        if(gecicisayi%2==0){
            bitarray[i]='0';
        }
        else {
            bitarray[i]='1';
        }
        i++;
        gecicisayi/=2;
    }

    printf("%d sayisinin bit karsiligi: ", sayi);
    while(i>=0){
        printf("%c", bitarray[i]);
        i--;
    }
    return 0;
}