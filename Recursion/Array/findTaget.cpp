#include <bits/stdc++.h>
using namespace std;

int findFirstOccurence(int arr[], int n, int findex, int target)
{
    if (n == findex)
    {
        return -1;
    }
    if (arr[findex] == target)
    {
        return findex;
    }
    else
    {
        findFirstOccurence(arr, n, findex + 1, target);
    }
};

int findLastOccurence(int arr[], int n, int lindex, int target)
{
    if (n < 0)
    {
        return -1;
    }
    if (arr[lindex] == target)
    {
        return lindex;
    }
    else
    {
        findLastOccurence(arr, n, lindex - 1, target);
    }
}

int findAllOccurence(int arr[], int n, int findex, int target, vector<int> &ans)
{
    if (findex == n)
    {
        return -1;
    }
    if (arr[findex] == target)
    {
        ans.push_back(findex);
    }
    findAllOccurence(arr, n, findex + 1, target, ans);
}
int main()
{
    vector<int> ans;
    int n;
    int findex = 0;
    cout << "Enter the value of n :";
    cin >> n;
    int arr[n];
    int lindex = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element of the array:";
    cin >> target;

    int indvalue = findFirstOccurence(arr, n, findex, target);
    cout << "The frst index of the target value is :" << indvalue << endl;

    int linvalue = findLastOccurence(arr, n, lindex, target);
    cout << "The last index of the target value is :" << linvalue << endl;

    findAllOccurence(arr, n, findex, target, ans);
    cout << "The all occurence of the target value is :" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}