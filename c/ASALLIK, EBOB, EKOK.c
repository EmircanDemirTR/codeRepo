#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(){

//ASAL SAYI HESAPLAMA
    int sayi,i,asalsorgu=0;
    printf("asalligi sorgulanacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    for(i=2;i<sayi;i++){
      if(sayi%i==0){
         asalsorgu=1;
         break;
      }
    }

    if(asalsorgu==1){
    printf("sayi asal degildir\n");
    }
    else printf("sayi asaldir\n");

//EBOB EKOK HESAPLAMA
    int sayi1,sayi2,ebob,ekok;
    int sayac,buyuksayi,kucuksayi;
    printf("iki sayi giriniz: "); scanf("%d%d", &sayi1,&sayi2);
    if(sayi1>=sayi2){
        buyuksayi=sayi1;
        kucuksayi=sayi2;
    }
    else{
         kucuksayi=sayi1;
         buyuksayi=sayi2;
    }

     //EKOK HESAPLAMA
    sayac=buyuksayi;
    while(1){
        if(sayac%buyuksayi==0 & sayac%kucuksayi==0){
            ekok=sayac;
            break;
          }
        else sayac++;
    }
    
    //EBOB HESAPLAMA
    
    sayac=kucuksayi;
    while(1){
        if(buyuksayi%sayac==0 & kucuksayi%sayac==0){
            ebob=sayac;
            break;
        }
        else sayac--;
    }

   printf("EBOB:%d, EKOK:%d", ebob,ekok);

    return 0;
}