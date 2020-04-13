#include <stdio.h>

int main(){
	
 int sayi;
 int i=1;
 int n=0;
 printf("Kaca kadar sayilarin toplamini istiyorsunuz");
 scanf("%d",&sayi);
 
 	while(i<=sayi){
 	printf("Degerler:%d\n",i);
 	n=n+i;
 	i++;
	}
 	
 	printf("Sonuc:%d",n);
 
 return 0;
}
