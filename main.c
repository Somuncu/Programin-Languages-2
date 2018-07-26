#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE *ptDosya;
    FILE *fp;
    char ch;
    int x;

    ptDosya = fopen("C:\\input.txt", "r");
    fp=fopen("C:\\output.txt", "w");

    do{
    	ch = getc(ptDosya);
    	x=ch;
    	if(x>=97 && x<=122 )
        {
            x=x-32;
            ch=x;
        }
        else if(x==32 || x==9 || x==11 || x==13 || x==10 || x==12)
        {
            x=10;
            ch=x;
        }
        else if(ch==EOF)
        {
             ch=NULL;
        }
    	fputc(ch,fp);

    } while (ch != EOF);

}
