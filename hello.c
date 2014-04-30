#include <stdio.h>

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

int main( int argc, char ** argv )
{
#ifdef CONFIG_REPEAT
   int i;
   for( i = 0; i < 10; i++ ) {
#endif
      puts( "Hello World xxx!  " );

#ifdef CONFIG_REPEAT
      puts( i );
      puts( "\n");
   }
#endif

   return 0;
}
