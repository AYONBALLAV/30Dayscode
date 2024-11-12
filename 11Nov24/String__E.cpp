#include <iostream>
#include <cstring>
using namespace std;


int main(){
	
	int t;
	int n;
	while(t--)
	{
	char s[101];
	cin>>s;
	
	 n = strlen(s);
	if(n<=10){
		cout<<s;
	}
	else{
		cout<<s[0]<<n-2<<s[n-1];
	}
	
	}
	
	return 0;
}