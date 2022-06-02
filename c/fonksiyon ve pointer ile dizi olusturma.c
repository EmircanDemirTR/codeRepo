#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziOlustur(int *, int);
void diziYazdir(int *, int);
void maxminbulma(int *, int,int *,int *);
void ortvetoplam(int *,int,int *, int*);

int main(){
    int dizi[10];
    int min,max,ortalama=0,toplam=0;
    diziOlustur(dizi,10);
    diziYazdir(dizi,10);
    maxminbulma(dizi,10, &min,&max);
    ortvetoplam(dizi,10, &ortalama,&toplam);

    return 0;
}

void diziOlustur(int *dizi, int elemansayisi){

    srand(time(NULL));
    int *ptr;
    for(ptr=dizi;ptr<dizi+elemansayisi;ptr++){
        *ptr=rand()%100;
    }

}
void diziYazdir(int *dizi, int elemansayisi){

    int *ptr;
    for(ptr=dizi;ptr<dizi+elemansayisi;ptr++){
        printf("%d ", *ptr);
    } 
    
}
void maxminbulma(int *dizi, int elemansayisi,int *max,int *min){
    int *ptr=dizi;
    *max=*ptr;
    *min=*ptr;
    ptr++;

    for(;ptr<dizi+elemansayisi;ptr++){
        if(*ptr>*max){
            *max=*ptr;
        }
        else if(*ptr<*min){
            *min=*ptr;
        }
    }

    printf("\nDizinin en buyuk elemani %d ve en kucugu %d", *max,*min);
}
void ortvetoplam(int *dizi, int elemansayisi,int *ort, int *toplam){
    int *ptr;
    for(ptr=dizi;ptr<dizi+elemansayisi;ptr++){
        *toplam+=*ptr;
    }
    *ort=*toplam/elemansayisi;
    printf("\nToplam: %d ve ortalama: %d", *toplam,*ort);
}