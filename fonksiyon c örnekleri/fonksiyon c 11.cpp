#include<stdio.h>                                 //girilen 2 degerin yerini degistiren program
#include<stdlib.h>

void degistir(int x,int y)
{
	int gecici;
	
	gecici=x;
	x=y;
	y=gecici;
	
	printf("x= %d\ty= %d",x,y);
}
int main()
{
	int x,y;
	
	printf("yerlerini degistirmek istediginiz x ve y degerlerini giriniz:");
	scanf("%d %d",&x,&y);
	
	printf("\nx= %d\ty= %d\n",x,y);
	
	degistir(x,y);
}
