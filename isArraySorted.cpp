#include <iostream>
using namespace std;

int isArraySorted(int arr[], int size){

//Base case
if( size==0 || size==1 ){
    return true;
}   

//check unsorted pair
if(arr[size-1]<arr[size-2]){
    return false;
}

//Recursion call
int ans= isArraySorted(arr,size-1);

//return calculated answer
return ans;

}

int main()
{
    int arr[]={0,1,2,3,4,9,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);

 int answer  = isArraySorted(arr,size);
 if(answer){
 cout<<" Given array is sorted "<<endl;
 }else{
      cout<<" Given array is Unsorted "<<endl;
 }

    return 0;
}
