#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        h=get_int("Give value of height: ");
    } while (h < 1 || h > 8);
     int n=2*h+2;
     int w = h+2;
    for(int i=1;i<=h;i++)
    {
        for(int x=1;x<=n;x++)
        {
            if (x < h+1)
            {
                if(i+x > h)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            if (x==h+1 || x==h+2)
            {
                printf(" ");
            }
            if (x > h+2)
            {
                i = i+w;
                if (x <= i)
                {
                    printf("#");
                }
                else
                {
                    printf (" ");
                }
                i = i-w;
            }
        }
        printf("\n");
    }

}
