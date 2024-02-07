#include<stdio.h>

void function1();
void function2();



void main()
{
	
	function1();
	function1();
	function1();

	function2();
	function2();
	function2();


}

void function1() //Auto
{
	
	int var = 0;
	
	var++;
	printf("Value in function1 : %d\n", var);

}

void function2() //Static
{
	static int var = 0;
	
	var++;

	printf("Value in function2 : %d\n", var);

}


