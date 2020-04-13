#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char isim[10];
	char soyisim[10];
	int secim;
	int sayi;
	int randomSayi;
	srand(time(NULL)); 

	
	printf("Sansli cekilise hos geldiniz\nLutfen isminizi giriniz:");
	scanf("%s",&isim);
	printf("Lutfen soyisminizi giriniz");
	scanf("%s",&soyisim);
	
	printf("Lutfen asagidakilerden bini seciniz\n[1]-Sansli cekilis dene\n[2]-Kullanici bilgilerinizi kontrol ediniz\n\n\n");
	scanf("%d",&secim);

	switch(secim){
			
			case 1:
			printf("Lutfen birden bese kadar herhangi bir sayi giriniz \n\n");
			scanf("%d",&sayi);
			randomSayi=1+rand()%5;
		
			printf("Seciminiz = %d <--> Random Sayi = %d\n",sayi ,randomSayi);
		
			if(sayi==randomSayi){
				printf("Girdiginiz sayi:=%d\nCekilsteki sayi:=%d\n",sayi,randomSayi);
				printf("Kazandiniz");
				}
		
			else{
			printf("Bir Dahaki sefere");
			}
			
			break;
			case 2:
			printf("Isminiz:=%s\nSoyisminiz:=%s",isim,soyisim);
			break;
			
			default:
			printf("Lutfen yeniden deneyiniz");
				
		}
	
	return 0;
}


