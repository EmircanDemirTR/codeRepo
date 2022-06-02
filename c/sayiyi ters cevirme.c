#include <stdio.h>

int main(){

    int sayi, gecicisayi, sayinintersi=0,kalan;
    printf("Lutfen tersi alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    gecicisayi=sayi;

    while(gecicisayi!=0){
        kalan=gecicisayi%10;
        sayinintersi=sayinintersi*10+kalan;
        gecicisayi/=10;
    }
    printf("%d sayisinin tersi %d'dir.", sayi,sayinintersi);


    return 0;
}