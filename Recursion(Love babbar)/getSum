#include <iostream>

using namespace std;

int getSum(int cArray[],int Size){

    if(Size==0)
        return 0;
    if(Size==1)
        return cArray[0];
    else{
        int ans = cArray[0]+getSum(cArray+1,Size-1);
        return ans;
    }
}

int main()
{
    int Array[5]= {5,2,3,4,5};
    cout<<"The sum is: ";
    int ans = getSum(Array,5);
    cout<<ans<<endl;
    return 0;
}
