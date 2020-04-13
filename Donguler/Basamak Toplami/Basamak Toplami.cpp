#include <stdio.h>

int main(){
	
		//Girilen sayinin basamaklar toplami//

	int sayi;
	int toplam=0;
	int kalan;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	while(sayi!=0){
	kalan=sayi%10;
	toplam=toplam+kalan;
	sayi=sayi/10;
	}
	printf("Basamaklar Toplami:%d",toplam);	


	return 0;
}
