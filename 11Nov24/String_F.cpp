#include <iostream>
#include <cstring>
using namespace std;


int main(){
	
	int t;
	while(t--)
	{
	char s[101];
	cin>>s;
	
	int n = strlen(s);
	if(n<=10){
		cout<<s;
	}
	else{
		cout<<s[0]<<n-2<<s[n]-1;
	}
	
	}
}