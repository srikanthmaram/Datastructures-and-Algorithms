#include<iostream>
using namespace std;
string RemoveDupli(string s)
{
    if(s.length()==0)
    return "";
    char str=s[0];
    string ret=RemoveDupli(s.substr(1));
    if(str==ret[0])
    {
      return ret;
    }
    else
    return str+ret;
}
int main()
{
    string s="aaaababbbeeeedddeee";
    cout<<RemoveDupli(s);
}