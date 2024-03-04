// App_3.28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Includes a solution for 3.28 && 3.38

#include <iostream>
#include <ctime>

using namespace std;

double MinFromSet(double a, double b, double c)
{
    if (a <= b && a <= c) { return a; }
    if (b <= a && b <= c) { return b; }
    if (c <= b && c <= a) { return c; }
}

int main()
{
    /*double a, b, c;
    cout << "Enter 3 doubles: " << endl;
    cin >> a >> b >> c;
    cout << MinFromSet(a, b, c) << endl; */

    const int start = 1;
    const int end = 1000;

    srand(time(0));
    int x = rand() % (end - start + 1) + start;
    cout << x << endl;
    string answers[3] = { "Great! Its`s right", "Try again! Take a smaller one", "Try again! Take a greater one" };
    bool flag = false;
    int usr_a;
    cout << "Lets have some fun \nMy num is in range from 1 to 1000! \nCan you remind me it?\nPlease,enter your first answer to my riddle: " << endl;
    cin >> usr_a;
    
    while (flag == false)
    {
        if (usr_a == x)
        {
            cout << answers[0] << endl;
            flag = true;
        }
        else
        {
            if (usr_a > x) {cout << answers[1] << endl;}
            if (usr_a<x) { cout << answers[2] << endl; }
            cin >> usr_a;
            cout << "You`ve entered " << usr_a << endl;
        }
    }



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
