

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PATH_MAX 2500

int main( int argc, char *argv[])
{
   char cmdi[PATH_MAX];
   if ( argc == 2)
   {
       strncpy( cmdi , "     wine  ~/bin/illustrator.exe     " , PATH_MAX );
       strncat( cmdi , "   \"z:\\home\\username\\figures\\" , PATH_MAX - strlen( cmdi ) -1 );
       strncat( cmdi , argv[ 1 ] ,  PATH_MAX - strlen( cmdi ) -1 );
       strncat( cmdi ,  "\"  "   , PATH_MAX - strlen( cmdi ) -1 );
       printf( "COMMAND : %s\n" , cmdi );
       system( cmdi );
   }

  return 0;
}



