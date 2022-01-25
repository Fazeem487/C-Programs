/*C program to design calculator with basic operations using switch.*/
#include <stdio.h>
int main()
{
    int num1,num2;	//declare local variables
    float result;
    int ch;    	//To store operator choice
    printf("Enter first number: ");		
    scanf("%d",&num1);		//First number
    printf("Enter second number: ");
    scanf("%d",&num2);		//Second number
    printf("MENU\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:printf("You have selected Addition\n");
    	       result=num1+num2;
    	       printf("The sum is :%f\n",result);
    	       break;     
    	case 2:printf("You have selected Subtraction\n");
    	       result=num1-num2;
    	       printf("The difference is :%f\n",result);
    	       break;  
    	case 3:printf("You have selected Multiplication\n");
    	       result=num1*num2;
    	       printf("The product is :%f\n",result);
    	       break;
    	case 4:printf("You have selected Division\n");
    	       result=num1/num2;
    	       printf("The quotient is :%f\n",result);
    	       break;   
      default:printf("Invalid choice\n");
     }
     return 0;
}      	                                      
