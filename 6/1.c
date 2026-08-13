#include <stdio.h>

union PSW
{
    unsigned char byte;

    struct
    {
        unsigned char P  : 1;
        unsigned char OV : 1;
        unsigned char RS0: 1;
        unsigned char RS1: 1;
        unsigned char F0 : 1;
        unsigned char AC : 1;
        unsigned char CY : 1;
        unsigned char    : 1;
    } bits;
};

int main()
{
    union PSW psw;

    psw.byte = 0x00;
    printf("Initial PSW : 0x%02X\n", psw.byte);

    psw.bits.CY = 1;
    printf("Set Carry\n");
    printf("PSW : 0x%02X\n", psw.byte);

    psw.bits.OV = 1;
    printf("Set Overflow\n");
    printf("PSW : 0x%02X\n", psw.byte);

    psw.bits.RS0 = 0;
    psw.bits.RS1 = 1;
    printf("Select Register Bank 2\n");
    printf("PSW : 0x%02X\n", psw.byte);

    psw.bits.CY = 0;
    printf("Clear Carry\n");
    printf("PSW : 0x%02X\n", psw.byte);

    return 0;
}
