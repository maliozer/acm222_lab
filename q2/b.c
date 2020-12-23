#include <stdio.h>
#include <math.h>

void variable_changer(int *n1){
    *n1 += 2;
    //so variable a changed to 10+2 = 12
}

void change_with_sqrt(int *squared){
    *squared = sqrt(*squared);
    //so variable b changed in this function
}

int main(){
    int a = 10;
    int b = 16;
    printf("Before a: %d\n",a);
    printf("Before b: %d\n",b);

    variable_changer(&a);
    change_with_sqrt(&b);

    printf("After a: %d\n",a);
    printf("After b: %d\n",b);

    return 0;
}