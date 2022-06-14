//Division of two Numbers
#include<stdio.h>
int main()
{
	int number1, number2, div;
	printf("Enter Two Numbers:\n");
	scanf("%d %d",&number1, &number2);
	div = number1 / number2;
	printf("%d / %d = %d\n", number1, number2, div);
	return 0;
}
