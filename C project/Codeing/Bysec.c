#include<stdio.h>
#include<conio.h>
#include<math.h>
/* Creating a function Bisection */
void bisection()
{	int a, b,  e1, e2, temp1, temp2, temp0, choice, j;
	float c, x1, x2, x0, func1, func2, func0, temp3, p, q, root;
	char choice1;
	/* Takeing equation from the user */
	printf("\n---------------------------------BISECTON METHOD IN C----------------------------------------");
	printf("\nEnter the Coefficient and Exponents of the x \nIn the equation:- ax^e1 - bx^e2 + c =0 \n Press enter...... ");
	getch();
	printf("\nEnter the value of a:- ");
	scanf("%d", &a);
	printf("\nEnter the value of e1:- ");
	scanf("%d", &e1);
	printf("\nEnter the value of b:- ");
	scanf("%d", &b);
	printf("\nEnter the value of e2:- ");
	scanf("%d", &e2);
	printf("\nEnter the value of c:- ");
	scanf("%f", &c);
	/* Taking the value of x1 and applying in the equation */
	printf("\n\nIn the Equation %dx^%d - %dx^%d + %f =0,\nThere is at least 1 real root in the interval between p and q \nPress Enter to continue.....\n", a, e1,b,e2,c);
	getch();
	printf("\nEnter the value of p :-");
	scanf("%f", &p);
	func1= a* pow(p,e1)- b* pow(p,e2)+ c;
	/* Output the function is <0 or >0 */
	if(func1<0)
	{	printf("For the value of %f, Value of the function is=  %f, That is less than 0", p, func1);
		temp1=1;
		x2=p;
	}
	else
	{	printf("For the value of %f, Value of the function is=  %f, That is greater than 0", p, func1);
		temp1=0;
		x1=p;
	}
		/* Taking the value of x2 and applying in the equation */
	do
	{	x1=p;
		x2=p;
		printf("\nEnter the value of q:-");
		scanf("%f", &q);
		func2= a* pow(q,e1)- b* pow(q,e2)+ c;
		/* Output the function is <0 or >0 */
		if(func2<0)
		{	printf("For the value of %f, Value of the function is=  %f, That is less than 0 \n", q, func2);
			temp2=1;
			x2=q;
		}
		else
		{	printf("For the value of %f, Value of the function is=  %f, That is greater than 0 \n", q, func2);
			temp2=0;
			x1=q;
		}
		/* deciding that f(x1) * f(x2)<0 */
		if(temp1==temp2)
		{ choice=1;
		   printf("\n\t\t Therefore f(p) * f(q) > 0 \n");
		   printf("Are You sure the value of q is %f?\n if YES press y or For NO press anykey....:-", q);
		   scanf("%ch", &choice1);
		   if(choice1=='y')
		   {	printf("The function have no root between the interval of %f and %f", p, q);
		   		choice=0;
		    }  
			else
		    { choice=1;
			}
		}
		else
		{ choice=0;
		   	 printf("\n\t\t Therefore f(p) * f(q) <0  \nPress Enter to see the root:-\n");
			 getch();
			for(j=1;j<11;j++)
			{   /* Find the mid point of p and q */
	 		    x0= (x1 + x2)/2;
	    		/*printf("%f", x0);*/
	 		    /* appliying the value of x0 to the equation and check the value of the function is greater or less than 0 */
	 		    func0= a* pow(x0,e1)- b* pow(x0,e2)+ c;
	 	  		/* printf("%f", func0);*/
	   	   	    if(func0<0)
				{	x2=x0;
				}
				if(func0>0)
				{	x1=x0;
				}
				if(func0==0)
				{	j=9;/*If f(x0)=0 then the root is x0*/
				}
	  	   	  
			}
   			 printf("\n One real root of the equation is %f ", x0); 
		}
    	/*	printf("%f", x1);
	        printf("%f", x2); */
    }while(choice!=0);
	
	getch();
}
/* Creating a Function about Us */
void aboutus()
{	printf("\n---------------------------------About Us----------------------------------------");
	printf("\nName= Anuraj Anand Singh & Adeetha Mitra\nClass :- 12 \nPhone Number :- 9007712266///7980708605\nSchool:- Ballygunge GOVT. High School\nThank YOU");
	getch();
}
/* Creating the main function */
int main()
{ 	int choice;
	/* Repeating the process while user choice not equal to  3 or exit */
	do
	{
		printf("\n---------------------------------Computer Science Class 12 Project------------------------------------\n"); 
		printf("\n-------------------------------------   Year  2017  -- 2018   -----------------------------------\n");
		/* Creating a menu */
		printf("1.Bisection Method \n2.About Us \n3.Exit\n:-");
		scanf("%d", &choice);
		switch(choice)
		{	case 1:	bisection();/*Calling function bisection() */
					break;
			case 2:	aboutus();/*Calling function aboutus() */
					break;
			case 3:	printf("\n\n!!!!!Thank You!!!!!!\n");
					break;
			default : printf("\n\n!!!!Wrong Input Please try again!!!");
		}
	}while(choice!=3);
	getch();
	return 0;
}
