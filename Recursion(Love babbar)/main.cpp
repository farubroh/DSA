#include <iostream>

using namespace std;
bool isSorted(int cArray[],int Size){
    if(Size==0 || Size ==1)
        return true;
    if(cArray[0]>cArray[1])
        return false;
    else{
         bool ans = isSorted(cArray+1,Size-1);
        return ans;
    }


}

int main()
{
   int arr[5]={1,9,3,5,6};
   bool ans=isSorted(arr,5);
   if(ans)
    cout<<"Array is sorted"<<endl;
   else
    cout<<"Array is not sorted broh"<<endl;
    return 0;
}
