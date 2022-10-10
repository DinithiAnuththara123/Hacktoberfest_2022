#include <stdio.h>
#include <conio.h>

int fibonacci(int n)
{
    if(n==0|| n==1)
    return (n);
    else
    return(fibonacci(n-1)+fibonacci(n-2));



}

int main()
{
    int terms,i,f;
    printf("Enter number of terms in the Fibonacci sequence: ");
    scanf("%d",&terms);
    printf("\nThe first %d terms of the Fibonacci sequence is:\n",terms);

    for(i=0;i<terms;i++)
    {
        f= fibonacci(i);
        printf("%d\t",f);
    }
}
