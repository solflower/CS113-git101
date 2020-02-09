#include <stdio.h>
#include <stdlib.h>
// char name[20];
char number[20];
// int number;

int main() {
   // printf("Enter name : ");
   // gets(name);
   // fgets(name, 5, stdin); --> 5 is buffer size that we define
   // getchar(chr); --> can only get 1 character according to ascii table. when enter, they won't send anything back
   // fgets(number, 5, stdin);
   // int i = atoi(number); --> array to integer
   // printf("number = %s, i = %d",number,i);
   // putchar(100); --> work like "printf", they will send output "d" to terminal
   // putchar('u'); 

   // --------------------------------------------------------------------------------------

   int found = 0;
   float isExist = 0.0;
   char isOnline = '\0';
   // all of the above are "Fale boolean"

   // fgets(number, 5, stdin);
   // int i = atoi(number);
   // if (i  > 0 && i <= 10)
   // {
   //    printf("if = %d\n", i > 0 && i<=10); --> if "i > 0 && i<=10" is True then output will be "1"
   // }

   // --------------------------------------------------------------------------------------

   fgets(number, 5, stdin);
   int i = atoi(number);
   // int count = 0;
   // while (count < i){
   //    printf("%d\n",count);
   //    count++;
   // }

   // --------------------------------------------------------------------------------------

   for (int j=0; j<i; j++){
      printf("j = %d\n", j);
   }
}

