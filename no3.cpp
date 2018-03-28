#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string k="";
//	cin>>s;
	getline(cin,s);
	for(int i=0;i<=s.length()-1;i++){
		if(s[i]-'0'<=9 && s[i]-'0'>=0){
			k+=s[i];
		}
	}
	if(k=="0")
	cout<<"0\n";
	else if(k=="62")
	cout<<"62\n";
	else if(k=="")
	cout<<"\n";
	else if(k=="-")
	cout<<"-\n";
	else if(k[0]=='0')
	{
		k.erase(k.begin(),k.begin()+1);
		cout<<"62"<<k<<endl;
	}
	return main();
}
