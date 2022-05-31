#include <iostream>
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main() 
{
    long long int n,total=0;
    cin>>n;
    vector <long long int> v;
    for(int i=0; i<n; i++)
    {
        long long int a;
        cin>>a;
        v.push_back(a);
        total += a;
    }
    sort(v.begin(),v.end());
        
    if(total%2 == 0)
        cout<<total;
    else if (total %2 != 0)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i] % 2 != 0 || v[i] == 1)
                {
                    total -= v[i];
                    break;
                }
        }
        cout<<total;
    }

    return  0 ;
}