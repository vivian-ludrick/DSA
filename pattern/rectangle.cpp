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

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}

return 0;
}