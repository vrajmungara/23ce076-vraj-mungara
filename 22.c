#include<stdio.h>
#include<conio.h>
void main()
{
    int bs,da,hra,ma,ta,pf,gs,ns;
    int it=500;
    scanf("%d",&bs);
    da=0.7*bs;
    hra=0.07*bs;
    ma=0.02*bs;
    ta=0.04*bs;
    pf=0.12*bs;
    gs=bs+(da+hra+ma+ta);
    ns=gs-(pf+it);
    printf("\nenter the basic salary: %d",bs);

    printf("\nda of basic salary: %d",da);
    printf("\nhra of basic salary: %d",hra);
    printf("\nta of basic salary: %d",ta);
    printf("\nma of basic salary: %d",ma);
    printf("\npf of basic salary: %d",pf);
    printf("\ngs of basic salary: %d",gs);
    printf("\nns of basic salary: %d",ns);
    printf("\ncreated by:23ce076 vraj mungara");
    getch();
}
