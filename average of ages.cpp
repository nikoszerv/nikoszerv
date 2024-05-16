#include <stdio.h>

int main()
{
	int ages[] = {20, 22, 18, 36, 46, 28, 87, 71};
	
	float average, sum = 0;
	
	int i;
	
	int length = sizeof(ages) / sizeof(ages[0]);
	
	for (int i = 0; i < length; i++)
	{
		sum += ages[i];
	}
	average = sum / length;
	printf("the average of ages is: %.2f", average);
	
	return 0;
}
