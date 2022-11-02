#include <iostream>
using namespace std;

int main(){

// To set the size of array  
int size;
cout << "What is the size of the array?" << endl;
cin >>size;

// Initialize the size of the array
int arr[size];

// To fill the array with elements
cout << "Pls enter the elements of the array" << endl;
for(int i = 0; i < size; i++){
    cin >> arr[i];
}

int j =size;
int temp;

for (int i = 0; i < size/2; i++)
{
    j--;
    
    temp = arr[j];
    arr[j]= arr[i];
    arr[i] = temp; 
}





for(int i = 0; i < size; i++){
    cout << arr[i]<<endl;
}


return 0;
}