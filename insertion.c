#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int ar[n + 1];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int val, pos;
    printf("Enter value to be inserted and the position:\n");
    scanf("%d %d", &val, &pos);

    for (int i = n - 1; i >= pos; i--)
    {
        ar[i + 1] = ar[i];
    }

    ar[pos] = val;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", ar[i]);
    }

    printf("\n");
    return 0;
}
