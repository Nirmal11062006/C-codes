#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    int age;
    int pin;
};//for struct itd semi colan
int main()
{
    struct student rsh={"rathish",249,19,641032};
    struct student jay={"jaya",321,19,625014};
    struct student ker={"keerthi",140,19,638458} ;
    printf("%d\n",sizeof(rsh));
    printf("%s %d %d %d\n",rsh.name,rsh.roll,rsh.age,rsh.pin);
    printf("%s %d %d %d\n",jay.name,jay.roll,jay.age,jay.pin);
    printf("%s %d %d %d\n",ker.name,ker.roll,ker.age,ker.pin);
    return 0;
}
//siz integer 3*4=12,char arraay sizw 10 =10+12=22=24 the next equivalent of 4 is 24