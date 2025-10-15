#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int ar[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos;
    printf("Enter position of the value to be deleted:\n");
    scanf("%d", &pos);

    for (int i = pos; i <= n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\t", ar[i]);
    }

    printf("\n");
    return 0;
}
