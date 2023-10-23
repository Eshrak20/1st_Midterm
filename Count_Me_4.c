#include <stdio.h>
#include <string.h>

int main()
{
    char n[10009];
    scanf("%s", n);
    int x[26] = {0};
    for (int i = 0; i < strlen(n); i++)
    {
        int val = n[i] - 'a';
        x[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (x[i] != 0)
        {
            printf("%c - %d\n", i + 'a', x[i]);
        }
        x[i] = 0;
    }

    return 0;
}
