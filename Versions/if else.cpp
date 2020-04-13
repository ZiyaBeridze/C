#include <stdio.h>

int main(){
	
/*int Not;
	
	
	printf("Lutfen ogrenincinin notunu giriniz");
	scanf("%d", &Not);
	
	
	if(Not>=50){
		
		printf("Ogrenci dersi gecti");
		
	
	}
	
	else{
		
		printf("ogrenci kaldi");
		
	}	
*/
	int not1,not2,not3;
	
	printf("lutfen ogrencinin notlarini giriniz");
	scanf("%d %d %d", &not1,&not2,&not3);
	int ortalama=(not1+not2+not3)/3;
	
	printf("ogrenincinin ortalmasi=%d",ortalama);
	
	if(ortalama>=60){
		printf("\nsinifi gecti");
		
	}
	
	else{
		
		printf("\nsinifi gecemedi");
		
	}	
	
	
	return 0;
}
