#include <stdio.h>

int main(){
	
	int x,y,secim;
	printf("Lutfen birinci sayiyi giriniz");
	scanf("%d",&x);
	printf("lutfen ikinci sayiyi giriniz");
	scanf("%d",&y);
	
	printf("\nHangi islemi uygulamak istiyorsunuz");
	printf("\n[1]- Toplama Islemi\n[2]-Cikarma islemi\n[3]-Carpma islemi\n[4]-Bolme islemi");
	scanf("%d",&secim);
		
	/*	switch(secim){
		
		
		
		 	case 1:printf("Birinci Durumu sectiniz\nSayilarin toplami=%d",x+y);break;
			case 2:printf("Ikinci durumu sectiniz\n sayilarin farki=%d",x-y);break;
			case 3:printf("ucuncu durumu sectiniz\nsayilarin carpimi=%d",x*y);break;
			case 4:printf("dorduncu durumus ectiniz\nB,lme isleminin sonuc=%d",x/y);break;
				default:printf("Lutfen yeniden deneyiniz"); 
		
		*/
	
			if(secim==1){
				printf("Birinci Durumu sectiniz\nSayilarin toplami=%d",x+y);
			}
			else if(secim==2){
				printf("Ikinci durumu sectiniz\n sayilarin farki=%d",x-y);
			}
			else if(secim==3){
				printf("ucuncu durumu sectiniz\nsayilarin carpimi=%d",x*y);
			}
			else if(secim==4){
				printf("dorduncu durumus ectiniz\nB,lme isleminin sonuc=%d",x/y);
			}
			else{
				printf("Yanki; se.'m yaptiniz lutfen tekrar deneyiniz");
			}
		
		
	
	return 0;
}



