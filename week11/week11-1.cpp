#include <stdio.h>
int main()
{
    int n;
    //scanf("%d",&n);
    FILE * fin =fopen("input.txt","r");
    fscanf(fin,"%d",&n);
    printf("�AŪ��Fn: %d\n",n);

}
