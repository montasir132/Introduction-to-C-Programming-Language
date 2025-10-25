#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",&str);
    // printf("%s",str);
    int fre_array[26]=0;
    for(int i=0;i<n;i++)
    {
        fre_array[str[i]]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%s : %s\n",i,fre_array[i]);
    }
    return 0;
}