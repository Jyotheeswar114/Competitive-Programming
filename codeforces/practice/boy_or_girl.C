#include <iostream>
using namespace std;
int a[200]={0};
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(a[s[i]]!=1)
        {
            a[s[i]]=1;
            count++;   
        }
    }
    //cout<<count<<endl;
    if(count&1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}
