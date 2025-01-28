//code to find the unique element in an array or vector
#include<iostream>                          // Include the input-output stream library
using namespace std;
int main(){
    int n,a[100],temp;                      // Declare variables: 'n' for number of elements, 'a' as the array, and 'temp' to store the unique element
    // Prompt the user to input the number of elements
    cout << "Enter the number of elements (odd number) : ";
    cin>>n;                                 // Read the number of elements from the user
    // Prompt the user to input the elements of the array
    cout<<"Enter the elements :";
    for (int i=0;i<n;i++){
        cin>>a[i];                          // Read each element into the array
    }
    cout<<"The elements are : "<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";                    // Print each element of the array
    }

    // Initialize 'temp' with the first element of the array

    temp = a[0];
    // Use XOR operation to find the unique element
    for (int i=1;i<n;i++){
        temp ^= a[i];
    }
    // Print the unique element
    cout<<"\n";
    cout<<"The unique element is : "<<temp;
}