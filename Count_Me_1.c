#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int array[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%lld", &array[i]);
    }
    long long int x = 0;
    long long int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0 && array[i] % 3 == 0)
        {
            if (array[i] % 2 == 0)
            {
                x++;
            }
        }
        else if (array[i] % 2 == 0)
        {
            x++;
        }
        else if (array[i] % 3 == 0)
        {
            y++;
        }
    }
    printf("%lld %lld", x, y);

    return 0;
}
