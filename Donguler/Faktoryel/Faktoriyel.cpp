#include <stdio.h>

int main(){
	
int girileceksayi;

printf("Hangi Sayinin Faktoryelini Almak Istersiniz:");
scanf("%d",&girileceksayi);
int i=1;
int faktoriyel=1;
	
	while(i<=girileceksayi){
	faktoriyel=faktoriyel*i;
	i++;
	}
		printf("\nSonuc:%d",faktoriyel);
	
	return 0;
}
