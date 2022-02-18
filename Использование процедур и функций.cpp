/************************
* Автор: Полянчиков А.Е. *
* Название: Использование процедур и функций *
* Вариант: 9 *
*************************/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int k = 3, n = 5, m = 7;
    int X[k], Y[n], Z[m];
    srand(time(NULL));
    bool alreadyThere;
    
    for(int i = 0; i < k;)
    {
        alreadyThere = false;
        int newRandomValue = rand () % 25 + 1;
        for (int j = 0; j < i; j++){
            if (X[j]==newRandomValue){
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere) {
            X[i] = newRandomValue;
            i++;
        }
    }
    
    cout<<"Массив Х:"<<endl;
    for (int i = 0; i < k; i++) 
    {
        cout<<X[i]<<endl;
    }
    
    int minX = X[0];
    for (int i = 1; i < k; i++) {
        if (X[i] < minX) {
            minX = X[i];
        }
    }
    cout<<"Наименьшее число в массиве Х:"<<minX<<endl<<endl;
    
    
    for(int i = 0; i < n;)
    {
        alreadyThere = false;
        int newRandomValue = rand () % 50 + 1;
        for (int j = 0; j < i; j++){
            if (Y[j]==newRandomValue){
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere) {
            Y[i] = newRandomValue;
            i++;
        }
    }
    
    cout<<"Массив Y:"<<endl;
    for (int i = 0; i < n; i++) 
    {
        cout<<Y[i]<<endl;
    }
    
    int minY = Y[0];
    for (int i = 1; i < n; i++) {
        if (Y[i] < minY) {
            minY = Y[i];
        }
    }
    cout<<"Наименьшее число в массиве Y:"<<minY<<endl<<endl;
    
    
        for(int i = 0; i < m;)
    {
        alreadyThere = false;
        int newRandomValue = rand () % 100 + 1;
        for (int j = 0; j < i; j++){
            if (Z[j]==newRandomValue){
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere) {
            Z[i] = newRandomValue;
            i++;
        }
    }
    
    cout<<"Массив Z:"<<endl;
    for (int i = 0; i < m; i++) 
    {
        cout<<Z[i]<<endl;
    }
    
    int minZ = Z[0];
    for (int i = 1; i < m; i++) {
        if (Z[i] < minZ) {
            minZ = Z[i];
        }
    }
    cout<<"Наименьшее число в массиве Z:"<<minZ<<endl<<endl;
    
    return 0;
}
