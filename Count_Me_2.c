#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000001];
    scanf("%s", arr);
    int sz = strlen(arr);
    // printf("%s",arr);
    char consonants[21] = {98, 99, 100, 102, 103, 104, 106, 107, 108, 109, 110, 112, 113, 114, 115, 116, 118, 119, 120, 121, 122};

    int x = 0;

    for (int i = 0; i <= sz; i++)
    {

        for (int j = 0; j < 21; j++)
        {
            if (arr[i] == consonants[j])
            {
                x++;
            }
        }
    }
    printf("%d ", x);

    return 0;
}
