#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void bosluksay(char *emircan ,int *bosluksayisi);
void terstenyaz(char *emircan);

int main(){
    int bosluksayisi=0;
    char stringim[50];
    char *emircan=stringim;
    puts("Lutfen stringi giriniz");
    gets(emircan);
    bosluksay(emircan, &bosluksayisi);
    terstenyaz(emircan);

return 0;
}

void bosluksay(char *emircan ,int *bosluksayisi){
    char *ptr=emircan;
    while(*ptr!='\0'){
        if(*ptr==' '){
            *bosluksayisi+=1;
        }
        ptr++;
    }
    printf("Bosluk sayisi: %d\n", *bosluksayisi);

}

void terstenyaz(char *emircan){
    int karaktersayisi = strlen(emircan);
    char *ptr=emircan+karaktersayisi-1;

    while(emircan<=ptr){
        printf("%c", *ptr);
        ptr--;
    }
}