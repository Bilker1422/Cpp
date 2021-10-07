#include <iostream>
#include <string>
#define MAX 30

using namespace std;

struct Stack
{
    char B[MAX];
    int top = -1;
};
struct array
{
    char B[MAX];
};

void push(Stack *s,char letter);
char pop(Stack *s);


int main(void)
{
    Stack a;
    array b;

    string check;
    cin >> check;

    if (check.size() %2 != 0)
        {
            cout << "no" << endl;
            return 0;
        }
    for (int i = 0; i < check.size() ; i++)
    {
        char item =check[i];
        push(&a , item);  
        b.B[i] = item;
    }

    string here = "Yes";
    

    for (int i = 0 ; i < check.size()/2 ; i++)
    {
        char item = pop(&a);
        switch (item){
        case '}':
            if (b.B[i] != '{')
            here = "No";
            break;
        case ')':
            if (b.B[i] != '(')
            here = "no";
            break;
        case ']':
            if (b.B[i] != '[')
            here = "No";
            break;
        default:
            here = "No";
        }
    }
    cout << here << endl;

}

void push(Stack *s,char letter)
{
    if (s -> top == MAX)
    {
        cout << "overload" << endl;
    }
    else 
    {
        s -> top++;
        s -> B[s -> top] = letter;
    }
}
char pop(Stack *s)
{
    if (s -> top == -1)
    {
        cout << "underload" << endl;
        return -1;
    }
    char item = s -> B[s -> top];
    s -> top--;
    return item;
    
}
