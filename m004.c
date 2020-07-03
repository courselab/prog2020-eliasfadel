/* m004.c - Binary to decimal.

   This program takes a string read as a command line argument and,
   interpreting it as a positive binary integer, outputs its
   corresponding value in decimal base.


   E.g.

      command line    : m004 0011
      expected output : 3

   Directions:

      Please, edit function decimal();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Return the value in decimal base of the string b, interpreted
   as the a positive binary number. If the string contains any
   characters other than '1's and '0's, truncate the string
   right before the spurious character (eg. truncate 110x001
   into 110); an empty string means zero

   */

int elev (int x)
{
    int a,b;
    b = 1;
    if (x > 0)
    {
    for (a = 1; a <= x; a++)
       b = b*2;
    }
    else
        b = 1;

    return b;
}

int decimal (char *b)
{

  int x, y, z, i;


    char a[40];

    z = 0;
    x = strlen (b);
    for (i = 0;i <= x-1;i++)
    {

        if ((b[i] != '1') && (b[i] != '0'))
            break;
        z += 1;
    }
    strncpy(a, b , z);
    a[z + 1]='\0';


    y = 0;
    for(i = z - 1; i >= 0; i--)
    {
        if ( a[i] == '1' )
        y = y + elev(z - 1 - i);
    }
    return y;
}

#define USAGE "m004 <string>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = decimal (argv[1]);

  printf ("%d\n", n);

  return 0;
}

