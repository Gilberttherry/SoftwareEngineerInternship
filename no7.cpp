#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int y=0;
	string id;
	string nama;
	string arr[200];
	scanf("%d",&t);
	int ans2=0;
	while(t--)
	{
		ans2=0;
		cin>>id>>nama;
		getchar();
		if(id=="add")
		{
			arr[y]=nama;
			y++;
		}
		else if(id=="find")
		{
			for(int i=0;i<y;i++)
			{
				string k=arr[i];
				string l=k.substr(0,nama.length());
				//cout<<k<<l<<endl;
				if(nama==l)
				{
					ans2++;
				}
			}
			printf("%d\n",ans2);
		}
	}
}
