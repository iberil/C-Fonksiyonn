#include<stdio.h>
#include<stdlib.h>                       //floyd üçgeni yapma

void floyd(int n)
{
	int i,j,x=1;
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<=i;j++)
		{
			printf("%d ",x);
			x++;
		}
		
		printf("\n");
	}
}

int main()
{
	int sayi;
	
	printf("floy ucgeninin satir sayisini giriniz:");
	scanf("%d",&sayi);
	
	floyd(sayi);
}
