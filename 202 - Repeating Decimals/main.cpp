#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (scanf("%d %d", &b, &a) != EOF)
    {
        vector<int> result;
        vector<int> remainder;
        //karuz
        int x = b;
        int res = 0, rem = 0;
        int i = 0, k = 0, j = 0, count = 0;
        int cycleLength = 0;
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
        cycleLength = i - k - 1;

        cout << x << "/" << a << " = " << x / a << ".";
        for (j = 0; j < k; j++)
        {
            cout << result[j];
        }
        cout << "(";
        if (cycleLength > 50)
        {
            for (k; k < 50; k++)
            {
                cout << result[k];
            }
            cout << "...";
        }
        else
        {
            for (k; k < i - 1; k++)
            {
                cout << result[k];
            }
        }
        cout << ")" << endl;
        cout << "   " << cycleLength << " = number of digits in repeating cycle\n\n";
    }
    return 0;
}
