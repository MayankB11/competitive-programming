/* 
   Author:William Granados
   Date:27/01/16
   Solution:
   Simple brute force should do the
   trick
*/
#include<bits/stdc++.h>
using namespace std;

bool pallindrome(int a, int b)
{
    int prod = a*b, rprod = 0;
    int temp = prod;
    while(temp > 0)
    {
        rprod *= 10;
        rprod += temp%10;
        temp/=10;
    }
    return prod == rprod;
}

int main()
{
    int best = 0;
    for(int i = 100;i <= 999;i++)
    {
        for(int j = 100;j <= 999;j++)
        {
            if(pallindrome(i,j))
                best = max(best,i*j);
        }
    }
    cout << best << endl;
    return 0;
}
