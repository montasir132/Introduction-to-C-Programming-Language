// https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm832w6940057r001irt8y8ti

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1 ; i<=N ; i++)
    {        
        if( i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

}
