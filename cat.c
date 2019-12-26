#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
 FILE *fp;
 char file_name[255], ch;
 int i;


 for(i=1; i<argc;i++){
    strncpy(file_name, argv[i], 255);

    fp=fopen(file_name, "r");
    if(fp == NULL) {
       printf("%s: No such file or directory\n", file_name);
       return 0;
    }

    while((ch=fgetc(fp)) != EOF){
         putchar(ch);
    }

 }
  fclose(fp);
return 0;
}
