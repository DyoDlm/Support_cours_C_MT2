#define IF if(
#define THEN ){
#define ELIF ;} else if (
#define ELSE ;} else {
#define FI ;}

#include <stdio.h>

int	main()
{
	IF 1 == 2 THEN printf("foo foo") ELSE printf("HAHAH") FI
	return 0;
}
