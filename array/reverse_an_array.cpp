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

// j is initialized outside the loop so that it doesn't get the same value evertime the loop works
int j = size;
// creating a dummy variable to swap values
int temp;

// To swap the opposite elements. 
// Looping half the size so the values don't get repeated
for (int i = 0; i < size/2; i++)
{
    // As i increases j should decrease ajacently
    j--;
    
    // Swaping the elements
    temp = arr[j];
    arr[j]= arr[i];
    arr[i] = temp; 
}


// Printing the reversed array
for(int i = 0; i < size; i++){
    cout << arr[i]<<endl;
}


return 0;
}


// At line 27 the size is divide by 2 so that the swap occurs efficiently. If the size is odd then the middle element wouldn't be swaped and if it is even then the two middle elements would be swapped. It wouldn't throw an error since the loop is only <size and not <=size