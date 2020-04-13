#include <stdio.h>


int main(){
	
	int alinacaksayi;
	int alinacakikincisayi;
	int carpmaislemi;
	int bolmeislemi;
	printf("bir sayi giriniz");
	scanf("%d",&alinacaksayi);
	printf("\nikinci bir sayi giriniz");
	scanf("%d",&alinacakikincisayi);
	carpmaislemi=alinacaksayi*alinacakikincisayi;
	printf("\ngirdiginiz iki sayinin carpimi=%d",carpmaislemi);
	bolmeislemi=alinacaksayi/alinacakikincisayi;
	printf("\ngirdiginiz sayinin bolumu=%d",bolmeislemi);
	
	
	return 0;
		
}
