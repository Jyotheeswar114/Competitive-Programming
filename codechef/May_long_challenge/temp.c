#include <stdio.h>

int main()
{
    for(int i=0; i<17; i++)
    {
        long int c = 0;
        for(int j=0; j < 1<<i; j++)
        {
            if((j ^ (j+1)) == ((j+2) ^ (j+3)))
                c++;
        }
        printf("%d %ld\n", i, c);
    }
    return 0;
}