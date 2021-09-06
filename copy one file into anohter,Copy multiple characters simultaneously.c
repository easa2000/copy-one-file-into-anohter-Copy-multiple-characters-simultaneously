#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1, *fp2;
    char str[20];

    if((fp1 = fopen("file_ex6.txt","r"))==0)
    {
        printf("\n Error opening the first file.");
        exit(1);
    }

    if((fp2 = fopen("file_exe7.txt","w"))== 0)
    {
        printf("\n Error opening the second file.");
        exit(1);
    }

    while(fgets(str, sizeof(str),fp1) != NULL)
    {
        fputs(str, fp2);
    }
    printf("\n FILE COPIED.");

    fclose(fp1);
    fclose(fp2);
}
