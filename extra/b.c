#include <stdio.h>


const float PI=3.14;
float area(float r){
	float result=PI*r*r;
	return result;
}
float circumfrance(float r){
	float cevap=2*PI*r;
	return cevap;
}
int main(){
	float radius=2.1;
	printf("area of circle=%f\n",area(radius));
	printf("Circumfrance ofcircle=%f\n",circumfrance(radius));
	return 0;
	
}
