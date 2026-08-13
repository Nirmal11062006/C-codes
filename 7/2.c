#include <stdio.h>

#define MAX_FRAMES 10
#define MAX_PROCESSES 5
#define MAX_PAGES 10

int frames[MAX_FRAMES];
int pageTable[MAX_PROCESSES][MAX_PAGES];

void initialize(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        frames[i] = -1;

    for (i = 0; i < MAX_PROCESSES; i++)
        for (j = 0; j < MAX_PAGES; j++)
            pageTable[i][j] = -1;
}

void display(int n)
{
    int i;

    printf("\nFrame Status\n");

    for (i = 0; i < n; i++)
    {
        if (frames[i] == -1)
            printf("Frame %d : FREE\n", i);
        else
            printf("Frame %d : Process %d\n", i, frames[i]);
    }
}

void allocatePage(int process, int page, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (frames[i] == -1)
        {
            frames[i] = process;
            pageTable[process][page] = i;

            printf("Page %d of Process %d allocated to Frame %d\n",
                   page, process, i);

            return;
        }
    }

    printf("Memory Full! No free frame available.\n");
}

void deallocatePage(int process, int page, int n)
{
    int frame;

    frame = pageTable[process][page];

    if (frame == -1)
    {
        printf("Page is not allocated.\n");
        return;
    }

    frames[frame] = -1;
    pageTable[process][page] = -1;

    printf("Page %d of Process %d deallocated from Frame %d\n",
           page, process, frame);
}

int main()
{
    int n;
    int choice;
    int process, page;

    printf("Enter number of frames: ");
    scanf("%d", &n);

    initialize(n);

    while (1)
    {
        printf("\n1. Allocate Page\n");
        printf("2. Deallocate Page\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Process ID: ");
                scanf("%d", &process);

                printf("Enter Page Number: ");
                scanf("%d", &page);

                allocatePage(process, page, n);
                display(n);
                break;

            case 2:
                printf("Enter Process ID: ");
                scanf("%d", &process);

                printf("Enter Page Number: ");
                scanf("%d", &page);

                deallocatePage(process, page, n);
                display(n);
                break;

            case 3:
                display(n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
