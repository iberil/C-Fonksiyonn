#include<stdio.h>
#include<stdlib.h>                              //bilgisayar tarf�ndan girilen degerlerin dizide tutulup ortalamas�n� bulan fonksiyon
#include<time.h>

float ortalama(int A[],int n)
{
	int toplam=0,i;
	
	for(i=0;i<n;i++)
	{
		toplam=toplam+A[i];
	}
	
	return (float)toplam/n;         //return degerini float cinsine cevirmezsek k�s�ratlar g�z�km�yor
}

int main()
{
	int n;
	float ort;
	
	srand(time(NULL));
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(int i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	ort=ortalama(dizi,n);
	
	printf("\nortalama:%.3f",ort);
}
