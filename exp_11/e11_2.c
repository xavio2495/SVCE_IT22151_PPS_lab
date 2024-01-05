/*Create an enumerator GEMS with user-defined values as price for a gram 
of  each  GEM  (diamond,pearl  etc).  Use  typedef  for  GEMS  and  print  the 
price of a GEM*/
#include <stdio.h>
#include <string.h>
typedef enum GEMS { Diamond = 80, Pearl = 2, Ruby = 30, Saphire = 40 } g;
int main(void) {
	g gem=Diamond;
	printf("%d",gem);
}