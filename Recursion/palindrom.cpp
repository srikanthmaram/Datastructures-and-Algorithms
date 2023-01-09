#include<iostream>
using namespace std;
bool isPalindrom(string s,int i,int j)
{
    if(i>j)
    return true;
    if(s[i]!=s[j])
    return false;
    return isPalindrom(s,i+1,j-1);
}
int main()
{
    string s;
    cin>>s;
    if(isPalindrom(s,0,s.length()-1))
    cout<<"it is palindrom";
    else
    cout<<" it is not a palindrom";


}