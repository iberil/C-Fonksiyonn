#include<stdio.h>                 //fibonacci dizisi 
#include<stdlib.h>

void fibo(int sayi)
{
	int s1=0,s2=1,toplam,i;
	
	for(i=0;i<sayi;i++)
	{
		if(i<=1)
		{
			toplam=i;
		}
		else
		{
			toplam=s1+s2;
			s1=s2;
			s2=toplam;
		}
		
		printf("%d ",toplam);
	}
}

int main()
{
	int sayi;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	fibo(sayi);
}
