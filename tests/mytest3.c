#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("\nchecking to see different splits, blocks, and max heaps when smaller space is malloced first \n");

  char * ptr1 = ( char * ) malloc( 200 );

  free( ptr1 );

  char * ptr2 = ( char * ) malloc( 600000);

  free( ptr2 );

  printf("\n No splits\n");

  return 0;
}
