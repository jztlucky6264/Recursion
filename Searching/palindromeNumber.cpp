#include <iostream>
using namespace std;

 bool isPalindrome(int x) {
        
       int reverse = 0;
       int number = x;
        while(x != 0){
            int digit = x%10;
            reverse = reverse*10 + digit;
            number = number/10;
        }
       
          if(reverse == x){
            return true;
         }  else{
            return false;
         }      
    
 }
int main(int argc, char const *argv[])
{
    int x = 10;
     if(x <= 0){
         cout<<"False"<<endl;
            }
            else{
        cout<< isPalindrome(x)<<endl;
    }  
    return 0;
}
