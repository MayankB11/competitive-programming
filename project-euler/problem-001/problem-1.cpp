/* 
   Author:William Granados
   Date:26/01/16
   Solution:
   since the bounds are low
   we can just use bruteforce
   to find the answer
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    for(int i = 3;i < 1000;i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
           cnt += i;
        }
    }
    cout << cnt << endl;
    return 0;
}
