#include <stdio.h>
#include <stdlib.h>

void unluSayisiBelirleme(char []);

int main(){
	char kullaniciGirisi[20];
	puts("Lutfen unlu sayisi sayilacak stringi giriniz:");
	gets(kullaniciGirisi);
	unluSayisiBelirleme(kullaniciGirisi);
	return 0;
		
}
void unluSayisiBelirleme(char kullaniciGirisi[]){
	int i=0,j;//unluHARF sayacım.;
	char unluHarfler[]={'a','e','i','u','o','\0'};
	int unluHarfSayilari[]={0,0,0,0,0};
	while(kullaniciGirisi[i]!='\0'){
		for(j=0;j<5;j++){
			if(kullaniciGirisi[i]==unluHarfler[j]){
                unluHarfSayilari[j]+=1;
				break;
			}
		}
		
		i++;
	}
	for(i=0;i<5;i++){
		printf("%c karakteri %d adet gecmektedir.\n",unluHarfler[i],unluHarfSayilari[i]);
	}	
}
