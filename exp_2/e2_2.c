/*Read  your  details  through  keyboard  and  display  them.  (Use  gets()  for 
string)*/

#include <stdio.h>
void main()
{
    int age;
    char *name;
    char gender;
    float cutoff;
    char *address;
    scanf("%c%d%s%f", &gender, &age, &name, &cutoff);
    scanf("%s", &address);
    printf("Name: %c \n Age: %d \n Gender: %c \n Address: %s \n Cutoff[HSC]: %f\n", name, age, gender, address, cutoff);
    //int, char, float, double,long are all datatypes
    //%d,%c,%f are the respective placeholders for the given datatypes
    //scanf is used to get user input through C terminal
    //& in scanf is used to store the user input in the location where the variable is created
}