/*ergasia eksamhnou sthn c*/
#include <stdio.h>
int main()
{
	
	int a;
	printf("dwse enan akeraio : ");
	scanf("%d",&a);
	printf("h moires ths gwnias einai : %d \n",a);
	if(a>90)
	    printf("amvleia gwnia");
	else if(a<90)    
	          printf("okseia gwnia");
	else 
	          printf(" orthi gwnia");
	return 0;  
}
