//add characters to char array inside struct

#include<stdio.h>
#include<string.h> //may be added as well

int main(){
	struct Ev{
		int oda_sayisi;
		char adres[100];
		float metrekare;
	} test_ev,test_ev2;
	
	test_ev.oda_sayisi=4;
	test_ev.metrekare=120.5;
	//if you want to work on char array inside a structure
	//you need use strcpy() to attach value for char array
	strcpy(test_ev.adres,"Goztepe/Kadikoy");

	printf("Numberof room= %d\n",test_ev.oda_sayisi);
	printf("Metersquare=%f\n",test_ev.metrekare);
	printf("Adress= %s\n",test_ev.adres);
	
    test_ev2.oda_sayisi=5;
	
    return 0;
	
}