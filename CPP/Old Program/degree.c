/* cos example */
#include <stdio.h>      /* printf */
#include <math.h>       /* cos */



int main ()
{
  double A, result,PI=3.14;
  
  scanf("%d",&A );
  
  result = cos( A * (PI / 180.0 ));
  printf ("The cosine of %f degrees is %f.\n", A, result );
  return 0;
  
  getch();
}
