#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int matrisim[10];
    int i,j,satir,sutun;

     for(i=0;i<10;i++){
            matrisim[i]=rand()%10+1;
            printf("%d ", matrisim[i]);
     }

    puts("lutfen satir ve sutun sayisini giriniz:");
    scanf("%d%d", &satir,&sutun);
    int yenidizi[satir][sutun];

    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            yenidizi[i][j]= matrisim[sutun*i+j];
            printf("%d ", yenidizi[i][j]);
        }
        printf("\n");
        
    }


     return 0;
}