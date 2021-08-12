#include <stdio.h>
#include <unistd.h>
void f_mario(int n); // mario blocks function's prototype

int main (void)
{
    f_mario(8);
    return(0);
}

void f_mario(int n)
{
    int i;
    int j;

    i = 1;
    if (n > 0 && n <= 8)
    {
        while(i <= n) 
        {
            j = n;
            while(j >= 1)
            {
                if (i >= j)
                    write(1, "#", 1);
                else
                    write(1, " ", 1);
                j--;
            }
            i++;
            write(1, "\n", 1);
        }
    }
}
