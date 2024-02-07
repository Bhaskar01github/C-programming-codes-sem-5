#include<stdio.h>

void function1();
void function2();



void main()
{
	
	extern int var;

	printf("Value in main : %d %u\n", var, &var);

	function1();
	


}

int var = 5;//Global variable

void function1()
{
	

	printf("Value in function1 : %d %u\n", var, &var);

}


