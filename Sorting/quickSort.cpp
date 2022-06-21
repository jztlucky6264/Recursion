#include <iostream>
using namespace std;

int partition(int *arr, int s, int e){
  
  int pivotElement = arr[s];

  int count = 0;
  for (int  i = s+1; i <= e; i++)
  {
    if (arr[i] < pivotElement)
    {
      count++;
    }
  }
  
  int pivotIndex = s + count;
  swap(arr[pivotIndex],arr[s]);

  int i = s, j = e;

  while(i < pivotIndex && j > pivotIndex){

    while (arr[i] <= pivotElement)
    {
      i++;
    }
    
    while (arr[j] > pivotElement)
    {
      j--;
    }
    
    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++],arr[j--]);
    }
  }
return pivotIndex;
}



void quickSort(int *arr, int s ,int e){

  //base case
  if(s >= e){
    return ;
  }
  
  //find pivotIndex and sort left or right side
  // according to smaller or greater
  int p = partition(arr,s,e);

  //recursive call for left side elements
  quickSort(arr,s,p-1);

  //recursive call for right side elements
  quickSort(arr,p+1,e);
}



int main()
{
    int arr[]={30,20,10,3,4,7,40,50,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
  
    return 0;
}
