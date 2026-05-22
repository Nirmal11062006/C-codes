#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
   
    e=a+b+c+d;
    printf("total marks(max100)=%d\n",e);
    if(a>25)
    {
        printf("wrong entry in a\n");
    }
    else if(b>25)
    {
        printf("wrong entry in b\n");
    }
    else if(c>25)
    {
        printf("wrong entry in c\n");
    }
    else if(d>25)
    {
        printf("wrong entry in \n");
    }
    else if(e>90)
    {
        printf("A class \n");
    }
    else if(80<e>90)
    {
        printf("b class \n");
    }
    else if(70<e>80)
    {
        printf("c class \n");
    }
    else if(50<e>70)
    {
        printf("d class\n");
    }  
    else
    printf("fail");
    return 0;
    
}