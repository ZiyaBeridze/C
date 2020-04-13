#include <stdio.h>

int main()
{

int z,x,c;
printf("Lutfen 1. sayiyi giriniz");
scanf("%d",&z);

printf("Lutfen 2. sayiyi giriniz");
scanf("%d",&x);

printf("Lutfen 3. sayiyi giriniz");
scanf("%d",&c);

if(z>x && z>c)
	{
	
	if(x>c)
		{
		printf("%d>%d>%d",z,x,c);
		
		}
	
	else
		{
		printf("%d>%d>%d",z,c,x);
		
		}
		
	}

			else if(x>z && x>c)
			{
						
			if(z>c)
				{
				printf("%d>%d>%d",x,z,c);
				
				}
			
				else
				{printf("%d>%d>%d",x,c,z);
				
				}
			}

			else
			{
				if(z>x)
				{
				printf("%d>%d>%d",c,z,x);	
				}			
		
				else
				{
				printf("%d>%d>%d",c,x,z);	
				}
		
			}
				
			
return 0;
}



	

	

	
	
	
	

	

