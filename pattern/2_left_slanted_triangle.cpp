#include <iostream>
using namespace std;

// code for the left_side_slanted_triangle pattern

/*
        *
        * *
        * * *
        * * * *
        * * * * *
 */

int main(){
    int rows;
    cout<<"Number of rows        :   ";
    cin>>rows;

// loop through number of rows
    for (int i = 1; i <=rows; i++)
    {
        // loop through the number of stars to print
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        
        // print on a new line
        cout << endl;
    }

    return 0;
}
