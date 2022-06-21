#include <iostream>
using namespace std;

int peakOfMountain(int *arr,int s,int e,int size){

//base case
if(s>e){
    return -1;
}

//processing
int mid=s+(e-s)/2;

if(arr[mid-1]<arr[mid] && (arr[mid]>arr[mid+1])){
   return mid;
}else if(arr[mid-1]<arr[mid]){
    s=mid+1;
}else{
    e=mid-1;
}

//recursive function call

return  peakOfMountain(arr,s,e,size );


}

int main()
{
    int arr[]={2,5,7,9,10,11,18,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;

 int result = peakOfMountain(arr,start,end,size);

    cout<<"Peak Of The given Array is: "<<result<<endl;
    return 0;
}
