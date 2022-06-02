#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int i=0;
    char dizim[20][20];
    char dizim2[20][20];
    int numara;
    FILE *fp;
    fp= fopen("a.txt", "r+");
   

    if(fp==NULL) printf("Hata olustu ");
    else printf("Basarili ");
    fseek(fp,0,SEEK_END);
    int sonuc=ftell(fp);
    printf("%d", sonuc);

    rewind(fp);
    while(!feof(fp)){
    fscanf(fp, "%s %d %s", &dizim[i], &numara, &dizim2[i]);
    printf("%s %d %s\n", dizim[i], numara, dizim2[i]);
    i++;
    }
    
    fclose(fp);
    
    return 0;
}