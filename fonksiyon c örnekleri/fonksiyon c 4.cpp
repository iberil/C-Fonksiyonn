#include<stdio.h>            //girilen sayiya kadarki tek sayilari ekrana yazan program 
#include<stdlib.h>

void tekdiz(int sayi)
{
	int i;
	for(i=1;i<sayi;i+=2)
	{
		printf("%d ",i);
	}
}

int main()
{
	int sayi;
	
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	tekdiz(sayi);
}
