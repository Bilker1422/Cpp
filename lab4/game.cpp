#include <iostream>
using namespace std;
//lucy is array
//jade is stock
int MAX = 0;
struct array
{
    int args[10];
}array;
struct stock
{
    int a[10];
    int top = -1;
}stock;
void push (int item)
{
    if (stock.top == (MAX-1));
    else
    {
        stock.top++;
        stock.a[stock.top] = item;
    }
}
int pop ()
{
    int item;
    if(stock.top == -1);
    else
    {
        item = stock.a[stock.top];
        stock.top--;
    }
    return item;
}
void check()
{
    
    int j = 0;
    for (int i = 0; i< MAX ; i++){
        int item = pop();
        if ( item > array.args[j])
        {
            j++;
            push(item);
            cout << "2 ";
        }
        else if (item < array.args[j])
        {

            cout << "1 ";
        }
        
        else if (array.args[j] == item)
        {
            j++;
            cout << "0 ";
        }

    }
 
}
int main()
{
    int count = 0;
    cin >> count;
    MAX = count;
    for (int i = 0 ; i < count ; i++)
    {
        int number;
        cin >> number;
        push(number);
        array.args[i] = number;
    }
    check();
}
