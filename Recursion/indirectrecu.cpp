#include<iostream>
using namespace std;
int n=1;
void odd()
{
    if(n<=10){
    cout<<n-1<<" ";
    n++;
    even();
    }
    return;
}
void even(){
   if(n<=10){
    cout<<n+1<<" ";
    n++;
    odd();
   }
   return;
}




int main()
{

    odd();
}