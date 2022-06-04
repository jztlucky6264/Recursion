#include <iostream>
using namespace std;

void sayDigits(int number,string arr[]){

//base case
    if(number==0){
        return ;
    }

//processing
  int digit=number%10;
  number=number/10;

//recursive call

sayDigits(number,arr);

  cout<<arr[digit]<<endl;
}

int main()
{
 string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int number;
cin>>number;

cout<<endl<<endl;
sayDigits(number,arr);    
    cout<<endl<<endl;

    return 0;
}
