#include <stdio.h>
#include <string.h>

union Reading
{
    int integer;
    float decimal;
};

struct Sensor
{
    int id;
    char name[30];
    int type;
    union Reading value;
};

void readSensor(struct Sensor *s)
{
    printf("Enter Sensor ID : ");
    scanf("%d", &s->id);

    printf("Enter Sensor Name : ");
    scanf("%s", s->name);

    printf("Choose Reading Type\n");
    printf("1.Integer\n");
    printf("2.Float\n");
    printf("Choice : ");
    scanf("%d", &s->type);

    if (s->type == 1)
    {
        printf("Enter Integer Reading : ");
        scanf("%d", &s->value.integer);
    }
    else
    {
        printf("Enter Float Reading : ");
        scanf("%f", &s->value.decimal);
    }
}

void displaySensor(struct Sensor s)
{
    printf("\nSensor Details\n");
    printf("ID : %d\n", s.id);
    printf("Name : %s\n", s.name);

    if (s.type == 1)
        printf("Reading : %d\n", s.value.integer);
    else
        printf("Reading : %.2f\n", s.value.decimal);
}

void updateSensor(struct Sensor *s)
{
    printf("\nUpdating Reading...\n");

    if (s->type == 1)
    {
        printf("Enter Updated Value : ");
        scanf("%d", &s->value.integer);
        printf("Updated Value : %d\n", s->value.integer);
    }
    else
    {
        printf("Enter Updated Value : ");
        scanf("%f", &s->value.decimal);
        printf("Updated Value : %.2f\n", s->value.decimal);
    }
}

void compareSensor(struct Sensor s1, struct Sensor s2)
{
    if (s1.type != s2.type)
    {
        printf("Cannot compare different reading types\n");
        return;
    }

    if (s1.type == 1)
    {
        if (s1.value.integer > s2.value.integer)
            printf("%s has greater reading\n", s1.name);
        else if (s1.value.integer < s2.value.integer)
            printf("%s has greater reading\n", s2.name);
        else
            printf("Both readings are equal\n");
    }
    else
    {
        if (s1.value.decimal > s2.value.decimal)
            printf("%s has greater reading\n", s1.name);
        else if (s1.value.decimal < s2.value.decimal)
            printf("%s has greater reading\n", s2.name);
        else
            printf("Both readings are equal\n");
    }
}

void resetSensor(struct Sensor *s)
{
    s->id = 0;
    strcpy(s->name, "Unknown");
    s->type = 1;
    s->value.integer = 0;
}

int main()
{
    struct Sensor s1, s2;

    readSensor(&s1);
    displaySensor(s1);

    updateSensor(&s1);
    displaySensor(s1);

    printf("\nEnter second sensor\n");
    readSensor(&s2);

    compareSensor(s1, s2);

    resetSensor(&s1);

    printf("\nAfter Reset\n");
    displaySensor(s1);

    return 0;
}
