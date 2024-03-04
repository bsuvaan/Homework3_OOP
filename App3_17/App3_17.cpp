// App3_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include <ctime>

using namespace std;

int SelectFromArray(int* arr_ind, int size)
{
    srand(time(0));
    int end = size - 1;
    int start = 0;
    int x = rand() % (end - start + 1) + start;
    
    return *(arr_ind + x);
}

int main()
{
    int arr1[5] = {2, 4, 6, 8, 10};
    int *ind_arr1 = arr1;
    cout << "Random element is " << SelectFromArray(ind_arr1, 5) << endl;
    srand(time(NULL));
    int arr2[5] = {3, 5, 7, 9, 11};
    int start = 0;
    int end = 4;

    int x = rand() % (end - start + 1) + start;
    cout <<"Random element is " << arr2[x] << endl;

    int arr3[5] = {6, 10, 14, 18, 22};
    int* ind_arr3 = arr3;
    cout << "Random element is " << SelectFromArray(ind_arr3, 5) << endl;

}

