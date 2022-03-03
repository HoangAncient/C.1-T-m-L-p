/**
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string daoNguocXau(const string & s)
{
    string dao;
    int n = s.length();
    for (int i = n-1; i >= 0; i--)
    {
        dao += s[i];
    }
    return dao;
}

int main()
{
    string c;
    cin >> c;
    if (daoNguocXau(c) == c) cout << "Yes";
    else cout << "No";ahihi co y de conflict

    return 0;
}
