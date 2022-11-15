#include <iostream>

using namespace std;

void Bubblesort(int *cArray, int Size){
    //base case
    if(Size==0 || Size== 1)
        return ;
     // int the ith iteration the ith maximum number number will be placed in the N-i th place
     //First maximum number is placing to the Nth place
     for(int i =0;i<Size-1;i++)
     {
         if(cArray[i]>cArray[i+1]){
            swap(cArray[i],cArray[i+1]);
         }
     }
     Bubblesort(cArray,Size-1);
}

int main()
{
    int arr[6]={3,1,99,2,33,55};
    cout<<"The sorted array is : "<<endl;
    Bubblesort(arr,6);

    for(int i =0;i<6;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}
