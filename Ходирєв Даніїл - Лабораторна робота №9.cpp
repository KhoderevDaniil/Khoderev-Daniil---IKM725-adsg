/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

const int n = 5;
const int rows = 5;
const int cols = 5;

int main()
{
    /* Task 1
    int a[n][n], b[n];
    int i, j;
    int min, p;

    cout << "Matrix:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }

    min = a[0][n-1];
    for (i = 0; i < n; i++)
    {
        if (a[i][n-1-i] < min)
            min = a[i][n-1-i];
    }

    cout << "Min = " << min << '\n';

    for (i = 0; i < n; i++)
    {
        p = 1;
        for (j = 0; j < n; j++)
        {
            p = p * a[i][j];
        }
        b[i] = p;
    }
    
    cout << "Array b:\n";
    for (i = 0; i < n; i++)
    {
        cout << b[i] << '\t';
    }
    */
    
    //Task 2
    setlocale(LC_ALL, "ukr");

    int a[rows][cols];
    int col = -1;
    int sum = 0;
    
    cout << "Двовимірний масив:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << '\n';

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (a[i][j] == 0) {
                col = j;
                break;
            }
        }
        if (col != -1) break;
    }

    if (col != -1)
        cout << "Перший стовпець з нулем: " << col << '\n';
    else
        cout << "Нульових елементів у стовпцях немає\n";
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            sum += a[i][j];
        }
    }

    cout << "Сума елементів вище головної діагоналі: " << sum << '\n';
    //
    return 0;
}