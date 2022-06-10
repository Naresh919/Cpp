//String Copy
/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    /* Create an example variable capable of holding 50 characters */
    char example[50];

    /* Copy the string "Mitta Naresh knows strcpy!" into the example variable */
    strcpy (example, "Mitta Naresh strcpy!");

    /* Display the contents of the example variable to the screen */
    printf("%s\n", example);

    return 0;
}
