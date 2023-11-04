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