#include <stdio.h>

//define a union
union car
{
  int price;
  float tax;
};

//struct definition
struct structJob
{
   float salary;
   int workerNo;
} sJob;

int main(){

    union car car1, car2, *car3;

    car1.price = 10;
    car1.tax = 1.8;

    car2.price = 200;
    car2.tax = 36.7;

    //access members of a union
    printf("%i \n",car1.price);
    printf("%i \n",car2.price);

    printf("size of union = %lu bytes", sizeof(car1));
    printf("\nsize of structure = %lu bytes", sizeof(sJob));
    return 0;
}