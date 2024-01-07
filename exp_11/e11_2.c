/*Create an enumerator GEMS with user-defined values as price for a gram 
of  each  GEM  (diamond,pearl  etc).  Use  typedef  for  GEMS  and  print  the 
price of a GEM*/
#include <stdio.h>
#include <string.h>
typedef enum GEMS { Diamond = 8000, Pearl = 20, Ruby = 300, Saphire = 450 } g;
int main(void) {
	g gem=Diamond;
	printf("Cost of Diamond (per gram) $%d",gem);
}