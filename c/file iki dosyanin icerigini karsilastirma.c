#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int dosyalariKarsilastir(FILE *dosya,FILE *ikinciDosya){
    int karakterSayisi,karakterSayisi2;
    fseek(dosya,0,SEEK_END);//ikisini de dosyanin sonuna gonderdim
    fseek(ikinciDosya,0,SEEK_END);
    karakterSayisi=ftell(dosya);//son karakter kaçıncı byte onu öğrendim, yani karakter sayısı
    karakterSayisi2=ftell(ikinciDosya);
    printf("Ilk dosya %d adet karakter iceriyor.\n",karakterSayisi);
    printf("Ikinci dosya %d adet karakter iceriyor.\n",karakterSayisi2);
    if(karakterSayisi>karakterSayisi2){
        printf("Ilk dosyanizin boyutu ikinci dosyanizdan daha buyuktur\n");
        return 0;
    }
    else if(karakterSayisi<karakterSayisi2){
        printf("Ikinci dosyanizin boyutu ilk dosyanizdan daha buyuktur\n");
        return 1;
    }
    else{
        rewind(dosya);//en bastan karsilastirma yapabilmek icin.
        rewind(ikinciDosya);
        int ch,ch2;
        while(fscanf(dosya, "%c", &ch)!=EOF && fscanf(ikinciDosya, "%c", &ch2)!=EOF ){
            printf("Dosya1'in karakteri:'%c'\n",ch);
            printf("Dosya2'nin karakteri:'%c'\n",ch2);
            if((char)ch!=(char)ch2){// burada karsilastirma yaparken (char) tipine donusturerek karsilastirdik
                return 0;//karakterler farkli.
            }   
        }
    }
    return 1;//tum karakterler ayni.
}
 
 
int main(void){
    FILE *ilkDosya=fopen("deneme.txt","r");
    FILE *ikinciDosya=fopen("deneme2.txt","r");
    if(ilkDosya!=NULL&& ikinciDosya!=NULL){
        int sonuc=dosyalariKarsilastir(ilkDosya,ikinciDosya);
        if(sonuc==1){
            printf("Iki dosya tamamen birbirinin aynisidir.");
        }
        else if(sonuc==0){
            printf("Iki dosya birbirinden farklidir.");
        }
    }
 
    
    return 0;
}