#include <iostream>

using namespace std;

void showHomepath(int src,int dest){

    cout<<src<<" to " <<dest<<endl;

    //base case
    if(src==dest){
        cout<<" I have reached the home"<<endl;
        return ;
    }
    //recursive relation
    src++;
    showHomepath(src,dest);


}

int main()
{
   int source=1,destination = 10;
   cout <<endl;

   showHomepath(source,destination);
    return 0;
}
