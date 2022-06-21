#include <iostream>
using namespace std;
int Sumup(int arr[],int s, int e){
    int sum=0;
    while (s<=e)
    {
        sum=sum+arr[s];
        s++;
    }
    return sum;    
}
 
int getPivotElement(int *arr, int s, int e){
   if (s > e) /* Array not rotated */  
       return 0;
    
  int mid=s+(e-s)/2;
    int leftSum=Sumup(arr,0,mid-1);
    cout<<"left sum is: "<<leftSum<<endl;
    int rightSum=Sumup(arr,mid+1,e);
    cout<<"right sum is : " <<rightSum<<endl;
    if(leftSum == rightSum){
        return mid;
    }
  else if (leftSum>rightSum)
  {
      e=mid-1;
  }
  else{
      s=mid+1;
  }
  return getPivotElement(arr,s,e);
}
int main()
{
    int arr[]={1,7,3,6,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
 
     int answer = getPivotElement(arr,0,size-1);
cout<<answer<<endl;
    return 0;
}
