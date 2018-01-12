#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int n)
{
    int sum = 0;
    int i = 0;

    for(;i<n;i++) sum+=a[i];

    return sum;
}

void printSol(int a[], int n)
{
    int i = 0;

    printf("{");

    for(; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\b}\n");
}

void Part(int p, int a[], int n)
{
    int i=1;
    for(; i <= n; i++)
    {
        if(sum(a, p) <= n)
        {
            a[p] = i;

            if(sum(a, p) == n)
            {
                printSol(a, p);
            }

            else Part(p + 1, a, n);
        }
    }
}

int main()
{
    int a[10] ,n;

    scanf("%d", &n);

    Part(0, a, n);

    return 0;
}
