#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct
{
    int top, bot, tag;
    int a[1000];
    int m;
}Queue;
void Init(Queue &a, int m)
{
    a.top = a.bot = a.tag = 0;
    a.m = m;
}
void push(Queue &a, int x)
{
    if(a.tag==1)&&(a.top == a.bot)
    {
        cout << "Queue is full!\n";
        return;
    }
    a.a[a.bot] = x;
    a.bot = (a.bot + 1) % m;
    if(a.tag == 0) tag = 1;
}
void pop(Queue &a, int &x)
{
    if(a.tag==0)&&(a.top == a.bot)
    {
        cout << "Queue is empty!\n";
        return;
    }
    x = a.a[top];
    a.top = (a.top+1) % m;
    if(a.tag == 1) tag = 0;
}
int main()
{
    Queue a;
    int temp;
    Inti(a, 32);
    push(a, 2);
    pop(a, temp);
    cout << temp << endl;
    return 0;
}
