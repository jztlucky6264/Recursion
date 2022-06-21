#include <iostream>
using namespace std;

bool isPalindrome(string& str,int i){
    int j=str.length()-i-1;

    //base case
    if(i>str.length()/2){
        return true;
    }

    //processing
    if(str[i]==str[j]){
        i++;
        j--;
    }
    else{
        return false;
    }

    //recursive func call
    
  return  isPalindrome(str,i);
}


int main()
{
    string name="level";

   if( isPalindrome(name,0)){
    cout<<"Given string is Palindrome"<<endl;
   }else{
    cout<<"Given string is not Palindrome"<<endl;

   }
    return 0;
}
