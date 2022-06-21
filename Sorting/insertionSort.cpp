#include <iostream>
using namespace std;

void insertionSortRec(int *arr,int n){
 
 //base case
 if(n <= 0){
    return;
 }

  //recursive func call

  insertionSortRec(arr,n-1);

  //processing
  int last=arr[n-1];   
  int j=n-2;
   
   while( j>=0 && arr[j] > last){
    
        arr[j+1]=arr[j];
        j--;
    }
  arr[j+1]=last;

 }



  int main(int argc, char const *argv[])
{
    int arr[]={2,3,10,5,7,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"before sorting "<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
   insertionSortRec(arr,n);
    
    cout<<"after sorting "<<endl;
     for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
 }
