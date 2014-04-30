#include <stdio.h>

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

int test_funktion()
{
   /* bla bla */
}

int main( int argc, char ** argv )
{
#ifdef CONFIG_REPEAT
   int i;
   for( i = 0; i < 10; i++ )
#endif
      printf( "Michi ist toll ! :o" );

   test_funktion();
   return 0;
}
