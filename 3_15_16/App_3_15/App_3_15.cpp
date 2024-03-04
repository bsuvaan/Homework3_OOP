// App_3_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// It`s got a solution for 3.16 exersise

#include <iostream>
#include <ctime>

using namespace std;


void pseudorandom()
{
    cout << "It`s a preurandom without time:  " << endl;
    cout << "rand() = " << rand() << endl;
    cout << "rand() = " << rand() << endl;
    cout << "rand() = " << rand() << endl;
}

void pseudorandomWithTime()
{
    cout<< "It`s a preurandom with time:  " << endl;
    srand(time(0));
    cout << "rand() = " << rand() << endl;
    cout << "rand() = " << rand() << endl;
    cout << "rand() = " << rand() << endl;
}

int pseudorandomInRange(int start, int end)
{
    int x = rand() % (end - start + 1) + start; //стандартный прием с остатком от деления и сложением:
            //сначала “обрезаем” сгенерированное число до нужного нам размера с помощью остатка от деления, 
            // а потом сдвигаем его так, чтобы 0 стал равен началу диапазона.
    return x;
}



int main()
{
    const int start = 1;
    const int end = 10;
    pseudorandom();
    pseudorandomWithTime();
    cout << "It`s a pseudorandomInRange with int start & int end: " << pseudorandomInRange(start, end) << endl;
    cout << "Lets get a solution for ex.3.15 a) in range[1,2]: " << pseudorandomInRange(1, 2) << endl;
    cout << "Lets get a solution for ex.3.15 b) in range[1,100]: " << pseudorandomInRange(1, 100) << endl;
    cout << "Lets get a solution for ex.3.15 c) in range[0, 9]: " << pseudorandomInRange(0, 9) << endl;
    cout << "Lets get a solution for ex.3.15 d) in range[1000, 1112]: " << pseudorandomInRange(1000, 1112) << endl;
    cout << "Lets get a solution for ex.3.15 e) in range[-1,1]: " << pseudorandomInRange(-1, 1) << endl;
    cout << "Lets get a solution for ex.3.15 d) in range[-3, 11]: " << pseudorandomInRange(-3, 11) << endl;
  
    
    return 0;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку