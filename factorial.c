#include<stdio.h>


int n;
long result;

long fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main(int argc, char const *argv[])
{
    printf("type a number integer and positive \n");
    scanf("%d", &n);
    if (n < 0) {
        printf("the number need be integer and positive 🤷‍♂️");
    } else {
        result = fact(n);
        printf("%d! = %d\n", n, result);
    }
    
    return 0;
}
