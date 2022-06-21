#include <iostream>
using namespace std;

int sumOfArray(int *arr,int &size){

   //base case
   if(size==0){
       return 0;
   }
   
   //processing
   int sum = arr[0];
   

   size=size-1;

   //Recursive function call
   int ans = sum + sumOfArray(arr+1,size);
   
   //return the final answer
   return ans;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

int result = sumOfArray(arr,size);
cout<<" The sum of elements of given array : "<<result<<endl;
    return 0;
}

