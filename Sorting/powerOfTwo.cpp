#include <iostream>
using namespace std;

int checkPowerTwo(int n){

    if(n == 1){
        return true;
    }
    else if (n%2 != 0 || n == 0 )
    {
        return false;
    }
return   checkPowerTwo(n/2);

}

int main()
{
    int number;
    cout<<"Enter the number "<<endl;
    cin>>number;

if (
checkPowerTwo(number))
{
    cout<<"given number is power of two "<<endl;
}else{
    cout<<"given number is not power of two "<<endl;

}

    

    return 0;
}
