
#include <stdio.h>

int main()
{
   char a;
   scanf("%c",&a);
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
   {
       printf("the input ia a vowel");
   }
   else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
   {
       printf("the input is a vowel");
       
   }
   else
   {
       printf("the input is a consent");
   }

   

    return 0;
}
