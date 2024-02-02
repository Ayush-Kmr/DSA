#include <bits/stdc++.h>
using namespace std;

void printAllPermutaion(int index, vector<string> &output, string &str)
{
    // Base case
    if (index == str.length())
    {
        output.push_back(str);
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        printAllPermutaion(index + 1, output, str);

        // Backtracking the string to make it in original state again
        swap(str[index], str[j]);
    }
}
int main()
{

    string str = "xyz";
    vector<string> output;
    int index = 0;
    printAllPermutaion(index, output, str);
    cout << "All Permutations are: ";
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    return 0;
}