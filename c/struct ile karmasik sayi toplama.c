#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	float gercekKisim;//gerçek sayı 
	float sanalKisim;//i li olan kısım 
}kompleksSayi;

void sayiTopla(kompleksSayi sayi1,kompleksSayi sayi2,kompleksSayi *sonuc){
	sonuc->gercekKisim=sayi1.gercekKisim+sayi2.gercekKisim;
	sonuc->sanalKisim=sayi1.sanalKisim+sayi2.sanalKisim;	
}


int main(void){
	
	kompleksSayi sayi1,sayi2,sonuc;
	
	printf("Lutfen ilk sayinin sirasiyla gercek ve sanal kismini giriniz:");
	scanf("%f%f",&sayi1.gercekKisim,&sayi1.sanalKisim);
	
	printf("Lutfen ikinci sayinin sirasiyla gercek ve sanal kismini giriniz:");
	scanf("%f%f",&sayi2.gercekKisim,&sayi2.sanalKisim);
	
	sayiTopla(sayi1,sayi2,&sonuc);
	printf("Sonuc:%.1f+%.1fi",sonuc.gercekKisim,sonuc.sanalKisim);
	
	
	

	return 0;
}