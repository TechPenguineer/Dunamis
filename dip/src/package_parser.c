#include <stdio.h>

char *GET_CONTENTS(char *filename)
{
    char * buffer = 0;
    long length;
    FILE * f = fopen (filename, "rb");

    if (f)
    {
        fseek (f, 0, SEEK_END);
        length = ftell (f);
        fseek (f, 0, SEEK_SET);
        buffer = calloc (length, length);

        if (buffer)
            fread (buffer, 1, length, f);

        fclose (f);
        return buffer;
    }

    perror("error");
    exit(2);

}
char *GET_PKG_NAME()
{
    
}
char ** PACKAGE_READER()
{

}