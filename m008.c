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
   form into LAST-first-middle form. */

void lastname (char *s)
{
    int i, x;
    char t[MAX];

    strcpy(t,s);

    for (i=0;t[i]=0;i++)
        {if (t[i] = 32)
         x = i;
        }
    for (x=x;t[x]=0;x++)
        {if (t[x] > 'a' && t[i] < 'z')
            t[x] = t[x]-32;
            else
            t[x] = t[x];
        }


    for (i=0; t[i] = 0; i++)
    {
        s[i] = t[i];
    }

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
