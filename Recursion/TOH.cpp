#include<iostream>
using namespace std;
void TOH(int n,char src,char dest,char helper)
{
    if(n==0)
    return ;
   
   TOH(n-1,src,helper,dest);
   cout<<"MOVE FROM "<<src<<" TO "<<dest<<endl;
   TOH(n-1,helper,src,dest);
}
int main()
{
   TOH(4,'A','C','B') ;
}