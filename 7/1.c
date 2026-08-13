#include <stdio.h>

enum MooreState
{
    M_S0,
    M_S1,
    M_S2,
    M_S3
};

enum MealyState
{
    E_S0,
    E_S1,
    E_S2
};

int main()
{
    char input[100];
    int i;

    enum MooreState ms = M_S0;
    enum MealyState es = E_S0;

    printf("Enter binary string: ");
    scanf("%s", input);

    printf("\n--- MOORE FSM ---\n");

    for (i = 0; input[i] != '\0'; i++)
    {
        char x = input[i];

        printf("Input = %c : ", x);

        switch (ms)
        {
            case M_S0:
                if (x == '0')
                    ms = M_S0;
                else
                    ms = M_S1;
                break;

            case M_S1:
                if (x == '0')
                    ms = M_S2;
                else
                    ms = M_S1;
                break;

            case M_S2:
                if (x == '0')
                    ms = M_S0;
                else
                    ms = M_S3;
                break;

            case M_S3:
                if (x == '0')
                    ms = M_S2;
                else
                    ms = M_S1;
                break;
        }

        printf("State = S%d", ms);

        if (ms == M_S3)
            printf("  Output = 1 <-- 101 detected");
        else
            printf("  Output = 0");

        printf("\n");
    }

    printf("\n--- MEALY FSM ---\n");

    for (i = 0; input[i] != '\0'; i++)
    {
        char x = input[i];
        int output = 0;

        printf("Input = %c : ", x);

        switch (es)
        {
            case E_S0:
                if (x == '0')
                    es = E_S0;
                else
                    es = E_S1;
                break;

            case E_S1:
                if (x == '0')
                    es = E_S2;
                else
                    es = E_S1;
                break;

            case E_S2:
                if (x == '0')
                    es = E_S0;
                else
                {
                    es = E_S1;
                    output = 1;
                }
                break;
        }

        printf("State = S%d  Output = %d", es, output);

        if (output)
            printf(" <-- 101 detected");

        printf("\n");
    }

    return 0;
}
