#include <stdio.h>

int main(){

    //show the aim of the pointer and usage
    int n  = 5;
    
    int* ptr_n = &n;


    printf("pointers points the value : %d\n",*ptr_n);


    printf("value of n %d\n", n);
    printf("size of n %zu\n", sizeof(n));
    printf("address of n %p\n", &n);

    return 0;
}