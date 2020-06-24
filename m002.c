/* m002.c - Sort three variables.

   This program takes three integers read as command
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{
    int x, y, z;

   if ((*a > *b) && (*a > *c))
   {

    if(*b>*c)
        {
        x=*a;
        y=*b;
        z =*c;
        }
        else
        {
         x= *a;
        y = *c;
        z = *b;
        }
   }

        if ((*b>*a)&&(*b>*c))
        {
        if (*a>*c)
            {
            x=*b;
            y=*a;
            z=*c;
            }
        else
            {
            x=*b;
            y=*c;
            z=*a;
            }
        }


        if ((*c>*a)&&(*c>*b))
        {
        if (*a>*b)
        {
            x=*c;
            y=*a;
            z=*b;
        }
        else
        {
            x=*c;
            y=*b;
            z=*a;
        }
    }



   *a=z;
   *b=y;
   *c=x;
   }



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);

  return 0;
}
