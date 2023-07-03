#include <iostream>
#include<string>

using namespace std;

int Word_Count(string text)
{
    int ctr = 0;
    for(int x=0;x<text.length();x++)
    {
        if(text[x] == ' ')
        ctr++;
    }
    return ctr+1;
}

int main()
{
    cout<<"Number of words: "<<Word_Count("apple sucks");
}