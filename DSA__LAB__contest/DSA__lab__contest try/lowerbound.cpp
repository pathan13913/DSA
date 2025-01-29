#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int n, q;
        cin >> n >> q;

        int points[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> points[i];
        }

        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < q; ++i)
        {
            int A, B;
            cin >> A >> B;

            int count = 0;
            for (int j = 0; j < n; ++j)
            {
                if (points[j] >= A && points[j] <= B)
                {
                    count++;
                }

                if (points[j] > B)
                {
                    break;
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}
