#include<iostream>
using namespace std;

int main()
{
    int a[] = {0, 0, 0, 0, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int l = 0;
    int h = n - 1;
    int x = 1;
    int count = 0;
    bool flag = false;

    while (l <= h)
    {
        int mid = l + ((h - l) / 2);
        if (a[mid] == x)
        {
            count++;
            flag = true;
            h = mid - 1; 
        }
        else if (a[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    if (flag == false)
    {
        cout << "not found" << endl;
    }
    else
        cout << "count is " << count << endl;
    return 0;
}
