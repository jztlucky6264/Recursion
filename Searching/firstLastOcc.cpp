#include <iostream>
using namespace std;
int firstOccurence(int *arr,int s, int e,int key){
 
   //base case
   if(s>e){
       return -1;
   }

   //processing
   int mid=s+(e-s)/2;
   if((mid == 0 || arr[mid-1]<key) && arr[mid] == key ){
      return mid;
   }
   else if (key>arr[mid])
   {
      s=mid+1;
   }else{
       e=mid-1;
   }
   
   //Recursive function call
   int ans=firstOccurence(arr,s,e,key);
   return ans;
}

int lastOccurence(int *arr,int s, int e,int key,int size){
 
   //base case
   if(s>e){
       return -1;
   }

   //processing
   int mid=s+(e-s)/2;

   if((mid == size-1 || arr[mid+1]>key) && arr[mid] == key ){
      return mid;
   }
   else if (key<arr[mid])
   {
      e=mid-1;
   }else{
       s=mid+1;
   }
   
   //Recursive function call
   int ans=lastOccurence(arr,s,e,key,size);
   return ans;
}

int main()
{
    int arr[]={0,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=0;
    int start=0;
    int end=size-1;
    
    int firstResult=firstOccurence(arr,start,end,key);
    int lastResult=lastOccurence(arr,start,end,key,size);
    cout<<"The first occurence of given number is: "<<firstResult<<endl;
    cout<<"The last occurence of given number is: "<<lastResult<<endl;
    return 0;
}
