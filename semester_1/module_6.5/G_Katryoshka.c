#include <stdio.h>

int main()
{

    long long int eyes, mouth, body, max1, max2, total, twoeyesmax;
    scanf("%lld%lld%lld", &eyes, &mouth, &body);

    if (mouth == 0 && eyes == 0 && body == 0)
    {
        printf("0\n");
    }
    else
    {
        if (mouth != 0)
        {
            if (eyes <= body && eyes <= mouth)
            {
                max2 = eyes;
            }
            else if (body <= eyes && body <= mouth)
            {
                max2 = body;
            }
            else
            {
                max2 = mouth;
            }

            eyes = eyes - max2;
            body = body - max2;
            mouth = mouth - max2;

            twoeyesmax = eyes / 2;

            if (twoeyesmax >= body)
            {
                max1 = body;
            }
            else
            {
                max1 = twoeyesmax;
            }
            total = max1 + max2;
            printf("%lld\n", total);
        }
        else
        {

            if (twoeyesmax >= body)
            {
                max1 = body;
            }
            else
            {
                max1 = twoeyesmax;
            }
            printf("%lld\n", max1);
        }
    }

    return 0;
}

/*
The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤1018
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

Examples
inputCopy
1 2 3
outputCopy
1
inputCopy
0 11 2
outputCopy
0
inputCopy
90 24 89
outputCopy
57
*/