#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter any three number: ");
	scanf("%d %d %d",&x,&y,&z);
	if((x>y) && (x>z)){
		printf("%d is maximum",x);
	}
	else{
		if(y>z)
		{
			printf("%d is maximum",y);
		}
		else{
			printf("%d is maximum",z);
		}
	}
}
