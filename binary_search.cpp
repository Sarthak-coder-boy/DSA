
//  Elements should be in monotonc function i.e in sorted order

#include <iostream>
using namespace std;
int bs(int a[], int size, int key)
{
    int s = 0, e = size - 1;
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
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "At index " << bs(a, n, key);
    return 0;
}