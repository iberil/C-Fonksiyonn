#include<stdio.h>                                         //kullanicidan alýnan yarýçap ile dairenin çevresi ve alanýný bulan program
#include<stdlib.h>
#define PI 3.14

void alan(float r)
{
	printf("alan: %f",PI*r*r);
}

void cevre(float r)
{
	printf("\ncevre: %f",2*PI*r);
}

int main()
{
	float yc;
	
	printf("dairenin yaricapini giriniz:");
	scanf("%f",&yc);
	
	printf("\n");
	
	alan(yc);
	cevre(yc);
}

