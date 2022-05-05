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
    ///std::map<字串,整數>
    std::map<std::string,int>table;
    while(fgets(line,100,fin))
    {
        line[strlen(line)-1]=0;
        printf("讀到了= %s = \n",line);
        table[line]++;
    }

}


