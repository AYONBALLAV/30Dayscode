#include <iostream>
#include <cstring>
using namespace std;

char s[1000001];
int main()
{
	cin>>s;
	int n = strlen(s);
	int sum=0;
	
	for(int i =0;i<n;i++){
		sum+=s[i]-'0';
	}
	cout<<sum;
	return 0;
}