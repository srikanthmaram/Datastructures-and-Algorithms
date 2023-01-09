#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
   int pivot=a[low++];
   while ((low<high))
   {
    
   while(a[low]<pivot)
   {
    low++;
   }
   while(a[high]>pivot)
   {
    high++;
   }
   swap(a[low],a[high]);
   }

}
void quicksort(int a[],int low,int high)
{
 if(low<high)
 {
    int pi=partition( a,low, high);
    quicksort(a,low ,pi-1);
    quicksort(a,pi+1,high);
 }
}
int main()
{
    int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  quicksort(a,0,n-1);
}