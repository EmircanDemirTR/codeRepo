#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    FILE *fpo,*fpy;
    int ch;
    int numara;
    char dizim[50][50];
    char dizim2[50][50];
    fpo=fopen("deneme.txt", "r");
    fpy=fopen("deneme2.txt", "w");

    if(fpo!=NULL && fpy!=NULL) printf("dosyalar basariyla acildi.");
    else printf("Hata olustu");

    /*do{
        ch=fgetc(fpo);
        fputc(ch, fpy);
    }while(ch!=EOF);*/          //KARAKTER OKUMA ISLEMLERI BUNLAR

   /* while(!feof(fpo)){
        fgets(dizim[ch], 100, fpo);
        fputs(dizim[ch], fpy);
        ch++;
    }*/                         //SATIR OKUMA ISLEMLERI BUNLAR

    while(!feof(fpo)){
        fscanf(fpo, "%s %d %s", &dizim[ch], &numara, &dizim2[ch]);
        fprintf(fpy, "%s %d %s\n", dizim[ch], numara, dizim2[ch]);
        ch++;
    }                           //BICIMLENDIRILMIS OKUMA


    fclose(fpo);
    fclose(fpy);

    return 0;
}