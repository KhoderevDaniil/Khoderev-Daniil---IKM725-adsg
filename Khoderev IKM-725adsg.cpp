/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

    int main()
{
    /* Task 1
    
    int grade;
    cout << "Введіть оцінку (2-5): ";
    cin >> grade;
    
    switch(grade) {
        case 5:
            cout << "Болонська оцінка: A" << endl;
            break;
        case 4:
            cout << "Болонська оцінка: B" << endl;
            break;
        case 3:
            cout << "Болонська оцінка: C" << endl;
            break;
        case 2:
            cout << "Болонська оцінка: FX" << endl;
            break;
        default:
            cout << "Помилка! Невірна оцінка." << endl;
    }*/
    
    int n, i = 1;

    cout << "Введіть ціле число: ";
    cin >> n;

    cout << "Дільники числа " << n << ": " << endl;

    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}//