#include <stdio.h>
int main(){
    int a,b,sum, difference, product, quotient;
    printf ("enter a value of a");
    scanf("%d",&a);
    printf("enter a value of b");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("%d\n%d\n%d\n%d\n",sum, difference);
    return 0;

}
