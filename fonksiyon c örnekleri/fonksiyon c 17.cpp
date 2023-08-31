#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int topla(int n)
{
	int toplam=0,i;
	
	for(i=1;i<=n;i++)
	{
		toplam=toplam+pow(i,2);
	}
	
	return toplam;
}

int main()
{
	int n;
	
	printf("serinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	printf("toplam= %d",topla(n));
}
