#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,root1,root2;
		printf("A : ");
		scanf("%d", &a);
	while (a==0){
		
		printf("Enter non zero value\n");
		printf("A : ");
		scanf("%d", &a);
		if(a!=0){
			printf("");
		}	}
		
	printf("B : ");
	scanf("%d", &b);
	printf("C : ");
	scanf("%d", &c);
	d = ((b*b)-4*a*c);
	if(d<0)
		{
			printf("Roots are imaginary\n");
		}
		if (d>0) 
		{
			printf("Discreminent = %d\n",d);
			root1 = (-b - sqrt (d))/2*a;
			root2 = (-b + sqrt (d))/2*a;
			printf("Root 1 = %d\n",root1);
			printf("Root 2 = %d\n",root2);
		}
	
	return 0;
}
