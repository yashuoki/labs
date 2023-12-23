#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main(){

	SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Одномерные массивы

    int array1[10];
    int array2[10];

    for(int i = 0; i < 10; i++){

        array2[i] = rand()%21 - 10;
    }

    int array3[5];

    for(int i = 0; i < 5; i++){

        cin >> array3[i];

        if (i%2 == 0){

            array3[i] *= 3;
        }
        else{
            array3[i] *= 5;
        }
    }

	for(int i = 0; i < 10; i++){

        cout << array1[i] << " ";
    }
    cout << "     ";

    for(int i = 0; i < 10; i++){

        cout << array2[i] << " ";
    }
    cout << "     ";

    for(int i = 0; i < 5; i++){

        cout << array3[i] << " ";
    }
    cout << endl;

    // Работа с двумерным массивом

    int sum = 0;
    int M[5][5];

	for(int i = 0; i < 5; i ++) {
		for(int j = 0; j < 5; j++) {

			M[i][j] = rand() %21 - 10;

            if (M[i][j] < 0){
                M[i][j] = 0;
            }
            cout << M[i][j] << " ";
		}
        cout << endl;
	}

    for (int i=0; i < 5; i++){
        for (int j=0; j < 5; j++){

            sum += M[i][j];
        }

        cout << "Сумма " << i + 1 << " строки = " << sum << " ";
        sum = 0;
    }

    return 0;
}
