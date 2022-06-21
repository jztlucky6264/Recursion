#include <iostream>
using namespace std;

 void reverse_str(string& str,int i,int j){
   
   //base case
   if(i>j){
    return;
   }

//processing
   swap(str[i],str[j]);
   i++;
   j--;

  //recursive function call
  reverse_str(str,i,j);

}

int main(int argc, char const *argv[])
{
    string name="yadav";
    cout<<endl;
    reverse_str(name,0,name.length()-1);
    cout<<endl;
    
    cout<<name<<endl;
    cout<<endl;
    return 0;
}
