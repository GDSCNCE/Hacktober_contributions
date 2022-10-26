#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20], num, i, j, temp = 0, new_no;
    cout << "Enter the total number\n";
    cin >> num;
    cout << "Enter the numbers\n";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < num; i++)
    {
        cout << "THE ARRAY INDEX IS " << i << " and the value is : ";
        cout << arr[i] << endl;
    }
    cout << "After sorting the array\n";
    for (i = 0; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }

    // insertion new element in array

    cout << "Enter the new number\n";
    cin >> new_no;
    for (i = 0; i < num; i++)
    {
        num = num + 1;
        if (arr[i] < new_no)
        {
            arr[num] = new_no;
            cout<<num<<"="<<arr[num];
        }
        cout << "After insertion the new element the no. is \n";
        for (i = 0; i < num; i++)
        {
            cout << arr[i];
        }
        return 0;
    }
}
