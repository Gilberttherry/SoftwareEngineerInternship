#include<bits/stdc++.h>
using namespace std;

int main(){
	string tes;
	int x,y;
	char b;
	int temp1=0;
	int temp2=0;
	int arr1[5]={0,0,0,0,0};
	int arr2[5]={0,0,0,0,0};
	int t;
	int cek1=0;
	int cek2=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d%",&x,&y);
		if(x<y)
		{
			cek1=0;
			cek2=0;
			for(int j=0;j<5;j++)
			{
				if(arr1[j]==x){
					cek1=1;
				}
				if(arr1[j]==y){
					cek2=1;
				}
			}
			if(cek1==0){
				arr1[temp1]=x;
				temp1++;
			}
			if(cek2==0){
				arr1[temp1]=y;
				temp1++;
			}
		}
		else if(x>y)
		{
			cek1=0;
			cek2=0;
			for(int j=0;j<5;j++)
			{
				if(arr1[j]==x){
					cek1=1;
				}
				if(arr2[j]==y){
					cek2=1;
				}
			}
			if(temp1!=5){
			if(cek1==0){
				arr1[temp1]=x;
				temp1++;
			}}
			if(cek2==0){
				arr2[temp2]=y;
				temp2++;
			}
		}
	}
	sort(arr1,arr1+temp1);
	sort(arr2,arr2+temp2);
	printf("%d\n",(temp1*2)+(2*arr1[temp1-1]-2)+(temp2*2));
	printf("\n");
	return 0;
}
