#include <stdio.h>

int main()
{
    long long int input;
    scanf("%lld", &input);
    long long int find = 0;
    for (int i = 0; i < input; i++)
    {
        long long int input_the_array_size;
        scanf("%lld", &input_the_array_size);
        long long int array[input_the_array_size];
        for (long long int j = 0; j < input_the_array_size; j++)
        {
            scanf("%lld", &array[j]);
        }
        long long int x;
        scanf("%lld", &x);
        for (long long int j = 0; j < input_the_array_size; j++)
        {
            if (array[j] == x)
            {
                printf("YES\n");
                find = 1;
                break;
            }
        }
        if (find == 0)
        {
            printf("NO\n");
        }
        find = 0;
    }

    return 0;
}
