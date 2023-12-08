#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (arr[i] == arr[j])
            {
                n--;
                for (int k = i; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                i--;
            }
        }
    }

    return n;
}

int main()
{
    int arr[] = {
        1,
        3,
        2,
        5,
        2,
        5,
        3,
        6,
        4,
        5,
        54,
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}