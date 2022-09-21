#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,e = 0, o = 0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>j;
            if(i%2 != j%2)
            {
                if(i%2)
                    e++;
                else
                    o++;
            }
        }
        if(o == e)
            cout<<e<<endl;
        else
            cout<<-1<<endl;
    }
}
