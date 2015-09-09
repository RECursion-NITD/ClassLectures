#include<stdio.h>
#include<string.h>
int main()
{
    int i,l=0;
    char s[1010];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    printf("%d\n",l);
    l=strlen(s);
    printf("%d\n",l);
    return 0;
}
