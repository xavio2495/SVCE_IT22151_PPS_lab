/*Box 1 has M apples and Box 2 has N apples. Assuming you do not have 
any other space/storage to hold the apples, exchange the apples in Box 1 
and Box 2. (Swap without temp) */
#include <stdio.h>
void main()
{
    int b1, b2;//eg: b1=5,b2=3
    printf("Enter the number of apples in box1 and box2 have:\n");
    scanf("%d%d", &b1, &b2);
    b1 = b1 + b2; //b1=5+3=8
    b2 = b1 - b2;//b2=8-3=5
    b1 = b1 - b2;//b1=8-5=3
    printf("The number of apples box1 and box2 have after exchanging is\n");
    printf("b1:%d", b1);
    printf("\nb2:%d", b2);
}