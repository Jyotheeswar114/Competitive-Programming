//
// Created by kautilya on 18/03/20.
//
#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int pre = k-1;
    while(a[k-1] == a[pre] && a[k-1]!=0)
    {
        k++;
    }
    if(a[k-1])
        cout<<k-1<<endl;
    else
    {
        int j = k-1;
        while(a[j]==0)
        {
            j--;
        }
        cout<<j+1<<endl;
    }
}
