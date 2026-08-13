#include <stdio.h>

int main()
{
    int pages[100];
    int frames[20];
    int recent[20];

    int n, f;
    int i, j;
    int hits = 0;
    int faults = 0;
    int found;
    int pos;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++)
    {
        frames[i] = -1;
        recent[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        found = 0;

        /* Check page hit */
        for (j = 0; j < f; j++)
        {
            if (frames[j] == pages[i])
            {
                found = 1;
                hits++;
                recent[j] = i;
                break;
            }
        }

        /* Page fault */
        if (!found)
        {
            faults++;

            /* Find empty frame */
            pos = -1;

            for (j = 0; j < f; j++)
            {
                if (frames[j] == -1)
                {
                    pos = j;
                    break;
                }
            }

            /* If no empty frame, find LRU */
            if (pos == -1)
            {
                pos = 0;

                for (j = 1; j < f; j++)
                {
                    if (recent[j] < recent[pos])
                        pos = j;
                }
            }

            frames[pos] = pages[i];
            recent[pos] = i;
        }

        printf("\nPage %d : ", pages[i]);

        for (j = 0; j < f; j++)
        {
            if (frames[j] == -1)
                printf("- ");
            else
                printf("%d ", frames[j]);
        }

        if (found)
            printf(" HIT");
        else
            printf(" FAULT");
    }

    printf("\n\nTotal Page Hits   = %d\n", hits);
    printf("Total Page Faults = %d\n", faults);

    printf("Page Fault Ratio  = %.2f\n",
           (float)faults / n);

    return 0;
}
