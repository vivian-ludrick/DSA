#include <iostream>
using namespace std;

// code for the rectangle pattern

/*
            ******
            ******
            ******
            ******  
*/

int main(){
int rows,columns;
cout<<"Number of rows        :   ";
cin>>rows;
cout<<"Number of columns     :   ";
cin>>columns;


// looping for the no of rows
for (int i = 0; i < rows; i++)
{
    // looping for no of columns
    for (int j = 0; j < columns; j++)
    {
        cout<<" * ";
    }
    // to print pattern on a new line
    cout<<endl;
}

return 0;
}