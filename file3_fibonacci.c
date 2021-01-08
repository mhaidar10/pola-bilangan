#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Masukan bilangan Fibonacci = ");
    int a=1,b;
    scanf("%i",&b);
    int c=0;
    int d=0,e=1;
    int k3=0,genap=0;
    while (a<=b)
    {
        printf("%i ",c);
        d=e;
        e=c;
        c=d+e;

        if (c%2==0)
        {
            genap=genap+1;
        }
        else if (c%3==0)
        {
           k3=k3+1;
        }

        a++;

    }
    printf("\nSuku kelipatan tiga = %i",k3);
    printf("\nNilai genap = %i",genap);
}
