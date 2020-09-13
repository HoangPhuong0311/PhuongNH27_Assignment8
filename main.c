#include <stdio.h>
#include <stdlib.h>
#include "Draw_triangle.h"


int main() 
{
	
	int n;    /* n is height of triangle*/
	printf("Nhap chieu cao: ");
	scanf("%d",&n);
	Draw_triangle(n);
	return 0;
}
