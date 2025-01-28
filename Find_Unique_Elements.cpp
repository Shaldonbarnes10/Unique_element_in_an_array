//code to find the unique element in an array or vector
#include<iostream>
using namespace std;
int main(){
    int n,a[100],temp;
    cout << "Enter the number of elements (odd number) : ";
    cin>>n;
    cout<<"Enter the elements :";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The elements are : "<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    temp = a[0];
    for (int i=1;i<n;i++){
        temp ^= a[i];
    }
    cout<<"\n";
    cout<<"The unique element is : "<<temp;
}