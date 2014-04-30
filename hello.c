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
<<<<<<< HEAD
      puts( "Michi ist toll ! :o...... Absolut" );
=======
      printf( "Michi ist toll ! :o" );
>>>>>>> 2413dc861c71301e573e65aad461c1a0341c7206

   test_funktion();
   return 0;
}
