#include <bits/stdc++.h>
using namespace std;

void four_sum(vector<int> a, int target, int n)
{
    if (a.empty())
        return;
    vector<vector<int>> res;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int targ = target - a[i] - a[j];
            int front = j + 1, back = n - 1;
            while (front < back)
            {
                int sum2 = a[front] + a[back];
                if (sum2 < targ)
                {
                    front++;
                }
                else if (sum2 > targ)
                {
                    back--;
                }
                else if (sum2 == targ)
                {
                    vector<int> v;
                    v.push_back(a[i]);
                    v.push_back(a[j]);
                    v.push_back(a[front]);
                    v.push_back(a[back]);
                    res.push_back(v);
                    while (front < back && v[2] == a[front])
                        ++front;
                    while (front < back && v[2] == a[back])
                        --back;
                }
            }
            while (j + 1 < n && a[j + 1] == a[j])
                ++j;
        }
        while (i + 1 < n && a[i + 1] == a[i])
            ++i;
    }
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "enter the size of array:  ";
    int n, target;
    cin >> n;
    vector<int> a(n);
    cout << "enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the target sum: ";
    cin >> target;
    four_sum(a, target, n);
    return 0;
}
