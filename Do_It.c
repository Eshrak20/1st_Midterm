#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
