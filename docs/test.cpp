
#include <iostream>
using namespace std;
//program that prints pattern of stars
int main()
{
    int i, j, k, n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}




