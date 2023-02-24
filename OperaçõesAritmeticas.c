#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n1,n2,soma,sub;
	float div,mult;
	
	printf("ENTRE COM N1 = ");
	scanf("%d", &n1);
	
	printf("ENTRE COM N2 = ");
	scanf("%d", &n2);
	
	
	
	soma=n1+n2;
	sub=n1-n2;
	mult=(float)n1*n2;
	div=(float)n1/n2;
	
	printf("\n");
	printf("Soma = %d", soma);
	printf("\n");
	printf("Valores N1 e N2 = %d + %d = %d",n1,n2,soma);
	printf("\n");
	printf("Sub = %d", sub);
	printf("\n");
	printf("Valores N1 e N2 = %d - %d = %d",n1,n2,sub);
    printf("\n");
    printf("mult = %f", mult);
    printf("\n");
	printf("Valores N1 e N2 = %d x %d = %f",n1,n2,mult);
	printf("\n");
	printf("Div = %f", div);
	printf("\n");
	printf("Valores N1 e N2 = %d / %d = %f",n1,n2,div);
    printf("\n");
}
