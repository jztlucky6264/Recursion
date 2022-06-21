#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){

  int mid = s+(e-s)/2;

  int leng1 = mid-s+1;
  int leng2 = e-mid;

  int *first = new int[leng1];
  int *second = new int[leng2];

  //copy values in first new array
  int halfOneStart = s;
  for(int i = 0; i < leng1; i++ ){
    first[i] = arr[halfOneStart++];
  }

  //copy value in second new array
  int halfSecondStart=mid+1;
   for(int i = 0; i < leng2; i++ ){
    second[i] = arr[halfSecondStart++];
  }

   //merge two array in sorted way
   int index1 = 0;
   int index2 = 0;
  int mainArrayIndex = s;
 
  while(index1 < leng1 && index2 < leng2){
    if(first[index1] < second[index2]){
        arr[mainArrayIndex++] = first[index1++];
    }else{
        arr[mainArrayIndex++] = second[index2++];
    }
  }
  while(index1 < leng1){
     arr[mainArrayIndex++] = first[index1++];
  }
  while (index2 < leng2)
  {
      arr[mainArrayIndex++] = second[index2++];
  }

  delete []first;
  delete []second;
  
}



void mergeSort(int *arr, int s,int e){

   //base case
   if(s >= e){
    return ;
      }
   int mid = s+(e-s)/2;

   //divide first part of array
   mergeSort(arr,s,mid);

   //divide second part of array
   mergeSort(arr,mid+1,e);

   //merge all divided part in sorted way
   merge(arr,s,e);
} 

int main(int argc, char const *argv[])
{
    int arr[]={30,20,10,3,4,7,40,50,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}
