#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int col=0,row=0;
        int n,m;
        bool temp;
        cin>>n>>m;
        bool colb[m], rowb[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>temp;
                if(temp)
                {
                    colb[j] = 1;
                    rowb[i] = 1;
                }
            }
        }
        for(int i=0;i<n;i++)
            if(!rowb[i])
                row++;
        for(int i=0;i<m;i++)
            if(!colb[i])
                col++;
        if(row>col)
            row = col;
        if(row&1)
            cout<<"Ashish\n";
        else
            cout<<"Vivek\n";
    }
}
