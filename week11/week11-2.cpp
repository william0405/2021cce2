#include <stdio.h>
char line[100];
int main()
{
    int n;
    //scanf("%d",&n);
    FILE * fin =fopen("input.txt","r");
    fscanf(fin,"%d",&n);
    printf("�AŪ��Fn: %d\n",n);
    ///scanf() vs. gets()
    ///fscanf() vs. fgets()
    while(fgets(line,100,fin))
    {
        printf("Ū��F= %s = \n",line);
    }
}

