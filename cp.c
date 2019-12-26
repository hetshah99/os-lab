#include <stdio.h>



void main(int argc,char **argv)

{

    FILE *sFile, *dFile;
    char ch;
    int position;
    if ((sFile = fopen(argv[1],"r")) == NULL)
    {
        printf("\nFile cannot be opened");
        return;
    }
    else
    {
        printf("\nFile copied\n ");
    }
    dFile = fopen(argv[2], "w");
    fseek(sFile, 0L, SEEK_END); 
    position = ftell(sFile);
    fseek(sFile, 0L, SEEK_SET); 
    while (position--)
    {
        ch = fgetc(sFile);  
        fputc(ch, dFile);
    }
}
