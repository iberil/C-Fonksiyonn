#include<stdio.h>                              //kullan�c�taraf�ndan girilen bolunen ve bolen degerleri ile bolum ve kalan� bulan fonksiyon
#include<stdlib.h>

void bolme(int bolunen,int bolen)
{
	printf("bolum:%d\n",bolunen/bolen);
	printf("kalan:%d",bolunen%bolen);
}

int main()
{
	int bolunen,bolen;
	
	printf("bolunen ve bolen degerlerini giriniz:");
	scanf("%d %d",&bolunen,&bolen);
	
	bolme(bolunen,bolen);
}
