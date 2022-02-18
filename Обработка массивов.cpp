/************************
* Автор: Полянчиков А.Е. *
* Название: Обработка массивов *
* Вариант: 9 *
*************************/
#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3, COLS = 3;
    int A[ROWS][COLS], Trans[ROWS][COLS];
    srand(time(NULL));
    
    cout<<"Матрица A:"<<endl;    
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            A[i][j] = rand() % 255;
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl<<"Транспонированная матрица:"<<endl;    
    for(int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            Trans[i][j] = A[j][i];
            cout<<Trans[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl<<"Главная диагональ транспонированной матрицы:"<<endl;
    for(int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            if (i == j){
                cout<<Trans[i][j]<<"\t";
            }
        }
    }
    
    return 0;
}

