// Testapp2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int x, y, n;
int nx;
int result;

int main()
{ //first, let's tell the user what data they input
    cout << ("enter the speed of the first Xerox: ");
    cin >> x;
    cout << ("enter the speed of the second Xerox: ");
    cin >> y;
    cout << ("enter the number of pages: ");
    cin >> n;
    nx = n * y / (x + y); // 
    result = (((n - nx) * y, (nx + 1) * x)); // calculating result of operation
    cout << ("Minimum possible time of prining: ") << (result);
}


