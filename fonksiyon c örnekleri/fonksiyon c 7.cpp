#include<stdlib.h>                     //bilgisayar taraf�ndan rastgele girilen n adet say�n�n fonksiyonlar yard�m�yla en buyuk ve en k���k elemanlar�n�n bulunmas�
#include<stdio.h>
#include<time.h>

int maks(int dizi[],int n)
{
	int mak,i;
	
	mak=dizi[0];
	
	for(i=1;i<n;i++)                     
	{                                    //i=0dan ba�lat�rsan en sonunda mak de�erini dizi[5] ile k�yasl�yor �yle bir eleman olmad��� i�in hata veriyor  
		if(mak<dizi[i])
		{
			mak=dizi[i];
		}
	}
	
	return mak;
}

int min(int diz[],int x)
{
	int mi=diz[0];
	int i;
	
	for(i=1;i<x;i++)
	{
		if(mi>diz[i])
		{
			mi=diz[i];
		}
	}
	
	return mi;
}

int main()
{
	int n,i;
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("\nen buyuk: %d",maks(dizi,n));
	printf("\nen kucuk: %d",min(dizi,n));
	
	
	
	return 0;
}
