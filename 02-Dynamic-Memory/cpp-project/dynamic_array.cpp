#include <iostream>
using namespace std;

int* fun(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}

int main()
{
    int *arr = fun();
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}