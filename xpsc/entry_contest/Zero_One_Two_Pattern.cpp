
#include <bits/stdc++.h>

using namespace std;
  
int main()
{

    int n, k;
    cin >> n;

    k = 2 * n - 1;
    int arr[3] = {0, 1, 2};

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i == j || j == (k - i + 1))
            {
                cout << arr[i % 3];
            }
            else
            {
                printf(" ");
            }
        }
        cout << '\n';
    }

    return 0;
}