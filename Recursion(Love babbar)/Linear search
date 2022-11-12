#include <iostream>

using namespace std;

void print(int pArray[],int Size){
    cout<<"The size of the array is: "<<Size<<endl;
    for(int i =0;i<Size;i++){
        cout<<pArray[i]<<" ";
    }
    cout<<endl;
}

bool Linear_search(int cArray[],int Size,int check){

    print(cArray,Size);
    if(Size==0)
        return false;
    if(cArray[0]==check)
        return true;
    else{
        bool ans = Linear_search(cArray+1,Size-1,check);
        return ans;
    }

}

int main()
{

    int Array[5]= {5,2,3,4,5};

    int k = 2;
    bool ans = Linear_search(Array,5,k);
    if(ans)
        cout<<"The element is found"<<endl;
    else
        cout<<"The element is not found"<<endl;
    return 0;
}
