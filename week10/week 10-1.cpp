#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    //printf("Ū��N�O: %d\n",n);
    for(int i=0;i<n;i++)
    {
        //scanf("%s %d",name[i],&grade[i]);
        fscanf(fin,"%s %d",name[i],&grade[i]);
        //printf("Ū��F %s %d\n",name[i],grade[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],grade[i]);
    }
}
