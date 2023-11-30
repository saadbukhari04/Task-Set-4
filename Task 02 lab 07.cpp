#include <stdio.h>
int main(){
	int r1,r2,w1,w2,wc2,rc,w;
	printf("Enter Runs of Team 1 = ");
	scanf("%d", &r1);
	while(r1<0)
	{
		printf("Enter Runs of Team 1 = ");
		scanf("%d", &r1);
	}
	printf("Enter Wickets of Team 1 = ");
	scanf("%d", &w1);
	while(w1>=10)
	{	printf("Enter less than 10");
		printf("Enter Wickets of Team 1 = ");
		scanf("%d", &w1);
		}
	printf("Enter Runs of Team 2 = ");
	scanf("%d", &r2);
	while( r2<0)
	{
		printf("Enter Runs of Team 2 = ");
		scanf("%d", &r2);
	}
	printf("Enter Wickets of Team 2 = ");
	scanf("%d", &w2);
	while (w2>=10)
	{	printf("Enter Less than 10");
		printf("Enter Wickets of Team 2 = ");
		scanf("%d", &w2);
	}
	if(r2 > r1)
		{	w=w2-w1;
			printf("Team 2 wins by %d wickets .",w);
		}
	if(r1>r2)
	{	rc=r1-r2;
		printf("Team A won by %d Runs . ", rc);
	}
	if ( r1 == r2)
	{
		if (w1<w2)
		{
			printf("Team 1 won by 1 run");
		}
		else if (w1>w2)
			{
				w=w2-w1;
				printf("Team 2 won by %d wickets . ",w);
				
			}
		else 
		{
			printf("The Match is drawn!!!!!!!!!!Its a Super over now");
		}
	}
	return 0;
}
		
