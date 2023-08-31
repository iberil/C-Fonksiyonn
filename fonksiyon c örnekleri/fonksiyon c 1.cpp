#include<stdio.h>
#include<stdlib.h>                        //girdigimiz sayinin mukemmel sayi olup olmadýðýný bulan fonksiyon

void mukemmel(int sayi)
{
	int i,toplam=0;
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	
	if(toplam==sayi)
	{
		printf("%d mukemmel sayidir",sayi);
	}
	else
	{
		printf("%d mukemmel sayi degildir",sayi);
	}
}

int main()
{
	int sayi;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	mukemmel(sayi);
}
