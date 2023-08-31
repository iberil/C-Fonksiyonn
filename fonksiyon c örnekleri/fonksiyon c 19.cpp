#include<stdio.h>                                       //2 dizinin birleþtirilip 3. dizinin oluþturulduðu fonksiyon
#include<stdlib.h>
#include<time.h>

void birlestir(int A[],int B[],int n,int m,int C[])
{
	int i,j,sayac=0;
	
	for(i=0;i<n;i++)
	{
		C[sayac]=A[i];
		sayac++;
	}
	for(j=0;j<m;j++)
	{
		C[sayac]=B[j];
		sayac++;
	} 
	
	int x;
	
	for(x=0;x<n+m;x++)
	{
		printf("%d ",C[x]);
	}
	
}

int main()
{
	int n,m,i,j;
	
	srand(time(NULL));
	
	printf("1.dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("\n2.dizinin eleman sayisini giriniz:");
	scanf("%d",&m);
	
	int dizi2[m];
	
	for(j=0;j<m;j++)
	{
		dizi2[j]= rand()%100;
		printf("%d ",dizi2[j]);
	}
	
	printf("\n");
	int b[m+n];
	
	birlestir(dizi,dizi2,n,m,b);
	
	
}
