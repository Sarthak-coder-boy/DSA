#include <iostream>
using namespace std;
int firstoccur(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else  //(a[mid] < key)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int lastoccur(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
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
    cout << "First occurence at Index " << firstoccur(a, n, key) << endl;
    cout << "last occurence at Index " << lastoccur(a, n, key) << endl;

    return 0;
}