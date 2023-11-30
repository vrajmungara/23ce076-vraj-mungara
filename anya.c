#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,k;

    printf("Enter n : ");
    scanf("%d",&n);

    i=n;
    do
    {
        for(j=0; j<i-1; j++)
        {
            printf("  ");
        }

        int c=65;
        do
        {
            printf("%c ",c);
            c++;
            j++;
        }
        while(j<n);

        c=c-2;
        for(k=i; k<n; k++)
        {
            printf("%c ",c);
            c--;
        }

        printf("\n");
        i--;
    }
    while(i>0);

    printf("\n\n VRAJ MUNGARA 23CE076");
    return 0;
}


