#include<stdlib.h>                     //bilgisayar tarafýndan rastgele girilen n adet sayýnýn fonksiyonlar yardýmýyla en buyuk ve en küçük elemanlarýnýn bulunmasý
#include<stdio.h>
#include<time.h>

int maks(int dizi[],int n)
{
	int mak,i;
	
	mak=dizi[0];
	
	for(i=1;i<n;i++)                     
	{                                    //i=0dan baþlatýrsan en sonunda mak deðerini dizi[5] ile kýyaslýyor öyle bir eleman olmadýðý için hata veriyor  
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
