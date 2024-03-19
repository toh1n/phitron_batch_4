#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long at = 0;
        long long r = 0;

        if (b >= 3)
        {
            at = b / 3;
            if (b % 3 != 0)
            {
                r = b % 3;
            }
        }
        else if (b > 0 && b < 3)
        {
            r = b;
        }

        long long ct = 0;

        if (r > 0 && (c + r) < 3)
        {
            cout << -1 << '\n';
            continue;
        }
        else if (r == 0 && c < 3 && c > 0)
        {

            ct++;
        }
        else
        {
            ct = (c + r) / 3;
            if ((c + r) % 3 != 0)
            {
                ct++;
            }
        }

        cout << a + at + ct << '\n';
    }

    return 0;
}
