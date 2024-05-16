#include <stdio.h>

int main()
{
	int i,meres=0,misthos,telmisthos;
	int wres1=5,wres2=9,wres3=20;
	//printf("dialekste poses wres ergasthkate:1)5=5$/h 2)9=9$/h 3)20=20$/h");
	while(i<=5)
	{
		
	  int per;//per=me periptwshs wrariwn ergasias;
	  printf("dialekste poses wres ergasthkate:1)5=5$/h 2)9=9$/h 3)20=20$/h \n");
	  scanf("%d",&per);
	  switch(per)
	  {
	  	case 1:
	  	  printf("elafria ergasia\n");
	  	  misthos = wres1*5;
	  	  //meres++;
	  	  printf("oi apolaves einai: %d\n",misthos);
	  	break;
	  	case 2:
		  printf("kanonikh ergasia\n");
	  	  misthos = wres2*9;
	  	  //meres++;
	  	  printf("oi apolaves einai: %d\n",misthos);
	  	break;
        case 3:
		  printf("varia ergasia\n");
	  	  misthos = wres3*20;
	  	  //meres++;
	  	  printf("oi apolaves einai: %d\n",misthos);
	  	break;
	  	default:
	  		printf("dwse mia apo ths parapanw periptwshs\n");
		break;  
	  }
	}
return 0;	
}
