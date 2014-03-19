// puz.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;
/**
@mainpage Метод пузырька
*/

int array[100];
/** @brief сортировка
*/
void*Sort(int col) 
{ 
    /** временная переменная для хранения промежуточного результата
	*/
    int trash=0;  
    // пока не равно количеству елементов
    for (int i=1; i<=col ; i++)
    {
        // пока не равно col-i
        for (int j=1; j<=col-i; j++) 
        {
            // если левый элемент больше
            if (array [j]>array [j+1]) 
            {
                // правого, то меняем их местами
                trash=array[j]; 
                array [j]=array [j+1];
                array [j+1]=trash;
            }
        }
    }
}
/**@brief вывод на экран нашего массива после сортировки
*/
void*Out(int col) 
{
    for (int i=1; i<=col; i++) 
    cout << array [i] <<" ";
    cout << endl; 
}
int main()
{
    int col_el;
    cout << " Enter length of array"<< endl;
    
    cin >> col_el;
       for (int n=1; n<=col_el ; n++) 
    cin >> array[n];
    Sort(col_el); 
    
    cout << "Result is :"<<endl; 
     
    Out(col_el);
   
    cin >> col_el; 
    return 0;
}