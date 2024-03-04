// 3_25App.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Includes the solution for 3.25 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReminderFromDivision(int a, int b)
{
    return a % b;
}

int IntQuotientFromDivision(int a, int b)
{
    return a / b;
}


int main()
{
    int a, b, N;
    cout << "Enter the divisible: ";
    cin >> a;
    cout << "Enter the divider: ";
    cin >> b;
    cout << "The IntQuotinentFromDivision is " <<IntQuotientFromDivision(a, b) << endl;
    cout << "The ReminderFromDivision is " << ReminderFromDivision(a, b) << endl; 
    cout << "Enter the Num needed be splited: ";
    cin >> N;
    int Len = to_string(N).length() - 1;
    
    while (N > 0)
    {
        int H = pow(10, Len);
        cout << IntQuotientFromDivision(N, H) << " ";
        N = ReminderFromDivision(N, H);
        Len -= 1;
     
    }

}

