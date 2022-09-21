#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		long long int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];

		if (k==1)
			cout << "YES" << endl;
		else
		{
			int flag=1,FLAG_NO=0,one=0,p=0;
			while(flag)
			{
				//			cout << "i = " << p++ <<endl;
				one =0;
				for(int i=0;i<n;i++)
				{
					int mod=arr[i]%k;
					if(mod >1)
					{
						//					cout << "mod>1" << endl;
						FLAG_NO=1;
						flag=0;
						break;
					}
					if( mod == 1 )
					{
						//					cout << "HERE" << endl;

						one++;
						if( one > 1 )
						{
							FLAG_NO=1;
							flag=0;
							break;
						}
					}
					arr[i]=arr[i]/k;
				}
				int f=0;
				for(int i=0;i<n;i++)
				{
					if(arr[i]==0)
						f++;
				}
				if(f==n)
					flag=0;
			}

			if (FLAG_NO)
				cout << "NO" <<endl;
			else 
				cout << "YES" << endl;
		}
	}
	return 0;
}
