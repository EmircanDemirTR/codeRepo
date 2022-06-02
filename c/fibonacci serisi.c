#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fibonacci(int);
int main(){
    int sayi,i;
    printf("Fibonaccinin ust limitini giriniz");
    scanf("%d", &sayi);
    for(i=0;i<sayi;i++)
        printf("%d ", (fibonacci(i)));
    
}

int fibonacci(int i){
    if(i==0 || i==1){
        return i;
    }
    return fibonacci(i-1)+fibonacci(i-2);
}