#include <stdio.h>
#include <math.h>
int main()
{   
 float number1;
 float number2;
 float result;
 int oper;
 
 printf("give the first number: ");
 scanf("%f",&number1);
 printf("give the second number: ");
 scanf("%f",&number2);
 printf("give the operator: 1:+,2:-,3:*,4:/");
 scanf("%d",&oper);
 
 switch(oper)
 {
 	case 1:
 		result = number1 + number2;
 		printf("the reult is: %.2f + %.2f = %.2f", number1, number2, result);
 	    break ;
	case 2:
		result = number1 - number2;
 		printf("the reult is: %.2f - %.2f = %.2f", number1, number2, result);
 	    break ;	
    case 3:
    	result = number1 * number2;
 		printf("the reult is: %.2f * %.2f = %.2f", number1, number2, result);
 	    break ;	
    case 4:
    	result = number1 / number2;
 		printf("the reult is: %.2f / %.2f = %.2f", number1, number2, result);
 	    break ;	
  	
 }
return 0;
 
    
	
}
