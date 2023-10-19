#include <stdio.h>

int main()
{

    char s[10001];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int ca = 0, sa = 0, di = 0;

        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] > 96 && s[j] < 123)
            {
                sa++;
            }
            else if (s[j] > 64 && s[j] < 91)
            {
                ca++;
            }
            else
            {
                di++;
            }
        }
        printf("%d %d %d\n", ca, sa, di);
    }

    return 0;
}

/*
Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4
*/