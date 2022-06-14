//Swaping two Numbers using Third Variable	
#include <stdio.h>
 
int main(void)
{
 
   // Variable declaration
   int a, b, temp;    
 
   printf("Enter two number a and b:\n");
   scanf("%d %d", &a, &b);
   printf("\t Before swaping:\na = %d\nb = %d\n", a, b);
 
   // Swap logic
 
   temp = a;
   a = b;
   b = temp;
 
  printf("\t After swapping \na = %d\nb = %d\n", a, b);
  
  return 0;
 
}
