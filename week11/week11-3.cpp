#include <stdio.h>
#include <string.h>
#include <map>
#include <string>
char line[100];
int main()
{
    int n;
    //scanf("%d",&n);
    FILE * fin =fopen("input.txt","r");
    fscanf(fin,"%d",&n);
    ///std::map<�r��,���>
    std::map<std::string,int>table;
    while(fgets(line,100,fin))
    {
        line[strlen(line)-1]=0;
        printf("Ū��F= %s = \n",line);
        table[line]++;
    }

}


