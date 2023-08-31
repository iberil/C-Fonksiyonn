#include<stdio.h>
#include<stdlib.h>                           //2 sayiyi fonksiyon ile kýyaslama

void karsilastirma(int s1,int s2)
{
	if(s1<s2)
	{
		printf("%d buyuktur %d den",s2,s1);
	}
	else if(s1==s2)
	{
		printf("esittir");
	}
	else
	{
		printf("%d buyuktur %d den",s1,s2);
	}
}

int main()
{
	int s1,s2;
	
	printf("kiyaslamak istediginiz sayilari giriniz:");
	scanf("%d %d",&s1,&s2);
	
	karsilastirma(s1,s2);
}
