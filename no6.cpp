#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	char ans[50];
	printf("string 1 = ");cin>>a;
	printf("string 2 = ");cin>>b;
	getchar();
	if(a==b){
		printf("0\n");
	}
	int x=a.length();
	int y=b.length();
	string tes1=a;
	string tes2=b;
	int z=0;
		while(1)
		{	
			if(tes1.back()==tes2.back())
			{
				tes1.pop_back();
				tes2=b;
			}
			else if(tes2.length()==0)
			{
				ans[z]=tes1.back();
				tes1.pop_back();
				tes2=b;
				z++;
			}
			else if(tes1.length()==0)
			{
				break;
			}
			tes2.pop_back();
		}
		tes1=b;
		tes2=a;
		while(1)
		{	
			if(tes1.back()==tes2.back())
			{
				tes1.pop_back();
				tes2=a;
			}
			else if(tes2.length()==0)
			{
				ans[z]=tes1.back();
				tes1.pop_back();
				tes2=a;
				z++;
			}
			else if(tes1.length()==0)
			{
				break;
			}
			tes2.pop_back();
		}
	printf("%d removing # ",z);
	for(int i=0;i<z;i++)
	{
		if(i==z-1)
		{
			printf("%c\n",ans[i]);
		}
		else
		{
			printf("%c,",ans[i]);
		}
	}
}
