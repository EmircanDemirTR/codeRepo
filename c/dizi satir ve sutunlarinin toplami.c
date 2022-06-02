#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int matrisim[5][5];
    int satirtoplam, sutuntoplam, i,j;

     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matrisim[i][j]=rand()%10+1;
            printf("%d\t", matrisim[i][j]);
        }
        printf("\n");
     }

    for(i=0;i<5;i++){
        satirtoplam=0;
        sutuntoplam=0;
         for(j=0;j<5;j++){
            satirtoplam+=matrisim[i][j];
            sutuntoplam+=matrisim[j][i];
        }

        printf("%d. satirin toplami: %d\t", i+1,satirtoplam);
        printf("%d. sutunun toplami: %d", i+1,sutuntoplam);
        printf("\n");
    }


    return 0;
}