#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> result;
    vector<int> remainder;
    int a = 397;
    int b = 1;
    int res, rem;
    int i = 0, k = 0;
    int end = 0;
    rem = b % a;
    while (end == 0)
    {
        b = rem * 10;
        res = b / a;
        rem = b % a;

        result.push_back(res);
        remainder.push_back(b);

        if (i > 0)
        {
            for (k = 0; k < i; k++)
            {
                if (remainder[k] == remainder[i])
                {
                    end = 1;
                    break;
                }
            }
        }
        i++;
    }
    for (k; k < i - 1; k++)
    {
        cout << result[k] << " ";
    }
    return 0;
}
