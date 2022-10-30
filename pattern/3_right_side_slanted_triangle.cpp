#include <iostream>
using namespace std;

// code for the rectangle pattern

/*
                     *
                  * *
               * * *
            * * * *
*/

int main(){

    int rows;
    cout<<"Number of rows        :   ";
    cin>>rows;

// looping through the rows
    for (int i = 1; i <= rows; i++)
    {
        
        // looping through the space 
        for (int space = 0; space < rows-i; space++)
        {
            cout<<"  ";
        }

        // looping through the no of stars to print
        for (int print = 0; print < i; print++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    


    return 0;}