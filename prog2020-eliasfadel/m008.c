/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

/* Converts the string 's' from first-middle-last name
   form into LAST-first-middle form.  */

void lastname (char *s)
{
    int i, x, y, z;
    char t[MAX];
    char k[MAX];

    strcpy(t,s);
    z = strlen(t);

    while (t[i]!=0)
        {
            if (t[i] = ' ')
            {
                x = i;
            }
                i++;
        }
    for (y = x + 1; y < z; y++)
        {
            if ((t[y] <= 122) && (t[y] >=97))
            k[y-x-1] = t[y] - 32;
            else
            k[y-x-1] = t[y];
        }

    k[z-x-2]=',';

    k[z-x-1]=' ';


    for (y=0; y < x; y++)
    {
       k[z-x+y]=t[y];
    }
    k[z]=0;

    strcpy(s,k);

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);

  lastname (name);

  printf ("%s\n", name);

  return 0;
}
