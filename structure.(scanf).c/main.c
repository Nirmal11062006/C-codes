#include <stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int roll;
    int age;
    int pin;
}rsh;
int main()
{
    int a,b,c;
    char name[10];
    scanf("%s%d%d%d",name,&a,&b,&c);
    strcpy(rsh.name,name);
    rsh.roll=a;
    rsh.age=b;
    rsh.pin=c;
    printf("%d\n",sizeof(rsh));
    printf("%s %d %d %d\n",rsh.name,rsh.roll,rsh.age,rsh.pin); 
   // printf("%s %d %d %d\n",jay.name,jay.roll,jay.age,jay.pin);
    //printf("%s %d %d %d\n",ker.name,ker.roll,ker.age,ker.pin);
    return 0;
}