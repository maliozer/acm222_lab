#include <stdio.h>
#include <string.h>

//string copy method

int main() {
   char str1[20] = "ACM222 C Structural Programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming

   return 0;
}