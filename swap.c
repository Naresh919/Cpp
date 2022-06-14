//Swaping Two Numbers Without Third Varible
    #include<stdio.h>
    #include<math.h>
     int main()    
    {    
    int a,b;      
   
    printf("Enter Two Numbers:\n");   
    scanf("%d %d", &a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    a=a+b;    
    b=a-b;   
    a=a-b;
    printf("\nAfter swap a=%d b=%d\n",a,b);    
    return 0;  
    }   
