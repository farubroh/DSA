#include <iostream>

using namespace std;

void printArray(int pArray[],int s, int e){
    for(int i =s;i<=e;i++)
        cout<<pArray[i]<<" ";
    cout<<endl;
}

bool Binary_sarch(int *cArray,int s, int e, int value){

    cout<<endl;
    printArray(cArray,s,e);
    //base case
    if(s>e)
        return false;
    int mid = s+(e-s)/2;
    cout<<"The value of the mid is: "<<cArray[mid]<<endl;

    if(cArray[mid]==value)
        return true;
    if(cArray[mid]<value)
        return Binary_sarch(cArray,mid+1,e,value);
    else
        return Binary_sarch(cArray,s,mid-1,value);
}

int main()
{
    int arr[6]={90,91,92,93,94,95};
    int k = 2;
    bool ans = Binary_sarch(arr,0,6,k);
    if(ans)
        cout<<"The value is present in the array"<<endl;
    else
        cout<<"The value is not present in the array"<<endl;
    return 0;
}
