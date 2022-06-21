#include <iostream>
using namespace std;

void reachHome(int src,int dest){

cout<<src<<" to "<<dest<<endl;

//base case
  if (src==dest)
  {
      cout<<"ghar pahuch gya"<<endl;
      return;
  }
  
  //processing
  src++;

  //call recursive function
    reachHome(src,dest);


}

int main(int argc, char const *argv[])
{
    int src=1;
    int destination=10;
    
    reachHome(src,destination);
    return 0;
}
