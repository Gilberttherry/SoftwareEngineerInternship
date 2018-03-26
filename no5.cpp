#include<bits/stdc++.h>
using namespace std;

struct Activitiy
{
    int start, finish;
};

bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.start < s2.start);
}
 
int MaxActivities(Activitiy arr[], int n)
{
	int ans=0;
	int temp;
    sort(arr, arr+n,activityCompare);
    for (int i = 0; i < n-1; i++)
    {
    	temp=ans;
    	ans=0;
    	for(int j=i;j<n-1;j++)
		{
      		if (arr[i].finish > arr[j].start)
     		{
//      	printf("%d %d\n",arr[i].finish,arr[j].start);
    			ans++;
    	  	}
    	}    	
    	if(temp>=n-i)
    	{
    	  	break;
		}
		if(ans>=temp)
		{
			temp=ans;
		}
	}
	return temp;
}
 
int main(){
	string tes;
	int a;
	char b;
	Activitiy arr[200];
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d%",&arr[i].start,&arr[i].finish);
	}
	printf("%d\n",MaxActivities(arr,t));
	return 0;
}
