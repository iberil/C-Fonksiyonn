#include<stdio.h>                //girilen saniyenin saat:dakika: saniye seklinde hesaplanışı
#include<stdlib.h>

void donustur(int sn)
{
	int saat,dakika,saniye,zaman;
	
	saat=sn/3600;
	zaman=sn%3600;
	dakika=zaman/60;
	saniye=zaman%60;
	
	printf("%d sn: %d saat %d dakika %d saniyedir",sn,saat,dakika,saniye);
	
	
}

int main()
{
	int sn;
	
	printf("donusturmek istediginiz saniye degerini giriniz:");
	scanf("%d",&sn);
	
	donustur(sn);
	
}
