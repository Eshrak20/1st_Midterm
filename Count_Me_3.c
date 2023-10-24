
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int total_digit_small_capital[3] = {0};

    for (int i = 0; i < n; i++)
    {
        char a[10001];
        scanf("%s", a);

        for (int j = 0; j < strlen(a); j++)
        {
            if (a[j] >= '0' && a[j] <= '9')
            {
                total_digit_small_capital[2]++;
            }
            else if (a[j] >= 'a' && a[j] <= 'z')
            {
                total_digit_small_capital[1]++;
            }
            else if (a[j] >= 'A' && a[j] <= 'Z')
            {
                total_digit_small_capital[0]++;
            }
        }
        printf("%d %d %d\n", total_digit_small_capital[0], total_digit_small_capital[1], total_digit_small_capital[2]);
        total_digit_small_capital[0] = 0;
        total_digit_small_capital[1] = 0;
        total_digit_small_capital[2] = 0;
    }
    return 0;
}
