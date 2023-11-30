#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    float dis,root1, root2, imaginary;
    printf ("Enter a:");
    scanf ("&d", &a) ;
    printf ("Enter b:\n");
    scanf ("&d",&b);
    printf ("Enter c:\n");
    scanf ("&d", &c);
    dis=b^2-4*a*c;
    switch (dis>0)
    {
        case 1:
        root1=(-b+sqrt (dis))/ (2*a);
        root2=(-b-sqrt (dis)) / (2*a) ;
        printf("root1 and root2 are real and distinct %.2f %.2f",root1,root2);
        break;
        case 0:
        switch (dis<0)
        {
        case 1:
        root1=root2=-b/ (2*a) ;
        imaginary=sqrt (-dis) / (2*a) ;
        printf ("Rootl and Root2 are equaland imaginary:%.2f %.2f", root1, root2);
        printf ("\n imaginary is :18.2£", imaginary);
        break;
        case 0:
        switch(dis==0)
        {
        root1=root2=-b/(2*a);
        printf("root1 and root2 are real and equal:%.3f %.3f",root1,root2);
        }
    }
    printf("created by:23ce076 vraj mungara");
    return 0;
    }
}

