#include <iostream>
using namespace std;

int main()
{
	string s ="Ayon Ballav";
	
//	cout<< s.back()<<endl;
	//cout<<s[s.size()-1]<<endl;
//	s.pop_back();
//	cout<<s;
	
	//for(char c: s){
//		cout<<c<<endl;
//	}
	//string::iterator it;
	//for(it = s.begin(); it!= s.end();it++)
	//{
//		cout<<*it;
	//}
	
	//reverse(s.begin(),s.begin()+4);
//	cout<<s;
	
string t;
for(int i = s.size()-1; i>=0; i--){
	t+=s[i];
	cout<<t;                                                  
}	
	
	//itarate
	return 0;
	
}