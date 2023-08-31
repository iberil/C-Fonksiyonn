#include<stdio.h>                              //girilen celcius ya da fahrenheit degerinin fahrenheit ya da celcius'a cevirme
#include<stdlib.h>

void fahr(int f)
{
	int c=(5/9)*(f-32);
	
	printf("%d F= %d C",f,c);
}

void celci(int c)
{
	int f=(1.8*c)+32;
	
	printf("%d C= %d F",c,f);
}

int main()
{
	int f,c,secim;
	
	printf("1-fahrenheit->celcius\n2-celcius->fahrenhit");
	printf("\nyapmak istediginiz islemi seciniz:");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		printf("cevirmek istediginiz fahr degerini giriniz:");
		scanf("%d",&f);
		
		fahr(f);
	}
	else if(secim==2)
	{
		printf("cevirmek istediginz celci degerini giriniz:");
		scanf("%d",&c);
		
		celci(c);
	}
	else
	{
		printf("yanlis sayi girdiniz:");
	}
}
