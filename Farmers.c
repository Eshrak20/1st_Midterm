#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int man_1[n];
    int man_2[n];
    int day[n];
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < 3; j++)
        {

            if (j == 0)
            {
                man_1[i] = arr[j];
            }
            else if (j == 1)
            {
                man_2[i] = arr[j];
            }
            else if (j == 2)
            {
                day[i] = arr[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int add = man_1[i]+man_2[i];
        int multi = day[i]*man_1[i];
        int divide = multi / add;
        int result = day[i]-divide;
        printf("%d\n", result);
    }
    return 0;
}
