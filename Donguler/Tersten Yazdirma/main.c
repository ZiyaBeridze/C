#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int sayi;
	int ters;
	
	
	printf("Lutfen Sayi Giriniz:");
	scanf("%d",&sayi);
	
	while(sayi!=0){
		
		ters=ters*10;
		ters=ters+sayi%10;
		sayi=sayi/10;
	}


	printf("Tersi:%d",ters);

	return 0;
}
