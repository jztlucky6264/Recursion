#include <iostream>
using namespace std;

int power(int a,int b){

  //base case
  if(b == 0){
    return 1;
  }

  if(b == 1){
    return a;
  }

  //processing
  int ans=power(a,b/2);

  //if b is even
  if(b%2 == 0){
    return ans*ans;
  }
  //if a is odd
  else{
    return a*ans*ans;
  }


}


int main()
{
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"enter the power"<<endl;
    cin>>b;

    cout<<endl;

     int ans=power(a,b);

   cout<<"The answer is "<<ans<<endl;
   cout<<endl;
    return 0;
}
