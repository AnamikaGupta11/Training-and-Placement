#include <stdio.h>
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
    }
    
    int temp = last;
    last = n;
    n = temp;

    printf("First = %d\nLast = %d",n,last);
    return 0;
}