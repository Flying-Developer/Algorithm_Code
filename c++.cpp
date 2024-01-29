#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(void)  
{
    int n;
    cin >> n;

    ll ans = 1;
    for (int i = n; i >= 2;i--)
    {
        ans *= i;
        while(ans%10==0)
            ans /= 10;
        ans %= 1000000000000;
    }
    
    string temp = to_string(ans);
    cout << temp.substr(temp.size()-5);
}