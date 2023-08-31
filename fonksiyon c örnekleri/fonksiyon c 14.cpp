#include<stdio.h>                   //diziye istedigimiz siraya eleman ekleme
#include<stdlib.h>
#include<time.h>

void ekle(int A[],int sayi,int no,int n)
{
	int i;

	for(i=n-1;i>=no-1;i--)
	{
		A[i+1]=A[i];
	}
	
	A[no-1]=sayi;
		
	
	printf("\n");
	
	for(i=0;i<n+1;i++)
	{
		printf("%d ",A[i]);
	}
}

int main()
{
	int n,i,sayi,no;
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("\ndiziye eklemek istediginz elemani ve sira numarasini giriniz:");
	printf("\nsayi:");
	scanf("%d",&sayi);
	printf("\nsira no:");
	scanf("%d",&no);
	
	ekle(dizi,sayi,no,n);
	
}
