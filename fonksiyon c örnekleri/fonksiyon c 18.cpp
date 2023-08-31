#include<stdio.h>                 //taksi ücreti hesaplama
#include<stdlib.h>

void ucret(int km)
{
	float ucret;
	
	ucret=12.65+(km*8.51);
	
	printf("taksi ucreti= %.2f",ucret);
}
int main()
{
	int km;
	
	printf("gidilecek kilometreyi giriniz:");
	scanf("%d",&km);
	
	ucret(km);
}
