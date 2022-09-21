#include <iostream>
#include <list>
using namespace std;
int main()
{
    int m,temp;
    cin>>m;
    list <int> jyo;
    for(int i = 0;i<m;i++)
    {
        cin>>temp;
        jyo.push_back(temp);
    }
    int n;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        list<int>::iterator itr = jyo.begin();
        advance(itr,temp-1);
        cout<<*itr<<endl;
        jyo.erase(itr);
    }
}
