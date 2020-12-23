#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    //writing a function
    int a;
    int b;

    a = 5;
    b = 10;
    int total = 0;

    total = sum(a,b);

    printf("%d\n",total);

    return 0;
}