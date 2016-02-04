#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}

int main()
{
    long long ans = 1;
    for(int i = 1;i <= 20;i++)
    {
        ans = lcm(ans,i);
    }
    cout << ans << endl;
    return 0;
}
