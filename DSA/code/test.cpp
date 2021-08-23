
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b  = 0, c = 0, d = 0;
    for(int i= 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)a++;
        else if(temp == 2)b++;
        else if(temp == 3)c++;
        else d++;
    }
    int ans = d;

    ans += c;
    if(c <= a) 
        a = a - c;
    else 
        a = 0;

    b = b + (a / 2);
    if(a % 2 == 0)
        a = 0;
    else 
        a = 1;

    ans += (b / 2);
    if(b % 2 == 0)
        b = 0;
    else 
        b = 1;
    ans += (b || a);
    cout << ans << endl;
    return 0;
}