#include<iostream>
using namespace std;

int main()
{
    int x = 36;
    int l = 0;
    int h = x;
    bool flag = false;

    while (l <= h)
    {
        int mid = l + ((h - l) / 2);
        if ((long long)mid * mid == x)  
        {
            flag = true;
            break; 
        }
        else if ((long long)mid * mid < x)
            l = mid + 1;
        else
            h = mid - 1;
    }

    if (flag == false)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }

    return 0;
}
