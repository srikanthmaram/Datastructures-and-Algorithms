#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    string str=s.substr(1);
      reverse(str);
      cout<<s[0];
}
int main()
{
    string s="binod";
    reverse(s);
}