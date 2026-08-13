#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, j = 0; i <= high; i++, j++)
        a[i] = temp[j];

    printf("After Merge\n");

    for (i = low; i <= high; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    int a[100];
    int n, i;

    printf("Enter N : ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nOriginal Array\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\n");

    mergeSort(a, 0, n - 1);

    printf("\nFinal Sorted Array\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
