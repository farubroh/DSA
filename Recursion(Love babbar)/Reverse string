#include <iostream>

using namespace std;
 void reverseString(string &cS,int s, int e){
    cout<<"Call received for: "<<cS<<endl;
    if(s>e)
        return ;
    swap(cS[s],cS[e]);
    s++;
    e--;
    reverseString(cS,s,e);

 }

int main()
{
    string s = "arif";

    cout<<"The actual string is: "<<s<<endl;
    cout<<endl;
    reverseString(s,0,s.length()-1);

    return 0;
}
