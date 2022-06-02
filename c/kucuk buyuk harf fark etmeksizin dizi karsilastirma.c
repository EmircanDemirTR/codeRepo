#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int karaktersayisi, karaktersayisi2 ,i;
    char dizi[20];
    char dizi2[20];

    puts("Lutfen dizi 1 ve dizi 2'yi giriniz: ");
    gets(dizi);
    gets(dizi2);

     karaktersayisi = strlen(dizi);
     karaktersayisi2 = strlen(dizi2);

     if(karaktersayisi!=karaktersayisi2){
         printf("Bu iki yazi sayi bakimindan farklidir");
     }
     
     else{
         for(i=0;i<karaktersayisi;i++){
             if(tolower(dizi[i])!=tolower(dizi2[i])){
                 printf("Bu iki yazi karakter bakimindan farklidir");
                 break;
             }
         }
         printf("Bu iki dizi aynidir");
    }



    return 0;
}