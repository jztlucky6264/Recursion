#include <iostream> 
using namespace std;

void bubbleSortRec(int *arr,int size){

    //base case
     if(size == 0 || size == 1){
        return ;
    }

    //processing-ekk case hum solve kr lete hai baki  recursive kar lega 
    //sabse greatest element ko last index par pahucha do
     for(int i=0; i<size-1; i++){
          if(arr[i]>arr[i+1]){
             swap(arr[i],arr[i+1]);
             }
           }

    //recuersive call

     bubbleSortRec(arr,size-1);
}

int main()
{
    int arr[]={7,8,4,3,5,10};
    int size=sizeof(arr)/sizeof(arr[0]);
   
    cout<<"before sorting "<<endl;
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSortRec(arr,size);
    
    cout<<"after sorting "<<endl;
     for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
