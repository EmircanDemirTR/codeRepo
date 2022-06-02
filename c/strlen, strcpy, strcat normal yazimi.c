#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char dizi[20];
    char dizi2[20];
    int karaktardizi=0, karaktardizi2=0, i=0;
    puts("Lutfen dizi 1 ve dizi 2'yi giriniz: ");
    gets(dizi);
    gets(dizi2);

    /*
    //STRLEN (UZUNLUK HESAPLAMA) -- strlen(dizi)
    while(dizi[karaktardizi]!='\0'){
        karaktardizi++;
    }
    while(dizi2[karaktardizi2]!='\0'){
        karaktardizi2++;
    }
    printf("ilk dizinin uzunlugu %d'dir\n", karaktardizi);
    printf("ikinci dizinin uzunlugu %d'dir", karaktardizi2);
    
//------------------------------------------------
   //STRCPY (KOPYALAMA) -- strcpy(dizi2,dizi)
    karaktardizi = strlen(dizi);
    
    for(i;i<karaktardizi;i++){
        dizi2[i]=dizi[i];
    }

    printf("dizi1: %s ve dizi2: %s'dir.", dizi,dizi2);
    

   //------------------------------------------------
   //STRCAT (EKLEME) -- strcat(dizi,dizi2)
    karaktardizi=strlen(dizi); karaktardizi2=strlen(dizi2);
    for(i;i<karaktardizi2;i++){
        dizi[karaktardizi+i]=dizi2[i];
    }
    dizi[karaktardizi+i]='\0';

    puts(dizi);
    puts(dizi2);
    */

   if(strcmp(dizi,dizi2)==0){
       printf("bunlar aynidir");
   }
    return 0;
}