/*SBI  generates  tickets  at  its  automated  counter  machine  starting  from 
100. Each user gets a subsequent ticket number. Demonstrate this using 
appropriate storage class*/
#include<stdio.h>

void main()
{
    printf("\n\n\tTICKET GENERATOR\n1.new user\n0.end\n\n");
    int input;
    while(1) 
    {
        static int automate=100;
        printf("\ninput: ");
        scanf("%d",&input);
        if(input==0)
        break;
        printf("Ticket number: %d",automate++);
    }
}