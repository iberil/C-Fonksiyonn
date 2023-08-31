#include<stdio.h>                       //fonksiyon kullanarak sayinin tek mi cift mi oldugunu bulan kod
#include<stdlib.h>

int tekcift(int sayi)
{
	if(sayi%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int sayi,sonuc;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	sonuc=tekcift(sayi);
	
	if(sonuc==1)
	{
		printf("%d cift bir sayidir",sayi);
	}
	else
	{
		printf("%d tek bir sayidir",sayi);
	}
	
}
