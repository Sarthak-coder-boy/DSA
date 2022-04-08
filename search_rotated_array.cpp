#include <iostream>
using namespace std;
int getpivot(int a[], int n)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
int bs(int a[], int s, int e, int key)
{

    int mid = s + (e - s / 2);
    while (s <= e)
    {
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s / 2);
    }
    return -1;
}
int main()
{
    int n, target;
    cin >> n >> target;

    int a[n];
    for (int i = 0; i < n; i++)
    {  
        cin >> a[i];
    }
    int pivot = getpivot(a, n);
    if (a[pivot] <= target && a[n - 1] >= target)
    {
        cout <<"Element is at index "<< bs(a, pivot, n - 1, target);
    }
    else
    {
        cout<<"Element is at index " << bs(a, 0, pivot-1, target);
    }
    return 0;
}