// TESTapp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    
    int X, Y, Z, W, sum = 0;
    cout << ("enter candy weight: ");
    cin >> X;
    cout << ("enter tangerine weight: ");
    cin >> Y;
    cout << ("enter apple weight: ");
    cin >> Z;
    cout << ("enter required present weight: ");
    cin >> W;

    int temp_X, temp_Y, temp_Z;
    for (int i = 0; i <= W / X; i++) {
        for (int j = 0; j <= (W - (temp_X = X * i)) / Y; j++) {
            temp_Y = Y * j;
            temp_Z = W - (temp_X + temp_Y);
            if (temp_Z % Z == 0) { sum++; }
        }
    }

    cout << ("numer of present variants:");
    cout << sum;


  //  cin.close();
 //   cout.close();
    return 0;
}