#include <iostream>
using namespace std;

int SumOfTotal(int *arr, int &size)
{
    //base case
    if(size == 0){
        return 0;
    }
    //processing
    size=size-1;
    //recursive function call
    int sum=SumOfTotal(arr+1,size);
   //return sum
   return sum=sum+arr[0];
}

int pivotIndex(int *arr,int totalSum,int &size){
    //base case
    if(size <= 0){
        return 0;
    }
       
    int i=0;
    int beforeSum=SumOfTotal(arr,i);
    i++;
    int afterSum=totalSum-beforeSum-arr[size-1];
    if ( beforeSum==afterSum )
     {
         return size-1;
     }

   size=size-1;
  return pivotIndex(arr,totalSum,size);
     
}




int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int d=1;
int totalSum=SumOfTotal(arr,size);
int answer=pivotIndex(arr,totalSum,size);
cout<<answer<<endl;
    return 0;
}
