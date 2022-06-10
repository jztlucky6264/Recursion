#include <iostream>
using namespace std;

int findKey(int *arr,int key,int &size){

   //base case
   if (size == 0)
   {
       return false;
   }
   
   //processing
   if(arr[0] == key){
       return true;
   }
    size=size-1;

   //recursive function call
   int ans=findKey(arr+1,key,size);

   return ans;

}


int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8};
    int key=14;
    int size=sizeof(arr)/sizeof(arr[0]);

    if( findKey(arr,key,size)){
        cout<<"Given Key is present"<<endl;
    }else{
          cout<<"Given Key is not present"<<endl;
    }
    return 0;
}
