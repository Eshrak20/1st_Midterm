// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     char digit[11] = {'50', '51', '52', '53', '54', '55', '56', '57', '48', '49'};
//     char small[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

//     char big[26] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

//     int total_digit_small_capital[3] = {0};

//     for (int i = 0; i < n; i++)
//     {

//         char a[10001];
//         scanf("%s", a);

//         for (int j = 0; j < strlen(a); j++)
//         {
//             for (int d = 0; d < 10; d++)
//             {
//                 if (a[j] == digit[d])
//                 {
//                     total_digit_small_capital[0]++;
//                 }
//             }
//             for (int d = 0; d < 26; d++)
//             {
//                 if (a[j] == small[d])
//                 {
//                     total_digit_small_capital[1]++;
//                 }
//             }
//             for (int d = 0; d < 26; d++)
//             {
//                 if (a[j] == big[d])
//                 {
//                     total_digit_small_capital[2]++;
//                 }
//             }
//         }
//         // break;
//         // printf("\n");
//     }
//     printf("%d\n", total_digit_small_capital[0]);
//     return 0;
// }

// int testcase
// cin>>testcase
// While(testcase--)
// {
// string s;
// cin>>s;
// int a[3]={0};
// for(int i=0;i<n;i++)
// {
// if(s[i] jodi boro hoy) a[0]++;
// else if(s[i] jodi chuto hoy) a[1]++;
// else if(s[i] jodi digit hoy) a[2]++;
// }
// for(int i=0;i<3;i++)
// cout<<a[i];

// }

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
