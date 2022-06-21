#include <iostream>
using namespace std;

int binarySearch(int *arr,int key,int s ,int e){

//base case
  if(s>e){
      return false;
  }

  //processing
  int mid = s+(e-s)/2;
  if(arr[mid] == key){
      return true;
  }

//Recursive Function call
  if(key>arr[mid]){
      int ans = binarySearch(arr,key,mid+1,e);
      return ans;
  }else{
      int ans = binarySearch(arr,key,s,mid-1);
      return ans;
  }

  

}

int main()
{
    int arr[]={1,2,4,5,7,8,9,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int key=14;

   if ( binarySearch(arr,key,start,size))
   {
       cout<<"Present"<<endl;
   }else{
       cout<<"Not Present"<<endl;
   }
   
    return 0;
}
