/*Calculate the ESE marks of a subject as 40%(Internal_mark) + 60%(External_mark) for
theory  subject  and  60%(Internal_mark)  +  40%(External_mark)  for  practical  subject.
Internal_mark  is  calculated  as  70%(CAT1+CAT2+AT3)  +  30%(Assignment1  +
Assignment2 + Assignment3). The External_mark is awarded for 100. (Hint: Read ‘P’
and ‘T’ to differentiate practical and theory subjects)*/

// A bit advanced, try it if you want to waste time ¯\_(ツ)_/¯
#include <stdio.h>
void main()
{

    printf("\t\tESE CALCULATOR");
    printf("\n\n\t\tINTERNAL MARKS");

    int cat1, cat2, cat3, agn1, agn2, agn3; // intializing variables
    printf("\nEnter marks of CAT1, CAT2, CAT3\n");
    scanf("%d%d%d", &cat1, &cat2, &cat3); // getting cat marks from user

    printf("\nEnter marks of Assignment1, Assignment2, Assignment3\n");
    scanf("%d%d%d", &agn1, &agn2, &agn3); // getting assignment marks from user

    float internal = (cat1 + cat2 + cat3) * 0.7 + (agn1 + agn2 + agn3) * 0.3; // 70%(CAT1+CAT2+AT3)  +  30%(Assignment1  + Assignment2 + Assignment3).

    int external, subject_type = 0;
    printf("\n\n\t\tEXTERNAL MARK\nEnter external(100) mark:");
    scanf("%d", &external); // getting external marks from user

    printf("\n\nEnter 1 for Theory \nEnter 0 for Practical\n");
    scanf("%d", &subject_type); // getting whether subject is practical or theory

    float total = (subject_type == 1) ? 0.4 * internal + 0.6 * external : 0.4 * external + 0.6 * internal;
    printf("\n\nESE marks:%f. \n\nProgram terminating....\n\n", total);
}