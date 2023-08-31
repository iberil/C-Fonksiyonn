#include<stdio.h>                                    //bilgisayar tarafýndan girilen n adet sayýdan seçilen sýradaki elemaný silip son halini ekrana basan program
#include<stdlib.h>
#include<time.h>

void silgi(int dizi[],int n,int no)
{
	int i;
	
	printf("\n");
	
	
	for(i=no-1;i<n-1;i++)
	{
		dizi[i]=dizi[i+1];	
	}
	
	for(i=0;i<n-1;i++)
	{
		printf("%d ",dizi[i]);
	}
	
}


int main()
{
	int n,no,i;
	
	srand(time(NULL));
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		
		printf("%d ",dizi[i]);
	}
	
	printf("\nsilinecek degerin sirasini soyleyiniz:");
	scanf("%d",&no);
	
	silgi(dizi,n,no);
	
	return 0;
}
