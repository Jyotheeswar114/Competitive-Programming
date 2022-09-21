#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long 
        int k;
        cin >> k;
        string test="codeforces";
        int x;
        if(k==1){
                cout << test;
                cout << '\n';
                return 0;
        }
        for(int i=2;i<=40;i++){
                if(pow(i,10)>=k){
                        x=i;break;
                }
        }
        int y;
        for(int i=1;i<=10;i++){
                if((pow(x,i)*pow(x-1,(10-i)))>=k){
                        y=i;
                        break;
                }
        }
        for(int i=0;i<y;i++){
                for(int j=0;j<x;j++){
                        cout << test[i];
                }
        }
        for(int i=y;i<10;i++){
                for(int j=1;j<x;j++)
                        cout << test[i];
        }
        cout << '\n';
}
