#include <iostream>
using namespace std;

/*
code for printing a triangle

                *
              ***
            *****
          *******
        *********
*/

int main()
{

    int rows;
    cout << "Number of rows        :   ";
    cin >> rows;

    // looping through the no of rows
    for (int i = 1; i <= rows; i++)
    {

        // looping through the space
        for (int space = 0; space < rows - i; space++)
        {
            cout << " ";
        }

        // looping through the pattern to be printed̥
        for (int print = 0; print < 2 * i - 1; print++)
        {
            cout << "*";
        }

        cout << endl;
    }


/* or we can use another method to print spaces in place of even nos.
but the output will be slightly different like

            *
           * *
          * * *
         * * * *
        * * * * *
*/

    // looping through the no of rows
    for (int i = 1; i <= rows; i++)
    {

        // looping through the space
        for (int space = 0; space < rows - i; space++)
        {
            cout << " ";
        }

        // looping through the pattern to be printed̥
        for (int print = 0; print < i; print++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}