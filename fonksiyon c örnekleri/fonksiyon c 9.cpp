#include<stdio.h>
#include<stdlib.h>                      //dizinin elemanlarini küçükten büyüðe sýralayan fonksiyon
#include<time.h>

void sirala(int n,int A[])
{
	printf("\n");
	int gecici,j,i;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j+1]<A[j])
		{
			gecici=A[j];
			A[j]=A[j+1];
			A[j+1]=gecici;
		}	
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}


int main()
{
	int n,i;
	
	srand(time(NULL));
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	sirala(n,dizi);
}
