#include <stdio.h>

int main(){
	
	char isim[10];
	char soyisim[10];
	int yas;
	
	printf("lutfen isminizi girin");
	scanf("%s", &isim);
	printf("lutfen soyisminizi girin");
	scanf("%s", &soyisim);
	printf("lutfen isminizi girin");
	scanf("%d", &yas);	
	
	if(yas>=18){
		printf("kullanici ism=%s\nsoyadiniz=%s",isim,soyisim);
	
		printf("\negliyet alabilirsiniz");
		}
		
		else{
		printf("kullanici ism=%s\nsoyadiniz=%s",isim,soyisim);
			printf("\negliyet alamazsiniz");
			
		}
		
	
	return 0;
	
}
