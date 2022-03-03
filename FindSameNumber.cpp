/**
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10000];
    int dem[10001];
    for (int i = 0; i < n; i++)
    {
        dem[i+1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dem[arr[i]] ++;
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
         if (dem[arr[i]] >= 2)
        {
                k++;
         }
    }
    if (k == 0) cout << "No";
    else cout << k << "Yes";
    return 0;
}
