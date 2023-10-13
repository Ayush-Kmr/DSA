#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 1, 2, 4, 6, 8, 2, 4, 1, 9, 9};
    sort(v.begin(), v.end());
    int count = 1;
    for (int i = 1; i < = v.size(); i++)
    {
        if (v[i - 1] == v[i])
        {
            count++;
        }
        else
        {
            cout << v[i - 1] << "  " << count << endl;
            count = 1;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 2, 2, 3, 3};
    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            cout << arr[i - 1] << " " << count << endl;
            count = 1;
        }
    }
}