#include <iostream>
using namespace std;
int main()
{
    int n, arr[10], i, greater = 0, second_greater = 0;
    cout << "enter the total numbers\n";
    cin >> n;
    cout << "Enter the numbers \n";
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    greater = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > greater)
            greater = arr[i];
    }
    cout << "Greater Number in this array is " << greater << endl;
    second_greater = arr[0];
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] < greater && arr[i] != greater)
            {
                if (arr[i] > second_greater)
                {
                    second_greater = arr[i];
                }
            }
        }
        cout << "Second Greater Number in this array is" << second_greater;
    }
}
