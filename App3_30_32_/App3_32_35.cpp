// App3_30_32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;


int NOD(int a, int b) 
{
    if (a < b) 
    {
        swap(a, b);
    }
    while (a % b != 0) 
    {
        a = a % b;
        swap(a, b);
    }
    return b;
}  

bool Prime(int c)
{
    for (int i = 2; i <= sqrt(c); i++) 
    {
        // If n is divisible by any number between 
        // 2 and n/2, it is not prime 
        if (c % i == 0) {
            return false;
        }
    }
    return true;
}

void PrimeInRange(int start, int end)
{
    for (int num = start; num <= end; num++)
    {
        if (Prime(num))
        {
            cout << num << endl;
        }
    }
}


int main()
{
    /*int a, b;
    cin >> a >> b;
    cout << NOD(a, b) << endl; */

    /*int c;
    cin >> c;
    if (Prime(c)) 
    { 
        cout << "Its prime" << endl; 
    }
    else
    {
        cout << "Its not a prime" << endl;
    }*/

    int start = 1;
    int end = 1000;
    PrimeInRange(start, end);
   
    
}
