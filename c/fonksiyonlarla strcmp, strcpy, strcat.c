#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void fonkstrcmp(char *, char *);
void fonkstrcat(char *, char *);
void fonkstrcpy(char *, char *);
int main(){

    char stringim[50];
    char *str1=stringim;
    puts("Lutfen string 1'i giriniz");
    gets(str1);

    char stringim2[50];
    char *str2=stringim2;
    puts("Lutfen string 2'yi giriniz");
    gets(str2);

   // fonkstrcmp(str1, str2);
    fonkstrcat(str1, str2);
    puts(str1);

    fonkstrcpy(str1, str2);
    puts(str1);

}

void fonkstrcmp(char *str1, char *str2){

    char *p1= str1;
    char *p2= str2;

    while(*p1!='\0' && *p2!='\0'){
        if(*p1==*p2){
            printf("Bu iki deger aynidir\n");
            p1++; p2++;
        }
        else{
            printf("Bu iki deger farklidir.");
            break;
        }
    }
}
void fonkstrcat(char *str1, char *str2){
    int karaktersayisi= strlen(str1);
    char *ptr1=str1+karaktersayisi;
    char *ptr2=str2;
    while(*ptr2!='\0'){
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1='\0';
}
void fonkstrcpy(char *str1, char *str2){
    char *ptr1= str1;
    char *ptr2= str2;

    while(*ptr2!='\0'){
        *ptr1=*ptr2;
        ptr1++; ptr2++;
    }
    *ptr1='\0';
}