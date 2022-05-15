#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter anumber for factorial operation:";
    cin >> a;
    int ans = 1;
    if (a <= 1)
        cout << 1 << endl;
    else
    {
        for (int i = a; i >=1; i--)
        {
            ans*=i;
        }
        cout<<ans<<endl;
    }
}