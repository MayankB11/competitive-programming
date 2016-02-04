/* 
   Author:William Granados
   Date:26/01/16
   Solution:
   We know that for any given integer
   its factors are always less than or
   or equal to its square root. So we
   only need to find all primes up to
   the sqrt(600851475143)
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int MAXN = 775150;
    bool v[MAXN];
    memset(v,true,sizeof(v));
    v[0] = false;
    v[1] = false;
    for(int i = 2;i < MAXN;i++)
    {
        if(v[i])
        {
            for(int j = i+i;j < MAXN;j+=i)
            {
                v[j] = false;
            }
        }
    }
    long long query = 600851475143;
    for(int i = MAXN-1;i > 0;i--)
    {
        if(v[i] && query % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
}
