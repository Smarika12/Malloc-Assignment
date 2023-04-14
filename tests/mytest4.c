#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("\nchecking to see different splits, blocks, and max heaps when larger space is malloced first \n");

  char * ptr1 = ( char * ) malloc( 600000 );

  free( ptr1 );

  char * ptr2 = ( char * ) malloc(2000);

  free( ptr2 );

  char * ptr3 = ( char * ) malloc( 100);

  free( ptr3 );

  printf("\n Split occurs\n");

  return 0;
}
