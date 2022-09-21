//
// Created by kautilya on 18/03/20.
//
#include <iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    cout<<((n/a)+((n%a)?1:0))*(m/a+((m%a)?1:0));
    return 0;
}
